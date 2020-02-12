// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// dbeta4
NumericVector dbeta4(NumericVector x, double min, double max, double shape1, double shape2, double gap);
RcppExport SEXP _OPER782_WI2020_dbeta4(SEXP xSEXP, SEXP minSEXP, SEXP maxSEXP, SEXP shape1SEXP, SEXP shape2SEXP, SEXP gapSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type min(minSEXP);
    Rcpp::traits::input_parameter< double >::type max(maxSEXP);
    Rcpp::traits::input_parameter< double >::type shape1(shape1SEXP);
    Rcpp::traits::input_parameter< double >::type shape2(shape2SEXP);
    Rcpp::traits::input_parameter< double >::type gap(gapSEXP);
    rcpp_result_gen = Rcpp::wrap(dbeta4(x, min, max, shape1, shape2, gap));
    return rcpp_result_gen;
END_RCPP
}
// pbeta4
NumericVector pbeta4(NumericVector q, double min, double max, double shape1, double shape2, double gap);
RcppExport SEXP _OPER782_WI2020_pbeta4(SEXP qSEXP, SEXP minSEXP, SEXP maxSEXP, SEXP shape1SEXP, SEXP shape2SEXP, SEXP gapSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type q(qSEXP);
    Rcpp::traits::input_parameter< double >::type min(minSEXP);
    Rcpp::traits::input_parameter< double >::type max(maxSEXP);
    Rcpp::traits::input_parameter< double >::type shape1(shape1SEXP);
    Rcpp::traits::input_parameter< double >::type shape2(shape2SEXP);
    Rcpp::traits::input_parameter< double >::type gap(gapSEXP);
    rcpp_result_gen = Rcpp::wrap(pbeta4(q, min, max, shape1, shape2, gap));
    return rcpp_result_gen;
END_RCPP
}
// qbeta4
NumericVector qbeta4(NumericVector p, double min, double max, double shape1, double shape2);
RcppExport SEXP _OPER782_WI2020_qbeta4(SEXP pSEXP, SEXP minSEXP, SEXP maxSEXP, SEXP shape1SEXP, SEXP shape2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type p(pSEXP);
    Rcpp::traits::input_parameter< double >::type min(minSEXP);
    Rcpp::traits::input_parameter< double >::type max(maxSEXP);
    Rcpp::traits::input_parameter< double >::type shape1(shape1SEXP);
    Rcpp::traits::input_parameter< double >::type shape2(shape2SEXP);
    rcpp_result_gen = Rcpp::wrap(qbeta4(p, min, max, shape1, shape2));
    return rcpp_result_gen;
END_RCPP
}
// rbeta4
NumericVector rbeta4(int const n, double min, double max, double shape1, double shape2);
RcppExport SEXP _OPER782_WI2020_rbeta4(SEXP nSEXP, SEXP minSEXP, SEXP maxSEXP, SEXP shape1SEXP, SEXP shape2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int const >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type min(minSEXP);
    Rcpp::traits::input_parameter< double >::type max(maxSEXP);
    Rcpp::traits::input_parameter< double >::type shape1(shape1SEXP);
    Rcpp::traits::input_parameter< double >::type shape2(shape2SEXP);
    rcpp_result_gen = Rcpp::wrap(rbeta4(n, min, max, shape1, shape2));
    return rcpp_result_gen;
END_RCPP
}
// timesTwo
Rcpp::List timesTwo(NumericVector vec_in);
RcppExport SEXP _OPER782_WI2020_timesTwo(SEXP vec_inSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type vec_in(vec_inSEXP);
    rcpp_result_gen = Rcpp::wrap(timesTwo(vec_in));
    return rcpp_result_gen;
END_RCPP
}
<<<<<<< HEAD
=======
// psi_update
Rcpp::List psi_update(Eigen::MatrixXcd PSI, Eigen::MatrixXcd PHI, int Hp);
RcppExport SEXP _OPER782_WI2020_psi_update(SEXP PSISEXP, SEXP PHISEXP, SEXP HpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXcd >::type PSI(PSISEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXcd >::type PHI(PHISEXP);
    Rcpp::traits::input_parameter< int >::type Hp(HpSEXP);
    rcpp_result_gen = Rcpp::wrap(psi_update(PSI, PHI, Hp));
    return rcpp_result_gen;
END_RCPP
}
>>>>>>> 6ea8a395828674722b3e8030174ccac9411e65e5
// rcpp_hello_world
List rcpp_hello_world();
RcppExport SEXP _OPER782_WI2020_rcpp_hello_world() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_hello_world());
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_OPER782_WI2020_dbeta4", (DL_FUNC) &_OPER782_WI2020_dbeta4, 6},
    {"_OPER782_WI2020_pbeta4", (DL_FUNC) &_OPER782_WI2020_pbeta4, 6},
    {"_OPER782_WI2020_qbeta4", (DL_FUNC) &_OPER782_WI2020_qbeta4, 5},
    {"_OPER782_WI2020_rbeta4", (DL_FUNC) &_OPER782_WI2020_rbeta4, 5},
    {"_OPER782_WI2020_timesTwo", (DL_FUNC) &_OPER782_WI2020_timesTwo, 1},
<<<<<<< HEAD
=======
    {"_OPER782_WI2020_psi_update", (DL_FUNC) &_OPER782_WI2020_psi_update, 3},
>>>>>>> 6ea8a395828674722b3e8030174ccac9411e65e5
    {"_OPER782_WI2020_rcpp_hello_world", (DL_FUNC) &_OPER782_WI2020_rcpp_hello_world, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_OPER782_WI2020(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
