// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// roll_any
LogicalMatrix roll_any(const LogicalMatrix& x, const int& width, const int& min_obs, const bool& complete_obs, const bool& na_restore, const bool& online);
RcppExport SEXP _roll_roll_any(SEXP xSEXP, SEXP widthSEXP, SEXP min_obsSEXP, SEXP complete_obsSEXP, SEXP na_restoreSEXP, SEXP onlineSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const LogicalMatrix& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const int& >::type width(widthSEXP);
    Rcpp::traits::input_parameter< const int& >::type min_obs(min_obsSEXP);
    Rcpp::traits::input_parameter< const bool& >::type complete_obs(complete_obsSEXP);
    Rcpp::traits::input_parameter< const bool& >::type na_restore(na_restoreSEXP);
    Rcpp::traits::input_parameter< const bool& >::type online(onlineSEXP);
    rcpp_result_gen = Rcpp::wrap(roll_any(x, width, min_obs, complete_obs, na_restore, online));
    return rcpp_result_gen;
END_RCPP
}
// roll_all
LogicalMatrix roll_all(const LogicalMatrix& x, const int& width, const int& min_obs, const bool& complete_obs, const bool& na_restore, const bool& online);
RcppExport SEXP _roll_roll_all(SEXP xSEXP, SEXP widthSEXP, SEXP min_obsSEXP, SEXP complete_obsSEXP, SEXP na_restoreSEXP, SEXP onlineSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const LogicalMatrix& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const int& >::type width(widthSEXP);
    Rcpp::traits::input_parameter< const int& >::type min_obs(min_obsSEXP);
    Rcpp::traits::input_parameter< const bool& >::type complete_obs(complete_obsSEXP);
    Rcpp::traits::input_parameter< const bool& >::type na_restore(na_restoreSEXP);
    Rcpp::traits::input_parameter< const bool& >::type online(onlineSEXP);
    rcpp_result_gen = Rcpp::wrap(roll_all(x, width, min_obs, complete_obs, na_restore, online));
    return rcpp_result_gen;
END_RCPP
}
// roll_sum
NumericMatrix roll_sum(const NumericMatrix& x, const int& width, const arma::vec& weights, const int& min_obs, const bool& complete_obs, const bool& na_restore, const bool& online);
RcppExport SEXP _roll_roll_sum(SEXP xSEXP, SEXP widthSEXP, SEXP weightsSEXP, SEXP min_obsSEXP, SEXP complete_obsSEXP, SEXP na_restoreSEXP, SEXP onlineSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const int& >::type width(widthSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< const int& >::type min_obs(min_obsSEXP);
    Rcpp::traits::input_parameter< const bool& >::type complete_obs(complete_obsSEXP);
    Rcpp::traits::input_parameter< const bool& >::type na_restore(na_restoreSEXP);
    Rcpp::traits::input_parameter< const bool& >::type online(onlineSEXP);
    rcpp_result_gen = Rcpp::wrap(roll_sum(x, width, weights, min_obs, complete_obs, na_restore, online));
    return rcpp_result_gen;
END_RCPP
}
// roll_prod
NumericMatrix roll_prod(const NumericMatrix& x, const int& width, const arma::vec& weights, const int& min_obs, const bool& complete_obs, const bool& na_restore, const bool& online);
RcppExport SEXP _roll_roll_prod(SEXP xSEXP, SEXP widthSEXP, SEXP weightsSEXP, SEXP min_obsSEXP, SEXP complete_obsSEXP, SEXP na_restoreSEXP, SEXP onlineSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const int& >::type width(widthSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< const int& >::type min_obs(min_obsSEXP);
    Rcpp::traits::input_parameter< const bool& >::type complete_obs(complete_obsSEXP);
    Rcpp::traits::input_parameter< const bool& >::type na_restore(na_restoreSEXP);
    Rcpp::traits::input_parameter< const bool& >::type online(onlineSEXP);
    rcpp_result_gen = Rcpp::wrap(roll_prod(x, width, weights, min_obs, complete_obs, na_restore, online));
    return rcpp_result_gen;
END_RCPP
}
// roll_mean
SEXP roll_mean(const SEXP& x, const int& width, const arma::vec& weights, const int& min_obs, const bool& complete_obs, const bool& na_restore, const bool& online);
RcppExport SEXP _roll_roll_mean(SEXP xSEXP, SEXP widthSEXP, SEXP weightsSEXP, SEXP min_obsSEXP, SEXP complete_obsSEXP, SEXP na_restoreSEXP, SEXP onlineSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const SEXP& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const int& >::type width(widthSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< const int& >::type min_obs(min_obsSEXP);
    Rcpp::traits::input_parameter< const bool& >::type complete_obs(complete_obsSEXP);
    Rcpp::traits::input_parameter< const bool& >::type na_restore(na_restoreSEXP);
    Rcpp::traits::input_parameter< const bool& >::type online(onlineSEXP);
    rcpp_result_gen = Rcpp::wrap(roll_mean(x, width, weights, min_obs, complete_obs, na_restore, online));
    return rcpp_result_gen;
END_RCPP
}
// roll_min
NumericMatrix roll_min(const NumericMatrix& x, const int& width, const arma::vec& weights, const int& min_obs, const bool& complete_obs, const bool& na_restore, const bool& online);
RcppExport SEXP _roll_roll_min(SEXP xSEXP, SEXP widthSEXP, SEXP weightsSEXP, SEXP min_obsSEXP, SEXP complete_obsSEXP, SEXP na_restoreSEXP, SEXP onlineSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const int& >::type width(widthSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< const int& >::type min_obs(min_obsSEXP);
    Rcpp::traits::input_parameter< const bool& >::type complete_obs(complete_obsSEXP);
    Rcpp::traits::input_parameter< const bool& >::type na_restore(na_restoreSEXP);
    Rcpp::traits::input_parameter< const bool& >::type online(onlineSEXP);
    rcpp_result_gen = Rcpp::wrap(roll_min(x, width, weights, min_obs, complete_obs, na_restore, online));
    return rcpp_result_gen;
END_RCPP
}
// roll_max
NumericMatrix roll_max(const NumericMatrix& x, const int& width, const arma::vec& weights, const int& min_obs, const bool& complete_obs, const bool& na_restore, const bool& online);
RcppExport SEXP _roll_roll_max(SEXP xSEXP, SEXP widthSEXP, SEXP weightsSEXP, SEXP min_obsSEXP, SEXP complete_obsSEXP, SEXP na_restoreSEXP, SEXP onlineSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const int& >::type width(widthSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< const int& >::type min_obs(min_obsSEXP);
    Rcpp::traits::input_parameter< const bool& >::type complete_obs(complete_obsSEXP);
    Rcpp::traits::input_parameter< const bool& >::type na_restore(na_restoreSEXP);
    Rcpp::traits::input_parameter< const bool& >::type online(onlineSEXP);
    rcpp_result_gen = Rcpp::wrap(roll_max(x, width, weights, min_obs, complete_obs, na_restore, online));
    return rcpp_result_gen;
END_RCPP
}
// roll_median
NumericMatrix roll_median(const NumericMatrix& x, const int& width, const arma::vec& weights, const int& min_obs, const bool& complete_obs, const bool& na_restore, const bool& online);
RcppExport SEXP _roll_roll_median(SEXP xSEXP, SEXP widthSEXP, SEXP weightsSEXP, SEXP min_obsSEXP, SEXP complete_obsSEXP, SEXP na_restoreSEXP, SEXP onlineSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const int& >::type width(widthSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< const int& >::type min_obs(min_obsSEXP);
    Rcpp::traits::input_parameter< const bool& >::type complete_obs(complete_obsSEXP);
    Rcpp::traits::input_parameter< const bool& >::type na_restore(na_restoreSEXP);
    Rcpp::traits::input_parameter< const bool& >::type online(onlineSEXP);
    rcpp_result_gen = Rcpp::wrap(roll_median(x, width, weights, min_obs, complete_obs, na_restore, online));
    return rcpp_result_gen;
END_RCPP
}
// roll_var
SEXP roll_var(const SEXP& x, const int& width, const arma::vec& weights, const bool& center, const int& min_obs, const bool& complete_obs, const bool& na_restore, const bool& online);
RcppExport SEXP _roll_roll_var(SEXP xSEXP, SEXP widthSEXP, SEXP weightsSEXP, SEXP centerSEXP, SEXP min_obsSEXP, SEXP complete_obsSEXP, SEXP na_restoreSEXP, SEXP onlineSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const SEXP& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const int& >::type width(widthSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< const bool& >::type center(centerSEXP);
    Rcpp::traits::input_parameter< const int& >::type min_obs(min_obsSEXP);
    Rcpp::traits::input_parameter< const bool& >::type complete_obs(complete_obsSEXP);
    Rcpp::traits::input_parameter< const bool& >::type na_restore(na_restoreSEXP);
    Rcpp::traits::input_parameter< const bool& >::type online(onlineSEXP);
    rcpp_result_gen = Rcpp::wrap(roll_var(x, width, weights, center, min_obs, complete_obs, na_restore, online));
    return rcpp_result_gen;
END_RCPP
}
// roll_sd
SEXP roll_sd(const SEXP& x, const int& width, const arma::vec& weights, const bool& center, const int& min_obs, const bool& complete_obs, const bool& na_restore, const bool& online);
RcppExport SEXP _roll_roll_sd(SEXP xSEXP, SEXP widthSEXP, SEXP weightsSEXP, SEXP centerSEXP, SEXP min_obsSEXP, SEXP complete_obsSEXP, SEXP na_restoreSEXP, SEXP onlineSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const SEXP& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const int& >::type width(widthSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< const bool& >::type center(centerSEXP);
    Rcpp::traits::input_parameter< const int& >::type min_obs(min_obsSEXP);
    Rcpp::traits::input_parameter< const bool& >::type complete_obs(complete_obsSEXP);
    Rcpp::traits::input_parameter< const bool& >::type na_restore(na_restoreSEXP);
    Rcpp::traits::input_parameter< const bool& >::type online(onlineSEXP);
    rcpp_result_gen = Rcpp::wrap(roll_sd(x, width, weights, center, min_obs, complete_obs, na_restore, online));
    return rcpp_result_gen;
END_RCPP
}
// roll_scale
SEXP roll_scale(const SEXP& x, const int& width, const arma::vec& weights, const bool& center, const bool& scale, const int& min_obs, const bool& complete_obs, const bool& na_restore, const bool& online);
RcppExport SEXP _roll_roll_scale(SEXP xSEXP, SEXP widthSEXP, SEXP weightsSEXP, SEXP centerSEXP, SEXP scaleSEXP, SEXP min_obsSEXP, SEXP complete_obsSEXP, SEXP na_restoreSEXP, SEXP onlineSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const SEXP& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const int& >::type width(widthSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< const bool& >::type center(centerSEXP);
    Rcpp::traits::input_parameter< const bool& >::type scale(scaleSEXP);
    Rcpp::traits::input_parameter< const int& >::type min_obs(min_obsSEXP);
    Rcpp::traits::input_parameter< const bool& >::type complete_obs(complete_obsSEXP);
    Rcpp::traits::input_parameter< const bool& >::type na_restore(na_restoreSEXP);
    Rcpp::traits::input_parameter< const bool& >::type online(onlineSEXP);
    rcpp_result_gen = Rcpp::wrap(roll_scale(x, width, weights, center, scale, min_obs, complete_obs, na_restore, online));
    return rcpp_result_gen;
END_RCPP
}
// roll_cov
SEXP roll_cov(const SEXP& x, const SEXP& y, const int& width, const arma::vec& weights, const bool& center, const bool& scale, const int& min_obs, const bool& complete_obs, const bool& na_restore, const bool& online);
RcppExport SEXP _roll_roll_cov(SEXP xSEXP, SEXP ySEXP, SEXP widthSEXP, SEXP weightsSEXP, SEXP centerSEXP, SEXP scaleSEXP, SEXP min_obsSEXP, SEXP complete_obsSEXP, SEXP na_restoreSEXP, SEXP onlineSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const SEXP& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const SEXP& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const int& >::type width(widthSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< const bool& >::type center(centerSEXP);
    Rcpp::traits::input_parameter< const bool& >::type scale(scaleSEXP);
    Rcpp::traits::input_parameter< const int& >::type min_obs(min_obsSEXP);
    Rcpp::traits::input_parameter< const bool& >::type complete_obs(complete_obsSEXP);
    Rcpp::traits::input_parameter< const bool& >::type na_restore(na_restoreSEXP);
    Rcpp::traits::input_parameter< const bool& >::type online(onlineSEXP);
    rcpp_result_gen = Rcpp::wrap(roll_cov(x, y, width, weights, center, scale, min_obs, complete_obs, na_restore, online));
    return rcpp_result_gen;
END_RCPP
}
// roll_lm
List roll_lm(const SEXP& x, const SEXP& y, const int& width, const arma::vec& weights, const bool& intercept, const int& min_obs, const bool& complete_obs, const bool& na_restore, const bool& online);
RcppExport SEXP _roll_roll_lm(SEXP xSEXP, SEXP ySEXP, SEXP widthSEXP, SEXP weightsSEXP, SEXP interceptSEXP, SEXP min_obsSEXP, SEXP complete_obsSEXP, SEXP na_restoreSEXP, SEXP onlineSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const SEXP& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const SEXP& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const int& >::type width(widthSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< const bool& >::type intercept(interceptSEXP);
    Rcpp::traits::input_parameter< const int& >::type min_obs(min_obsSEXP);
    Rcpp::traits::input_parameter< const bool& >::type complete_obs(complete_obsSEXP);
    Rcpp::traits::input_parameter< const bool& >::type na_restore(na_restoreSEXP);
    Rcpp::traits::input_parameter< const bool& >::type online(onlineSEXP);
    rcpp_result_gen = Rcpp::wrap(roll_lm(x, y, width, weights, intercept, min_obs, complete_obs, na_restore, online));
    return rcpp_result_gen;
END_RCPP
}
