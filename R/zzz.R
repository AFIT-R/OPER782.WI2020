.onLoad <- function(libname, pkgname) {
  
  py_file = system.file("python", "python.py", package = "OPER782.WI2020")
  
  reticulate::source_python(py_file)
  
  }

.onUnload <- function (libpath) {
  library.dynam.unload("OPER782.WI2020", libpath)
}
