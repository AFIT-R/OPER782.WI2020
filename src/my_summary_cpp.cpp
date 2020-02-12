#include <Rcpp.h>
using namespace Rcpp;

//' @export
// [[Rcpp::export]]
Rcpp::List timesTwo(NumericVector vec_in) {
  
  int N = vec_in.size();
  
  double sum = 0;
  
<<<<<<< HEAD
  for(int i =0; i < N; i++){
    
    sum = sum + vec_in.at(i);
=======
  for(int i = 0; i < N; i++){
    
    sum = sum + vec_in.at(i);
    
>>>>>>> 6ea8a395828674722b3e8030174ccac9411e65e5
  }
  
  double my_mean = sum / N;
  
  double my_var = 0;
<<<<<<< HEAD
  for(int i =0; i < N; i++){
    
    my_var = my_var + pow(vec_in.at(i) - my_mean, 2);
=======
  
  for(int i = 0; i < N; i++){
    
      my_var = my_var + pow(vec_in.at(i) - my_mean,2);
    
>>>>>>> 6ea8a395828674722b3e8030174ccac9411e65e5
  }
  
  double var = (1/(double(N) - 1)) * my_var;
  
  return(Rcpp::List::create(Named("mean") = my_mean,
<<<<<<< HEAD
                            Named("std")= std::sqrt(var)));
}




=======
                            Named("std") =  std::sqrt(var)));
  
  
  
}


>>>>>>> 6ea8a395828674722b3e8030174ccac9411e65e5
// You can include R code blocks in C++ files processed with sourceCpp
// (useful for testing and development). The R code will be automatically 
// run after the compilation.
//

/*** R
timesTwo(42)
*/
