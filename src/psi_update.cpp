#define _USE_MATH_DEFINES
#include <math.h>
#include <complex>
#include <RcppNumerical.h>
//[[Rcpp::depends(RcppEigen)]]
//[[Rcpp::depends(RcppNumerical)]]

using namespace Numer;
using namespace Rcpp;
using Eigen::MatrixXcd;

//' @export

// [[Rcpp::export]]
Rcpp::List psi_update(Eigen::MatrixXcd PSI,
                      Eigen::MatrixXcd PHI,
                      int Hp) {
  
  int r = PHI.rows();
  
  for(int i = 0; i < Hp; i++){
    
      for(int j = 0; j < r; j++){
        
          PSI(j, 2*i + 0) = PHI(j,i);
          PSI(j, 2*i + 1) = PHI(j,i + Hp);
        
      }
   
  }
  
  return Rcpp::List::create(Named("PSI") = PSI,
                            Named("PHI") = PHI,
                            Named("HP")  = Hp);
  
}

/*** R
G = 0:25
Hp = 0:12
D0 = c(0,1,4)
D1 = c(0,2,7)
Len = length(G)
Hlen = length(Hp)
Dlen = length(D)
F_mat = matrix(exp(2i*pi*G%*%t(G)/Len),ncol=Len)
D = c(2*D0,(1+2*D1))
Phi = F_mat[D+1,]/sqrt(Dlen)
Psi = matrix(rep(0,(Len*Dlen)),ncol=Len)
TwoNorm = matrix(rep(0,Hlen^2),ncol=Hlen)
FroNorm = TwoNorm


out = OPER782.WI2020:::psi_update(Psi, Phi, length(Hp))

*/
