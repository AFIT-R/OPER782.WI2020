#' @title Test Python function `sampler`
#'
#' @export
#' @param df A \code{data.frame}-class object
#' @param colname Character string denoting the name of the column within \code{df} to work with
#' @param N Integer for the size of the sample
#' @param alpha Numeric value for the significance
#' @param mu_0 The value of the mean for the Null hypothesis
#' 
#' @return A named list 
test_sampler <- function(df, colname,N,alpha,mu_0){
  
  if(!(colname %in% colnames(df))) stop("argument colname is not one of the column names in df")
  
  N = as.integer(N)
  
  out = py$sampler(df = df, colname = colname, N = N, alpha = alpha, mu_0 = mu_0)
  
  return(out)
  
}