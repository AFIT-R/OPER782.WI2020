#include <Rcpp.h>
using namespace Rcpp;

//' @export
// [[Rcpp::export]]
Rcpp::List timesTwo(NumericVector vec_in) {
  
  int N = vec_in.size();
  
  double sum = 0;
  
  for(int i = 0; i < N; i++){
    
    sum = sum + vec_in.at(i);
    
  }
  
  double my_mean = sum / N;
  
  double my_var = 0;
  
  for(int i = 0; i < N; i++){
    
      my_var = my_var + pow(vec_in.at(i) - my_mean,2);
    
  }
  
  double var = (1/(double(N) - 1)) * my_var;
  
  return(Rcpp::List::create(Named("mean") = my_mean,
                            Named("std") =  std::sqrt(var)));
  
  
  
}


// You can include R code blocks in C++ files processed with sourceCpp
// (useful for testing and development). The R code will be automatically 
// run after the compilation.
//

/*** R
timesTwo(42)
*/
