#define _USE_MATH_DEFINES
#include <math.h>
#include <complex>
#include <RcppNumerical.h>
//[[Rcpp::depends(RcppEigen)]]
//[[Rcpp::depends(RcppNumerical)]]

using namespace Numer;
using namespace Rcpp;
using Eigen::Map;                       // 'maps' rather than copies
using Eigen::MatrixXd;                  // variable size matrix, double precision
using Eigen::Vector2d;                  // variable size vector, double precision
using Eigen::MatrixXcd;

// [[Rcpp::export]]
Rcpp::List new_norm(Eigen::MatrixXcd twonorm,
                    Eigen::MatrixXcd fronorm,
                    Eigen::MatrixXcd gram,
                    int Hp) {
  
  
  for(int i = 0; i < Hp; i++){
    
      for(int j = 0; j < Hp; j++){
        
          TwoNorm[ii+1,jj+1] = norm(Mod(Gram[(2*ii+c(1, 2)),(2*jj+c(1, 2))]));
          FroNorm[ii+1,jj+1] = norm(Mod(Gram[2*ii+c(1, 2),2*jj+c(1, 2)]),'F');
    
      }
   }

  
  return Rcpp::List::create(Named("twonorm") = twonorm,
                            Named("fronorm") = fronorm,
                            Named("gram") = gram,
                            Named("HP") = Hp);
}


// You can include R code blocks in C++ files processed with sourceCpp
// (useful for testing and development). The R code will be automatically 
// run after the compilation.
//

/*** R
timesTwo(42)
*/
