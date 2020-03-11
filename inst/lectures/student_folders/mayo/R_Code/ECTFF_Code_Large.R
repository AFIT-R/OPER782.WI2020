rm(list=ls())
#require(matlab)
#Define space G, subspace H'
G<-0:2430
Len<-length(G)
Hp<-0:220
Hlen<-length(Hp)

#Define Character Table
F<-matrix(exp(2i*pi*G%*%t(G)/Len),ncol=Len)

#Define Subset D
D0<-c(0,1,24,61,116)
D1<-c(0,3,46,65,113)
D2<-c(0,4,73,89,130)
D3<-c(0,5,77,122,124)
D4<-c(0,6,39,50,118)
D5<-c(0,7,66,81,94)
D6<-c(0,8,38,64,139)
D7<-c(0,9,29,80,107)
D8<-c(0,10,35,93,135)
D9<-c(0,12,34,52,88)
D10<-c(0,14,31,63,84)
D<-c(11*D0,(1+11*D1),(2+11*D2),(3+11*D3),(4+11*D4),
    (5+11*D5),(6+11*D6),(7+11*D7),(8+11*D8),(9+11*D9),(10+11*D10))
Dlen<-length(D)

Dlist <- list(c(0,1,24,61,116),
              c(0,3,46,65,113),
              c(0,4,73,89,130),
              c(0,5,77,122,124),
              c(0,6,39,50,118),
              c(0,7,66,81,94),
              c(0,8,38,64,139),
              c(0,9,29,80,107),
              c(0,10,35,93,135),
              c(0,12,34,52,88),
              c(0,14,31,63,84))
# 
# makeD = function(dlist){
#   
#   Dvec <- integer(length(D))
#   
#   Dvec = sapply(1:length(dlist),
#                 FUN = function(x) (x-1)+length(dlist)*dlist[[x]] )
#   
#   return(Dvec[1:prod(dim(Dvec))])
#   
# } 


#Generate Phi - May need to re-index here
Phi<-F[D+1,]/sqrt(Dlen)

Psi<-matrix(rep(0,(Len*Dlen)),ncol=Len)

for(ii in Hp){
  
  Psi[,(2*ii+c(1,2))]=Phi[,c(ii+1,ii+1+Hlen)]
}

Gram<-Conj(t(Psi))%*%Psi
TwoNorm<-matrix(rep(0,Hlen^2),ncol=Hlen)
FroNorm<-TwoNorm

for(ii in Hp){
  for(jj in Hp){
    TwoNorm[ii+1,jj+1] = norm(Mod(Gram[(11*ii+1:11),(11*jj+1:11)]));
    FroNorm[ii+1,jj+1] = norm(Mod(Gram[(11*ii+1:11),(11*jj+1:11)]),'F');
    
  }
}

