// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// asJSONNumeric
CharacterVector asJSONNumeric(NumericVector x, int digits = 3, int precision = 0);
RcppExport SEXP rspeed_asJSONNumeric(SEXP xSEXP, SEXP digitsSEXP, SEXP precisionSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP );
        Rcpp::traits::input_parameter< int >::type digits(digitsSEXP );
        Rcpp::traits::input_parameter< int >::type precision(precisionSEXP );
        CharacterVector __result = asJSONNumeric(x, digits, precision);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// escape_one
std::string escape_one(std::string x);
RcppExport SEXP rspeed_escape_one(SEXP xSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< std::string >::type x(xSEXP );
        std::string __result = escape_one(x);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// escape_chars_cpp
CharacterVector escape_chars_cpp(CharacterVector x);
RcppExport SEXP rspeed_escape_chars_cpp(SEXP xSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP );
        CharacterVector __result = escape_chars_cpp(x);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
