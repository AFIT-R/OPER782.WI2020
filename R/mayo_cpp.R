#' Ben Mayo code
#'
#' @export
def_GH <- function(G = 0:25,
                   Hp = 0:12,
                   D0 = c(0,1,4),
                   D1 = c(0,2,7),
                   Len = length(G),
                   Hlen = length(Hp),
                   Dlen = length(D),
                   F_mat = matrix(exp(2i*pi*G%*%t(G)/Len),ncol=Len),
                   D = c(2*D0,(1+2*D1)),
                   Phi = F_mat[D+1,]/sqrt(Dlen),
                   Psi = matrix(rep(0,(Len*Dlen)),ncol=Len),
                   TwoNorm = matrix(rep(0,Hlen^2),ncol=Hlen),
                   FroNorm = TwoNorm) {
  
  # send the length of hp to c++
    cpp1 = psi_update(PHI = Phi, PSI = Psi, Hp = length(Hp))
      
    Gram = Conj(t(cpp1$PSI))%*%cpp1$PSI
  
  for(ii in Hp){

      for(jj in Hp){

          mod = Mod(Gram[(2*ii+c(1, 2)),(2*jj+c(1, 2))])
          
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