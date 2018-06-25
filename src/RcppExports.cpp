// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// roll_cpp
arma::mat roll_cpp(const arma::mat& X, const arma::vec& Y, int window);
RcppExport SEXP _rollRegres_roll_cpp(SEXP XSEXP, SEXP YSEXP, SEXP windowSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< int >::type window(windowSEXP);
    rcpp_result_gen = Rcpp::wrap(roll_cpp(X, Y, window));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_rollRegres_roll_cpp", (DL_FUNC) &_rollRegres_roll_cpp, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_rollRegres(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
