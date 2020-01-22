pv <- function(FV, r , n){
  present_value <- FV/ (1 + r)^n
  round(present_value, 2)
}