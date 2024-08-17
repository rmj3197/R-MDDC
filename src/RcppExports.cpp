// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// get_expected_counts
Eigen::MatrixXd get_expected_counts(const Eigen::MatrixXd& continTable);
RcppExport SEXP _MDDC_get_expected_counts(SEXP continTableSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type continTable(continTableSEXP);
    rcpp_result_gen = Rcpp::wrap(get_expected_counts(continTable));
    return rcpp_result_gen;
END_RCPP
}
// getZijMat
Rcpp::List getZijMat(const Eigen::MatrixXd& continTable, bool na);
RcppExport SEXP _MDDC_getZijMat(SEXP continTableSEXP, SEXP naSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type continTable(continTableSEXP);
    Rcpp::traits::input_parameter< bool >::type na(naSEXP);
    rcpp_result_gen = Rcpp::wrap(getZijMat(continTable, na));
    return rcpp_result_gen;
END_RCPP
}
// getPVal
Eigen::VectorXd getPVal(const Eigen::VectorXd& obs, const Eigen::VectorXd& dist);
RcppExport SEXP _MDDC_getPVal(SEXP obsSEXP, SEXP distSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type obs(obsSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type dist(distSEXP);
    rcpp_result_gen = Rcpp::wrap(getPVal(obs, dist));
    return rcpp_result_gen;
END_RCPP
}
// getFisherExactTestTable
Eigen::MatrixXd getFisherExactTestTable(Eigen::MatrixXd continTable, int rowIdx, int colIdx, bool excludeSameDrugClass);
RcppExport SEXP _MDDC_getFisherExactTestTable(SEXP continTableSEXP, SEXP rowIdxSEXP, SEXP colIdxSEXP, SEXP excludeSameDrugClassSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type continTable(continTableSEXP);
    Rcpp::traits::input_parameter< int >::type rowIdx(rowIdxSEXP);
    Rcpp::traits::input_parameter< int >::type colIdx(colIdxSEXP);
    Rcpp::traits::input_parameter< bool >::type excludeSameDrugClass(excludeSameDrugClassSEXP);
    rcpp_result_gen = Rcpp::wrap(getFisherExactTestTable(continTable, rowIdx, colIdx, excludeSameDrugClass));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_MDDC_get_expected_counts", (DL_FUNC) &_MDDC_get_expected_counts, 1},
    {"_MDDC_getZijMat", (DL_FUNC) &_MDDC_getZijMat, 2},
    {"_MDDC_getPVal", (DL_FUNC) &_MDDC_getPVal, 2},
    {"_MDDC_getFisherExactTestTable", (DL_FUNC) &_MDDC_getFisherExactTestTable, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_MDDC(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
