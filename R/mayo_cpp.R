#' Ben Mayo code
#'
#' @export
#' @examples 
#' \dontrun{
#' 
#' G<-0:2430
#' Hp<-0:220
#' 
#' Dlist <- list(c(0,1,24,61,116),
#'               c(0,3,46,65,113),
#'               c(0,4,73,89,130),
#'               c(0,5,77,122,124),
#'               c(0,6,39,50,118),
#'               c(0,7,66,81,94),
#'               c(0,8,38,64,139),
#'               c(0,9,29,80,107),
#'               c(0,10,35,93,135),
#'               c(0,12,34,52,88),
#'               c(0,14,31,63,84))
#' 
#' def_GH(G,Hp,Dlist)
#' 
#' }
def_GH <- function(G = 0:25,
                   Hp = 0:12,
                   Dlist,
                   Len = length(G),
                   Hlen = length(Hp),
                   Dlen = length(D),
                   F_mat = matrix(exp(2i*pi*G%*%t(G)/Len),ncol=Len),
                   D = makeD(Dlist),
                   Phi = F_mat[D+1,]/sqrt(Dlen),
                   Psi = matrix(rep(0,(Len*Dlen)),ncol=Len),
                   TwoNorm = matrix(rep(0,Hlen^2),ncol=Hlen),
                   FroNorm = TwoNorm) {
  
makeD = function(dlist){
  
  Dvec = sapply(1:length(dlist),
                FUN = function(x) (x-1)+length(dlist)*dlist[[x]] )
  
  return(Dvec[1:prod(dim(Dvec))])
  
} 

  
  # send the length of hp to c++
    cpp1 = psi_update(PHI = Phi, PSI = Psi, Hp = length(Hp))
      
    Gram = Conj(t(cpp1$PSI))%*%cpp1$PSI
  
  for(ii in Hp){

      for(jj in Hp){

          mod = Mod(Gram[(length(Dlist)*ii+1:length(Dlist)),(length(Dlist)*jj+1:length(Dlist))])
          
          TwoNorm[ii+1,jj+1] = norm(mod);
          FroNorm[ii+1,jj+1] = norm(mod,'F');

      }
   }
  
    out = list()
    out$gram = Gram
    out$phi = cpp1$PHI
    out$psi = cpp1$PSI
    out$TwoNorm = TwoNorm
    out$FroNorm = FroNorm
    
    return(out)
    
}