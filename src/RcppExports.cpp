// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// CV_ADMMc
List CV_ADMMc(const arma::mat& X, const arma::mat& S, const arma::colvec& lam, const arma::colvec& alpha, bool diagonal, bool path, double rho, const double mu, const double tau_inc, const double tau_dec, std::string crit, const double tol_abs, const double tol_rel, int maxit, int adjmaxit, int K, std::string crit_cv, std::string start, std::string trace);
RcppExport SEXP _ADMMsigma_CV_ADMMc(SEXP XSEXP, SEXP SSEXP, SEXP lamSEXP, SEXP alphaSEXP, SEXP diagonalSEXP, SEXP pathSEXP, SEXP rhoSEXP, SEXP muSEXP, SEXP tau_incSEXP, SEXP tau_decSEXP, SEXP critSEXP, SEXP tol_absSEXP, SEXP tol_relSEXP, SEXP maxitSEXP, SEXP adjmaxitSEXP, SEXP KSEXP, SEXP crit_cvSEXP, SEXP startSEXP, SEXP traceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type S(SSEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type lam(lamSEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< bool >::type diagonal(diagonalSEXP);
    Rcpp::traits::input_parameter< bool >::type path(pathSEXP);
    Rcpp::traits::input_parameter< double >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< const double >::type mu(muSEXP);
    Rcpp::traits::input_parameter< const double >::type tau_inc(tau_incSEXP);
    Rcpp::traits::input_parameter< const double >::type tau_dec(tau_decSEXP);
    Rcpp::traits::input_parameter< std::string >::type crit(critSEXP);
    Rcpp::traits::input_parameter< const double >::type tol_abs(tol_absSEXP);
    Rcpp::traits::input_parameter< const double >::type tol_rel(tol_relSEXP);
    Rcpp::traits::input_parameter< int >::type maxit(maxitSEXP);
    Rcpp::traits::input_parameter< int >::type adjmaxit(adjmaxitSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< std::string >::type crit_cv(crit_cvSEXP);
    Rcpp::traits::input_parameter< std::string >::type start(startSEXP);
    Rcpp::traits::input_parameter< std::string >::type trace(traceSEXP);
    rcpp_result_gen = Rcpp::wrap(CV_ADMMc(X, S, lam, alpha, diagonal, path, rho, mu, tau_inc, tau_dec, crit, tol_abs, tol_rel, maxit, adjmaxit, K, crit_cv, start, trace));
    return rcpp_result_gen;
END_RCPP
}
// CV_RIDGEc
List CV_RIDGEc(const arma::mat& X, const arma::mat& S, const arma::colvec& lam, bool path, int K, std::string trace);
RcppExport SEXP _ADMMsigma_CV_RIDGEc(SEXP XSEXP, SEXP SSEXP, SEXP lamSEXP, SEXP pathSEXP, SEXP KSEXP, SEXP traceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type S(SSEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type lam(lamSEXP);
    Rcpp::traits::input_parameter< bool >::type path(pathSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< std::string >::type trace(traceSEXP);
    rcpp_result_gen = Rcpp::wrap(CV_RIDGEc(X, S, lam, path, K, trace));
    return rcpp_result_gen;
END_RCPP
}
// CVP_ADMMc
arma::mat CVP_ADMMc(const int n, const arma::mat& S_train, const arma::mat& S_valid, const arma::colvec& lam, const arma::colvec& alpha, bool diagonal, double rho, const double mu, const double tau_inc, const double tau_dec, std::string crit, const double tol_abs, const double tol_rel, int maxit, int adjmaxit, std::string crit_cv, std::string start, std::string trace);
RcppExport SEXP _ADMMsigma_CVP_ADMMc(SEXP nSEXP, SEXP S_trainSEXP, SEXP S_validSEXP, SEXP lamSEXP, SEXP alphaSEXP, SEXP diagonalSEXP, SEXP rhoSEXP, SEXP muSEXP, SEXP tau_incSEXP, SEXP tau_decSEXP, SEXP critSEXP, SEXP tol_absSEXP, SEXP tol_relSEXP, SEXP maxitSEXP, SEXP adjmaxitSEXP, SEXP crit_cvSEXP, SEXP startSEXP, SEXP traceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int >::type n(nSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type S_train(S_trainSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type S_valid(S_validSEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type lam(lamSEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< bool >::type diagonal(diagonalSEXP);
    Rcpp::traits::input_parameter< double >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< const double >::type mu(muSEXP);
    Rcpp::traits::input_parameter< const double >::type tau_inc(tau_incSEXP);
    Rcpp::traits::input_parameter< const double >::type tau_dec(tau_decSEXP);
    Rcpp::traits::input_parameter< std::string >::type crit(critSEXP);
    Rcpp::traits::input_parameter< const double >::type tol_abs(tol_absSEXP);
    Rcpp::traits::input_parameter< const double >::type tol_rel(tol_relSEXP);
    Rcpp::traits::input_parameter< int >::type maxit(maxitSEXP);
    Rcpp::traits::input_parameter< int >::type adjmaxit(adjmaxitSEXP);
    Rcpp::traits::input_parameter< std::string >::type crit_cv(crit_cvSEXP);
    Rcpp::traits::input_parameter< std::string >::type start(startSEXP);
    Rcpp::traits::input_parameter< std::string >::type trace(traceSEXP);
    rcpp_result_gen = Rcpp::wrap(CVP_ADMMc(n, S_train, S_valid, lam, alpha, diagonal, rho, mu, tau_inc, tau_dec, crit, tol_abs, tol_rel, maxit, adjmaxit, crit_cv, start, trace));
    return rcpp_result_gen;
END_RCPP
}
// CVP_RIDGEc
arma::mat CVP_RIDGEc(const int n, const arma::mat& S_train, const arma::mat& S_valid, const arma::colvec& lam, std::string trace);
RcppExport SEXP _ADMMsigma_CVP_RIDGEc(SEXP nSEXP, SEXP S_trainSEXP, SEXP S_validSEXP, SEXP lamSEXP, SEXP traceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int >::type n(nSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type S_train(S_trainSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type S_valid(S_validSEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type lam(lamSEXP);
    Rcpp::traits::input_parameter< std::string >::type trace(traceSEXP);
    rcpp_result_gen = Rcpp::wrap(CVP_RIDGEc(n, S_train, S_valid, lam, trace));
    return rcpp_result_gen;
END_RCPP
}
// RIDGEc
arma::mat RIDGEc(const arma::mat& S, double lam);
RcppExport SEXP _ADMMsigma_RIDGEc(SEXP SSEXP, SEXP lamSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type S(SSEXP);
    Rcpp::traits::input_parameter< double >::type lam(lamSEXP);
    rcpp_result_gen = Rcpp::wrap(RIDGEc(S, lam));
    return rcpp_result_gen;
END_RCPP
}
// ADMMc
List ADMMc(const arma::mat& S, const arma::mat& initOmega, const arma::mat& initZ2, const arma::mat& initY, const double lam, const double alpha, bool diagonal, double rho, const double mu, const double tau_inc, const double tau_dec, std::string crit, const double tol_abs, const double tol_rel, const int maxit);
RcppExport SEXP _ADMMsigma_ADMMc(SEXP SSEXP, SEXP initOmegaSEXP, SEXP initZ2SEXP, SEXP initYSEXP, SEXP lamSEXP, SEXP alphaSEXP, SEXP diagonalSEXP, SEXP rhoSEXP, SEXP muSEXP, SEXP tau_incSEXP, SEXP tau_decSEXP, SEXP critSEXP, SEXP tol_absSEXP, SEXP tol_relSEXP, SEXP maxitSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type S(SSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type initOmega(initOmegaSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type initZ2(initZ2SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type initY(initYSEXP);
    Rcpp::traits::input_parameter< const double >::type lam(lamSEXP);
    Rcpp::traits::input_parameter< const double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< bool >::type diagonal(diagonalSEXP);
    Rcpp::traits::input_parameter< double >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< const double >::type mu(muSEXP);
    Rcpp::traits::input_parameter< const double >::type tau_inc(tau_incSEXP);
    Rcpp::traits::input_parameter< const double >::type tau_dec(tau_decSEXP);
    Rcpp::traits::input_parameter< std::string >::type crit(critSEXP);
    Rcpp::traits::input_parameter< const double >::type tol_abs(tol_absSEXP);
    Rcpp::traits::input_parameter< const double >::type tol_rel(tol_relSEXP);
    Rcpp::traits::input_parameter< const int >::type maxit(maxitSEXP);
    rcpp_result_gen = Rcpp::wrap(ADMMc(S, initOmega, initZ2, initY, lam, alpha, diagonal, rho, mu, tau_inc, tau_dec, crit, tol_abs, tol_rel, maxit));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_ADMMsigma_CV_ADMMc", (DL_FUNC) &_ADMMsigma_CV_ADMMc, 19},
    {"_ADMMsigma_CV_RIDGEc", (DL_FUNC) &_ADMMsigma_CV_RIDGEc, 6},
    {"_ADMMsigma_CVP_ADMMc", (DL_FUNC) &_ADMMsigma_CVP_ADMMc, 18},
    {"_ADMMsigma_CVP_RIDGEc", (DL_FUNC) &_ADMMsigma_CVP_RIDGEc, 5},
    {"_ADMMsigma_RIDGEc", (DL_FUNC) &_ADMMsigma_RIDGEc, 2},
    {"_ADMMsigma_ADMMc", (DL_FUNC) &_ADMMsigma_ADMMc, 15},
    {NULL, NULL, 0}
};

RcppExport void R_init_ADMMsigma(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
