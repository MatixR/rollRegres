// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// roll_cpp
Rcpp::List roll_cpp(const arma::mat& X, const arma::vec& Y, int window, const bool do_compute_R_sqs, const bool do_compute_sigmas, const bool do_1_step_forecasts, arma::ivec grp, const bool use_grp);
RcppExport SEXP _rollRegres_roll_cpp(SEXP XSEXP, SEXP YSEXP, SEXP windowSEXP, SEXP do_compute_R_sqsSEXP, SEXP do_compute_sigmasSEXP, SEXP do_1_step_forecastsSEXP, SEXP grpSEXP, SEXP use_grpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< int >::type window(windowSEXP);
    Rcpp::traits::input_parameter< const bool >::type do_compute_R_sqs(do_compute_R_sqsSEXP);
    Rcpp::traits::input_parameter< const bool >::type do_compute_sigmas(do_compute_sigmasSEXP);
    Rcpp::traits::input_parameter< const bool >::type do_1_step_forecasts(do_1_step_forecastsSEXP);
    Rcpp::traits::input_parameter< arma::ivec >::type grp(grpSEXP);
    Rcpp::traits::input_parameter< const bool >::type use_grp(use_grpSEXP);
    rcpp_result_gen = Rcpp::wrap(roll_cpp(X, Y, window, do_compute_R_sqs, do_compute_sigmas, do_1_step_forecasts, grp, use_grp));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_rollRegres_roll_cpp", (DL_FUNC) &_rollRegres_roll_cpp, 8},
    {NULL, NULL, 0}
};

RcppExport void R_init_rollRegres(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
