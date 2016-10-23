// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// CellModel
Rcpp::List CellModel(int initialNum, int numMCSteps, double density, double maxTranslation, double maxDeform, double maxRotate, double epsilon, double delta, int outIncrement, int randSeed, Rcpp::List drugEffect, Rcpp::NumericVector growthRates, bool inheritGrowth, double nG, double timeIncrement, int recordIncrement, double drugTime, double boundary, bool syncCellCycle, Rcpp::List cellTypes);
RcppExport SEXP CancerInSilico_CellModel(SEXP initialNumSEXP, SEXP numMCStepsSEXP, SEXP densitySEXP, SEXP maxTranslationSEXP, SEXP maxDeformSEXP, SEXP maxRotateSEXP, SEXP epsilonSEXP, SEXP deltaSEXP, SEXP outIncrementSEXP, SEXP randSeedSEXP, SEXP drugEffectSEXP, SEXP growthRatesSEXP, SEXP inheritGrowthSEXP, SEXP nGSEXP, SEXP timeIncrementSEXP, SEXP recordIncrementSEXP, SEXP drugTimeSEXP, SEXP boundarySEXP, SEXP syncCellCycleSEXP, SEXP cellTypesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type initialNum(initialNumSEXP);
    Rcpp::traits::input_parameter< int >::type numMCSteps(numMCStepsSEXP);
    Rcpp::traits::input_parameter< double >::type density(densitySEXP);
    Rcpp::traits::input_parameter< double >::type maxTranslation(maxTranslationSEXP);
    Rcpp::traits::input_parameter< double >::type maxDeform(maxDeformSEXP);
    Rcpp::traits::input_parameter< double >::type maxRotate(maxRotateSEXP);
    Rcpp::traits::input_parameter< double >::type epsilon(epsilonSEXP);
    Rcpp::traits::input_parameter< double >::type delta(deltaSEXP);
    Rcpp::traits::input_parameter< int >::type outIncrement(outIncrementSEXP);
    Rcpp::traits::input_parameter< int >::type randSeed(randSeedSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type drugEffect(drugEffectSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type growthRates(growthRatesSEXP);
    Rcpp::traits::input_parameter< bool >::type inheritGrowth(inheritGrowthSEXP);
    Rcpp::traits::input_parameter< double >::type nG(nGSEXP);
    Rcpp::traits::input_parameter< double >::type timeIncrement(timeIncrementSEXP);
    Rcpp::traits::input_parameter< int >::type recordIncrement(recordIncrementSEXP);
    Rcpp::traits::input_parameter< double >::type drugTime(drugTimeSEXP);
    Rcpp::traits::input_parameter< double >::type boundary(boundarySEXP);
    Rcpp::traits::input_parameter< bool >::type syncCellCycle(syncCellCycleSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type cellTypes(cellTypesSEXP);
    rcpp_result_gen = Rcpp::wrap(CellModel(initialNum, numMCSteps, density, maxTranslation, maxDeform, maxRotate, epsilon, delta, outIncrement, randSeed, drugEffect, growthRates, inheritGrowth, nG, timeIncrement, recordIncrement, drugTime, boundary, syncCellCycle, cellTypes));
    return rcpp_result_gen;
END_RCPP
}
