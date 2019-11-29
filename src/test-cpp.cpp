#include "test-cpp.h"

extern "C" int LLVMFuzzerTestOneInput(const int *Data) {
    return 0;
}

//' rcpp_test
//' @noRd 
// [[Rcpp::export]]
int rcpp_test (Rcpp::IntegerVector input)
{
    int out = 0;

    return out;
}
