// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// fourCycleCpp
double fourCycleCpp(std::vector<std::string> sender, std::string currentSender, std::vector<std::string> target, std::string currentTarget, std::vector<std::string> typevar, std::string currentType, NumericVector time, double currentTime, NumericVector weightvar, double xlog, std::vector<std::string> attrvarAaj, std::string attrAaj, std::vector<std::string> attrvarBib, std::string attrBib, std::vector<std::string> attrvarCij, std::string attrCij, std::string fourCycleType, std::vector<std::string> w, std::vector<std::string> x, int i, int begin);
RcppExport SEXP rem_fourCycleCpp(SEXP senderSEXP, SEXP currentSenderSEXP, SEXP targetSEXP, SEXP currentTargetSEXP, SEXP typevarSEXP, SEXP currentTypeSEXP, SEXP timeSEXP, SEXP currentTimeSEXP, SEXP weightvarSEXP, SEXP xlogSEXP, SEXP attrvarAajSEXP, SEXP attrAajSEXP, SEXP attrvarBibSEXP, SEXP attrBibSEXP, SEXP attrvarCijSEXP, SEXP attrCijSEXP, SEXP fourCycleTypeSEXP, SEXP wSEXP, SEXP xSEXP, SEXP iSEXP, SEXP beginSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type sender(senderSEXP);
    Rcpp::traits::input_parameter< std::string >::type currentSender(currentSenderSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type target(targetSEXP);
    Rcpp::traits::input_parameter< std::string >::type currentTarget(currentTargetSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type typevar(typevarSEXP);
    Rcpp::traits::input_parameter< std::string >::type currentType(currentTypeSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type time(timeSEXP);
    Rcpp::traits::input_parameter< double >::type currentTime(currentTimeSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type weightvar(weightvarSEXP);
    Rcpp::traits::input_parameter< double >::type xlog(xlogSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type attrvarAaj(attrvarAajSEXP);
    Rcpp::traits::input_parameter< std::string >::type attrAaj(attrAajSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type attrvarBib(attrvarBibSEXP);
    Rcpp::traits::input_parameter< std::string >::type attrBib(attrBibSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type attrvarCij(attrvarCijSEXP);
    Rcpp::traits::input_parameter< std::string >::type attrCij(attrCijSEXP);
    Rcpp::traits::input_parameter< std::string >::type fourCycleType(fourCycleTypeSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type w(wSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type i(iSEXP);
    Rcpp::traits::input_parameter< int >::type begin(beginSEXP);
    rcpp_result_gen = Rcpp::wrap(fourCycleCpp(sender, currentSender, target, currentTarget, typevar, currentType, time, currentTime, weightvar, xlog, attrvarAaj, attrAaj, attrvarBib, attrBib, attrvarCij, attrCij, fourCycleType, w, x, i, begin));
    return rcpp_result_gen;
END_RCPP
}
// similarityTotalAverageCpp
double similarityTotalAverageCpp(std::vector<std::string> sender, std::string currentSender, std::vector<std::string> target, std::string currentTarget, NumericVector time, double currentTime, std::vector<std::string> eventAttributeVar, std::string eventAttribute, std::vector<std::string> eventTypeVar, std::string currentType, std::string totalAverageSim, std::string matchNomatchSim, std::string senderTargetSim, std::vector<std::string> v, std::vector<std::string> w, int i, int begin);
RcppExport SEXP rem_similarityTotalAverageCpp(SEXP senderSEXP, SEXP currentSenderSEXP, SEXP targetSEXP, SEXP currentTargetSEXP, SEXP timeSEXP, SEXP currentTimeSEXP, SEXP eventAttributeVarSEXP, SEXP eventAttributeSEXP, SEXP eventTypeVarSEXP, SEXP currentTypeSEXP, SEXP totalAverageSimSEXP, SEXP matchNomatchSimSEXP, SEXP senderTargetSimSEXP, SEXP vSEXP, SEXP wSEXP, SEXP iSEXP, SEXP beginSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type sender(senderSEXP);
    Rcpp::traits::input_parameter< std::string >::type currentSender(currentSenderSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type target(targetSEXP);
    Rcpp::traits::input_parameter< std::string >::type currentTarget(currentTargetSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type time(timeSEXP);
    Rcpp::traits::input_parameter< double >::type currentTime(currentTimeSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type eventAttributeVar(eventAttributeVarSEXP);
    Rcpp::traits::input_parameter< std::string >::type eventAttribute(eventAttributeSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type eventTypeVar(eventTypeVarSEXP);
    Rcpp::traits::input_parameter< std::string >::type currentType(currentTypeSEXP);
    Rcpp::traits::input_parameter< std::string >::type totalAverageSim(totalAverageSimSEXP);
    Rcpp::traits::input_parameter< std::string >::type matchNomatchSim(matchNomatchSimSEXP);
    Rcpp::traits::input_parameter< std::string >::type senderTargetSim(senderTargetSimSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type v(vSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type w(wSEXP);
    Rcpp::traits::input_parameter< int >::type i(iSEXP);
    Rcpp::traits::input_parameter< int >::type begin(beginSEXP);
    rcpp_result_gen = Rcpp::wrap(similarityTotalAverageCpp(sender, currentSender, target, currentTarget, time, currentTime, eventAttributeVar, eventAttribute, eventTypeVar, currentType, totalAverageSim, matchNomatchSim, senderTargetSim, v, w, i, begin));
    return rcpp_result_gen;
END_RCPP
}
// similaritySimpleCpp
double similaritySimpleCpp(std::vector<std::string> sender, std::string currentSender, std::vector<std::string> target, std::string currentTarget, NumericVector time, double currentTime, double xlog, std::vector<std::string> eventAttributeVar, std::string eventAttribute, std::vector<std::string> eventTypeVar, std::string currentType, std::string matchNomatchSim, std::string senderTargetSim, std::vector<std::string> v, std::vector<std::string> w, int i, int begin);
RcppExport SEXP rem_similaritySimpleCpp(SEXP senderSEXP, SEXP currentSenderSEXP, SEXP targetSEXP, SEXP currentTargetSEXP, SEXP timeSEXP, SEXP currentTimeSEXP, SEXP xlogSEXP, SEXP eventAttributeVarSEXP, SEXP eventAttributeSEXP, SEXP eventTypeVarSEXP, SEXP currentTypeSEXP, SEXP matchNomatchSimSEXP, SEXP senderTargetSimSEXP, SEXP vSEXP, SEXP wSEXP, SEXP iSEXP, SEXP beginSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type sender(senderSEXP);
    Rcpp::traits::input_parameter< std::string >::type currentSender(currentSenderSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type target(targetSEXP);
    Rcpp::traits::input_parameter< std::string >::type currentTarget(currentTargetSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type time(timeSEXP);
    Rcpp::traits::input_parameter< double >::type currentTime(currentTimeSEXP);
    Rcpp::traits::input_parameter< double >::type xlog(xlogSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type eventAttributeVar(eventAttributeVarSEXP);
    Rcpp::traits::input_parameter< std::string >::type eventAttribute(eventAttributeSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type eventTypeVar(eventTypeVarSEXP);
    Rcpp::traits::input_parameter< std::string >::type currentType(currentTypeSEXP);
    Rcpp::traits::input_parameter< std::string >::type matchNomatchSim(matchNomatchSimSEXP);
    Rcpp::traits::input_parameter< std::string >::type senderTargetSim(senderTargetSimSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type v(vSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type w(wSEXP);
    Rcpp::traits::input_parameter< int >::type i(iSEXP);
    Rcpp::traits::input_parameter< int >::type begin(beginSEXP);
    rcpp_result_gen = Rcpp::wrap(similaritySimpleCpp(sender, currentSender, target, currentTarget, time, currentTime, xlog, eventAttributeVar, eventAttribute, eventTypeVar, currentType, matchNomatchSim, senderTargetSim, v, w, i, begin));
    return rcpp_result_gen;
END_RCPP
}
// similarityComplexCpp
double similarityComplexCpp(std::vector<std::string> sender, std::string currentSender, std::vector<std::string> target, std::string currentTarget, NumericVector time, double currentTime, double xlog, double halflifeTimeDifference, std::vector<std::string> eventAttributeVar, std::string eventAttribute, std::vector<std::string> eventTypeVar, std::string currentType, std::string matchNomatchSim, std::string senderTargetSim, std::vector<std::string> v, std::vector<std::string> w, int i, int begin);
RcppExport SEXP rem_similarityComplexCpp(SEXP senderSEXP, SEXP currentSenderSEXP, SEXP targetSEXP, SEXP currentTargetSEXP, SEXP timeSEXP, SEXP currentTimeSEXP, SEXP xlogSEXP, SEXP halflifeTimeDifferenceSEXP, SEXP eventAttributeVarSEXP, SEXP eventAttributeSEXP, SEXP eventTypeVarSEXP, SEXP currentTypeSEXP, SEXP matchNomatchSimSEXP, SEXP senderTargetSimSEXP, SEXP vSEXP, SEXP wSEXP, SEXP iSEXP, SEXP beginSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type sender(senderSEXP);
    Rcpp::traits::input_parameter< std::string >::type currentSender(currentSenderSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type target(targetSEXP);
    Rcpp::traits::input_parameter< std::string >::type currentTarget(currentTargetSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type time(timeSEXP);
    Rcpp::traits::input_parameter< double >::type currentTime(currentTimeSEXP);
    Rcpp::traits::input_parameter< double >::type xlog(xlogSEXP);
    Rcpp::traits::input_parameter< double >::type halflifeTimeDifference(halflifeTimeDifferenceSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type eventAttributeVar(eventAttributeVarSEXP);
    Rcpp::traits::input_parameter< std::string >::type eventAttribute(eventAttributeSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type eventTypeVar(eventTypeVarSEXP);
    Rcpp::traits::input_parameter< std::string >::type currentType(currentTypeSEXP);
    Rcpp::traits::input_parameter< std::string >::type matchNomatchSim(matchNomatchSimSEXP);
    Rcpp::traits::input_parameter< std::string >::type senderTargetSim(senderTargetSimSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type v(vSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type w(wSEXP);
    Rcpp::traits::input_parameter< int >::type i(iSEXP);
    Rcpp::traits::input_parameter< int >::type begin(beginSEXP);
    rcpp_result_gen = Rcpp::wrap(similarityComplexCpp(sender, currentSender, target, currentTarget, time, currentTime, xlog, halflifeTimeDifference, eventAttributeVar, eventAttribute, eventTypeVar, currentType, matchNomatchSim, senderTargetSim, v, w, i, begin));
    return rcpp_result_gen;
END_RCPP
}
// triadCpp
double triadCpp(std::vector<std::string> v, std::vector<std::string> sender, std::vector<std::string> target, NumericVector time, NumericVector weightvar, std::vector<std::string> typevar, std::string typeA, std::string typeB, std::vector<std::string> attributevarAI, std::string attrAI, std::vector<std::string> attributevarBI, std::string attrBI, double xlog, int i, std::string currentSender, std::string currentTarget, double currentTime);
RcppExport SEXP rem_triadCpp(SEXP vSEXP, SEXP senderSEXP, SEXP targetSEXP, SEXP timeSEXP, SEXP weightvarSEXP, SEXP typevarSEXP, SEXP typeASEXP, SEXP typeBSEXP, SEXP attributevarAISEXP, SEXP attrAISEXP, SEXP attributevarBISEXP, SEXP attrBISEXP, SEXP xlogSEXP, SEXP iSEXP, SEXP currentSenderSEXP, SEXP currentTargetSEXP, SEXP currentTimeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type v(vSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type sender(senderSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type target(targetSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type time(timeSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type weightvar(weightvarSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type typevar(typevarSEXP);
    Rcpp::traits::input_parameter< std::string >::type typeA(typeASEXP);
    Rcpp::traits::input_parameter< std::string >::type typeB(typeBSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type attributevarAI(attributevarAISEXP);
    Rcpp::traits::input_parameter< std::string >::type attrAI(attrAISEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type attributevarBI(attributevarBISEXP);
    Rcpp::traits::input_parameter< std::string >::type attrBI(attrBISEXP);
    Rcpp::traits::input_parameter< double >::type xlog(xlogSEXP);
    Rcpp::traits::input_parameter< int >::type i(iSEXP);
    Rcpp::traits::input_parameter< std::string >::type currentSender(currentSenderSEXP);
    Rcpp::traits::input_parameter< std::string >::type currentTarget(currentTargetSEXP);
    Rcpp::traits::input_parameter< double >::type currentTime(currentTimeSEXP);
    rcpp_result_gen = Rcpp::wrap(triadCpp(v, sender, target, time, weightvar, typevar, typeA, typeB, attributevarAI, attrAI, attributevarBI, attrBI, xlog, i, currentSender, currentTarget, currentTime));
    return rcpp_result_gen;
END_RCPP
}
// weightTimesSummationCpp
double weightTimesSummationCpp(NumericVector pastSenderTimes, double xlog, double currentTime, NumericVector weightvar);
RcppExport SEXP rem_weightTimesSummationCpp(SEXP pastSenderTimesSEXP, SEXP xlogSEXP, SEXP currentTimeSEXP, SEXP weightvarSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type pastSenderTimes(pastSenderTimesSEXP);
    Rcpp::traits::input_parameter< double >::type xlog(xlogSEXP);
    Rcpp::traits::input_parameter< double >::type currentTime(currentTimeSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type weightvar(weightvarSEXP);
    rcpp_result_gen = Rcpp::wrap(weightTimesSummationCpp(pastSenderTimes, xlog, currentTime, weightvar));
    return rcpp_result_gen;
END_RCPP
}
// createNullEvents
DataFrame createNullEvents(std::vector<std::string> eventID, std::vector<std::string> sender, std::vector<std::string> target, std::vector<std::string> eventAttribute, std::vector<double> time, std::vector<double> start, std::vector<double> end, std::vector<double> allEventTimes);
RcppExport SEXP rem_createNullEvents(SEXP eventIDSEXP, SEXP senderSEXP, SEXP targetSEXP, SEXP eventAttributeSEXP, SEXP timeSEXP, SEXP startSEXP, SEXP endSEXP, SEXP allEventTimesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type eventID(eventIDSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type sender(senderSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type target(targetSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type eventAttribute(eventAttributeSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type time(timeSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type start(startSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type end(endSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type allEventTimes(allEventTimesSEXP);
    rcpp_result_gen = Rcpp::wrap(createNullEvents(eventID, sender, target, eventAttribute, time, start, end, allEventTimes));
    return rcpp_result_gen;
END_RCPP
}
// absoluteDiffAverageWeightEventAttributeCpp
NumericVector absoluteDiffAverageWeightEventAttributeCpp(std::vector<std::string> sender, std::vector<std::string> target, NumericVector time, NumericVector weightvar, std::vector<std::string> eventattributevar, std::string eventattribute, double xlog);
RcppExport SEXP rem_absoluteDiffAverageWeightEventAttributeCpp(SEXP senderSEXP, SEXP targetSEXP, SEXP timeSEXP, SEXP weightvarSEXP, SEXP eventattributevarSEXP, SEXP eventattributeSEXP, SEXP xlogSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type sender(senderSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type target(targetSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type time(timeSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type weightvar(weightvarSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type eventattributevar(eventattributevarSEXP);
    Rcpp::traits::input_parameter< std::string >::type eventattribute(eventattributeSEXP);
    Rcpp::traits::input_parameter< double >::type xlog(xlogSEXP);
    rcpp_result_gen = Rcpp::wrap(absoluteDiffAverageWeightEventAttributeCpp(sender, target, time, weightvar, eventattributevar, eventattribute, xlog));
    return rcpp_result_gen;
END_RCPP
}
