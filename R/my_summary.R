my_summary_R <- function(vec_in){
  
  N = length(vec_in)
  
  sum_vec = 0
  
  for(i in 1:N) { sum_vec = sum_vec + vec_in[i] }
  
  my_mean = sum_vec / N
  
  
  samp_var = 0
  
  for(i in 1:N) { samp_var = samp_var + (i - my_mean)**2 }
  
  
  adj_var = 1/(N-1) * samp_var
  
  out <- list()
  
  out$mean = my_mean
  out$std = sqrt(adj_var)
  
  return(out)
}


my_summary_R2 <- function(vec_in){
  
  N = length(vec_in)
  
  my_mean = sum(vec_in) / N
  
  adj_var = 1/(N-1) * sum((vec_in - my_mean)**2)
  
  out <- list()
  
  out$mean = my_mean
  out$std = sqrt(adj_var)
  
  return(out)
}