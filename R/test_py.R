#' Test out running Python
#'
#' @param sampsize The size of the sample
#' @param nsim     The number of simulations
#'
#' @return A seaborn kdeplot (kernel density estimate plot)
#' @export
#' @import reticulate
test_py <- function(sampsize, nsim, exp = T, param = 0.3) {
  
  mv = py$norm_converge(samp_siz = sampsize, num_sims = nsim, exp = exp, param = param)
  
  dens = density(mv)
  plot(dens, lwd = 2.5, col = "royalblue", las = 1, main = "")
  
  polygon(c(min(dens$x), dens$x),
        c(0, dens$y),
        col = scales::alpha("royalblue",0.15))
  
}