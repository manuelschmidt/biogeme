//-*-c++-*------------------------------------------------------------
//
// File name : patParameters.h
// File automatically generated by ./automaticParser
// Michel Bierlaire, EPFL
// Date :      Sun Aug  3 09:53:14 2008
//
//--------------------------------------------------------------------

#ifndef patParameters_h
#define patParameters_h

#include <fstream>
#include <cassert>
#include "patString.h"

/**
@doc Provides parameters read from a file.
@author \URL[Michel Bierlaire]{http://rosowww.epfl.ch/mbi}
 */
class patParameters {

  friend class patParserParam ;
    
public:

  const char patDirectoryDelimiter ;
  void readParameterFile(const string& fileName) ;
  void generateMinimumParameterFile(const patString& fileName) ;

  static patParameters* the() ;
  long getBTRMaxGcpIter() ;
  void setBTRMaxGcpIter (const long& str);
  float getBTRArmijoBeta1() ;
  void setBTRArmijoBeta1 (const float& str);
  float getBTRArmijoBeta2() ;
  void setBTRArmijoBeta2 (const float& str);
  long getBTRStartDraws() ;
  void setBTRStartDraws (const long& str);
  float getBTRIncreaseDraws() ;
  void setBTRIncreaseDraws (const float& str);
  float getBTREta1() ;
  void setBTREta1 (const float& str);
  float getBTREta2() ;
  void setBTREta2 (const float& str);
  float getBTRGamma1() ;
  void setBTRGamma1 (const float& str);
  float getBTRGamma2() ;
  void setBTRGamma2 (const float& str);
  float getBTRInitRadius() ;
  void setBTRInitRadius (const float& str);
  float getBTRIncreaseTRRadius() ;
  void setBTRIncreaseTRRadius (const float& str);
  long getBTRUnfeasibleCGIterations() ;
  void setBTRUnfeasibleCGIterations (const long& str);
  long getBTRForceExactHessianIfMnl() ;
  void setBTRForceExactHessianIfMnl (const long& str);
  long getBTRExactHessian() ;
  void setBTRExactHessian (const long& str);
  long getBTRCheapHessian() ;
  void setBTRCheapHessian (const long& str);
  long getBTRQuasiNewtonUpdate() ;
  void setBTRQuasiNewtonUpdate (const long& str);
  long getBTRInitQuasiNewtonWithTrueHessian() ;
  void setBTRInitQuasiNewtonWithTrueHessian (const long& str);
  long getBTRInitQuasiNewtonWithBHHH() ;
  void setBTRInitQuasiNewtonWithBHHH (const long& str);
  long getBTRMaxIter() ;
  void setBTRMaxIter (const long& str);
  float getBTRTypf() ;
  void setBTRTypf (const float& str);
  float getBTRTolerance() ;
  void setBTRTolerance (const float& str);
  float getBTRMaxTRRadius() ;
  void setBTRMaxTRRadius (const float& str);
  float getBTRMinTRRadius() ;
  void setBTRMinTRRadius (const float& str);
  long getBTRUsePreconditioner() ;
  void setBTRUsePreconditioner (const long& str);
  float getBTRSingularityThreshold() ;
  void setBTRSingularityThreshold (const float& str);
  float getBTRKappaEpp() ;
  void setBTRKappaEpp (const float& str);
  float getBTRKappaLbs() ;
  void setBTRKappaLbs (const float& str);
  float getBTRKappaUbs() ;
  void setBTRKappaUbs (const float& str);
  float getBTRKappaFrd() ;
  void setBTRKappaFrd (const float& str);
  long getBTRSignificantDigits() ;
  void setBTRSignificantDigits (const long& str);
  float getCTRAETA0() ;
  void setCTRAETA0 (const float& str);
  float getCTRAETA1() ;
  void setCTRAETA1 (const float& str);
  float getCTRAETA2() ;
  void setCTRAETA2 (const float& str);
  float getCTRAGAMMA1() ;
  void setCTRAGAMMA1 (const float& str);
  float getCTRAGAMMA2() ;
  void setCTRAGAMMA2 (const float& str);
  float getCTRAEPSILONC() ;
  void setCTRAEPSILONC (const float& str);
  float getCTRAALPHA() ;
  void setCTRAALPHA (const float& str);
  long getCTRAMU() ;
  void setCTRAMU (const long& str);
  long getCTRAMAXNBRFUNCTEVAL() ;
  void setCTRAMAXNBRFUNCTEVAL (const long& str);
  long getCTRAMAXLENGTH() ;
  void setCTRAMAXLENGTH (const long& str);
  long getCTRAMAXDATA() ;
  void setCTRAMAXDATA (const long& str);
  long getCTRANBROFBESTPTS() ;
  void setCTRANBROFBESTPTS (const long& str);
  float getCTRAPOWER() ;
  void setCTRAPOWER (const float& str);
  long getCTRAMAXRAD() ;
  void setCTRAMAXRAD (const long& str);
  float getCTRAMINRAD() ;
  void setCTRAMINRAD (const float& str);
  float getCTRAUPPERBOUND() ;
  void setCTRAUPPERBOUND (const float& str);
  float getCTRALOWERBOUND() ;
  void setCTRALOWERBOUND (const float& str);
  float getCTRAGAMMA3() ;
  void setCTRAGAMMA3 (const float& str);
  float getCTRAGAMMA4() ;
  void setCTRAGAMMA4 (const float& str);
  float getCTRACOEFVALID() ;
  void setCTRACOEFVALID (const float& str);
  float getCTRACOEFGEN() ;
  void setCTRACOEFGEN (const float& str);
  float getCTRAEPSERROR() ;
  void setCTRAEPSERROR (const float& str);
  float getCTRAEPSPOINT() ;
  void setCTRAEPSPOINT (const float& str);
  float getCTRACOEFNORM() ;
  void setCTRACOEFNORM (const float& str);
  float getCTRAMINSTEP() ;
  void setCTRAMINSTEP (const float& str);
  float getCTRAMINPIVOTVALUE() ;
  void setCTRAMINPIVOTVALUE (const float& str);
  float getCTRAGOODPIVOTVALUE() ;
  void setCTRAGOODPIVOTVALUE (const float& str);
  float getCTRAFINEPS() ;
  void setCTRAFINEPS (const float& str);
  float getCTRAFINEPSREL() ;
  void setCTRAFINEPSREL (const float& str);
  float getCTRACHECKEPS() ;
  void setCTRACHECKEPS (const float& str);
  float getCTRACHECKTESTEPS() ;
  void setCTRACHECKTESTEPS (const float& str);
  float getCTRACHECKTESTEPSREL() ;
  void setCTRACHECKTESTEPSREL (const float& str);
  float getCTRAVALMINGAUSS() ;
  void setCTRAVALMINGAUSS (const float& str);
  float getCTRAFACTOFPOND() ;
  void setCTRAFACTOFPOND (const float& str);
  long getPrecond() ;
  void setPrecond (const long& str);
  float getEpsilon() ;
  void setEpsilon (const float& str);
  float getCondLimit() ;
  void setCondLimit (const float& str);
  float getPrecResidu() ;
  void setPrecResidu (const float& str);
  long getMaxCGIter() ;
  void setMaxCGIter (const long& str);
  float getTolSchnabelEskow() ;
  void setTolSchnabelEskow (const float& str);
  long getMaxIter() ;
  void setMaxIter (const long& str);
  float getInitStep() ;
  void setInitStep (const float& str);
  float getMinStep() ;
  void setMinStep (const float& str);
  long getMaxEval() ;
  void setMaxEval (const long& str);
  long getNbrRun() ;
  void setNbrRun (const long& str);
  float getMaxStep() ;
  void setMaxStep (const float& str);
  float getAlphaProba() ;
  void setAlphaProba (const float& str);
  float getStepReduc() ;
  void setStepReduc (const float& str);
  float getStepIncr() ;
  void setStepIncr (const float& str);
  float getExpectedImprovement() ;
  void setExpectedImprovement (const float& str);
  long getAllowPremUnsucc() ;
  void setAllowPremUnsucc (const long& str);
  float getPrematureStart() ;
  void setPrematureStart (const float& str);
  float getPrematureStep() ;
  void setPrematureStep (const float& str);
  long getMaxUnsuccIter() ;
  void setMaxUnsuccIter (const long& str);
  float getNormWeight() ;
  void setNormWeight (const float& str);
  string getInputDirectory() ;
  void setInputDirectory (const string& str);
  string getOutputDirectory() ;
  void setOutputDirectory (const string& str);
  string getTmpDirectory() ;
  void setTmpDirectory (const string& str);
  string getFunctionEvalExec() ;
  void setFunctionEvalExec (const string& str);
  string getjonSimulator() ;
  void setjonSimulator (const string& str);
  string getCandidateFile() ;
  void setCandidateFile (const string& str);
  string getResultFile() ;
  void setResultFile (const string& str);
  string getOutsifFile() ;
  void setOutsifFile (const string& str);
  string getLogFile() ;
  void setLogFile (const string& str);
  string getProblemsFile() ;
  void setProblemsFile (const string& str);
  string getMITSIMorigin() ;
  void setMITSIMorigin (const string& str);
  string getMITSIMinformation() ;
  void setMITSIMinformation (const string& str);
  string getMITSIMtravelTime() ;
  void setMITSIMtravelTime (const string& str);
  string getMITSIMexec() ;
  void setMITSIMexec (const string& str);
  float getAugmentationStep() ;
  void setAugmentationStep (const float& str);
  float getReductionStep() ;
  void setReductionStep (const float& str);
  long getSubSpaceMaxIter() ;
  void setSubSpaceMaxIter (const long& str);
  long getSubSpaceConsecutiveFailure() ;
  void setSubSpaceConsecutiveFailure (const long& str);
  long getWarmUpnbre() ;
  void setWarmUpnbre (const long& str);
  string getgevInputDirectory() ;
  void setgevInputDirectory (const string& str);
  string getgevOutputDirectory() ;
  void setgevOutputDirectory (const string& str);
  string getgevWorkingDirectory() ;
  void setgevWorkingDirectory (const string& str);
  long getgevSignificantDigitsParameters() ;
  void setgevSignificantDigitsParameters (const long& str);
  long getgevDecimalDigitsTTest() ;
  void setgevDecimalDigitsTTest (const long& str);
  long getgevDecimalDigitsStats() ;
  void setgevDecimalDigitsStats (const long& str);
  long getgevForceScientificNotation() ;
  void setgevForceScientificNotation (const long& str);
  float getgevSingularValueThreshold() ;
  void setgevSingularValueThreshold (const float& str);
  long getgevPrintVarCovarAsList() ;
  void setgevPrintVarCovarAsList (const long& str);
  long getgevPrintVarCovarAsMatrix() ;
  void setgevPrintVarCovarAsMatrix (const long& str);
  long getgevPrintPValue() ;
  void setgevPrintPValue (const long& str);
  long getgevNumberOfThreads() ;
  void setgevNumberOfThreads (const long& str);
  long getgevSaveIntermediateResults() ;
  void setgevSaveIntermediateResults (const long& str);
  long getgevVarCovarFromBHHH() ;
  void setgevVarCovarFromBHHH (const long& str);
  long getgevDebugDataFirstRow() ;
  void setgevDebugDataFirstRow (const long& str);
  long getgevDebugDataLastRow() ;
  void setgevDebugDataLastRow (const long& str);
  long getgevStoreDataOnFile() ;
  void setgevStoreDataOnFile (const long& str);
  string getgevBinaryDataFile() ;
  void setgevBinaryDataFile (const string& str);
  long getgevDumpDrawsOnFile() ;
  void setgevDumpDrawsOnFile (const long& str);
  long getgevReadDrawsFromFile() ;
  void setgevReadDrawsFromFile (const long& str);
  long getgevAntitheticDraws() ;
  void setgevAntitheticDraws (const long& str);
  long getgevGenerateActualSample() ;
  void setgevGenerateActualSample (const long& str);
  string getgevOutputActualSample() ;
  void setgevOutputActualSample (const string& str);
  string getgevNormalDrawsFile() ;
  void setgevNormalDrawsFile (const string& str);
  string getgevRectangularDrawsFile() ;
  void setgevRectangularDrawsFile (const string& str);
  string getgevRandomDistrib() ;
  void setgevRandomDistrib (const string& str);
  long getgevMaxPrimeNumber() ;
  void setgevMaxPrimeNumber (const long& str);
  string getgevWarningSign() ;
  void setgevWarningSign (const string& str);
  long getgevWarningLowDraws() ;
  void setgevWarningLowDraws (const long& str);
  float getgevMissingValue() ;
  void setgevMissingValue (const float& str);
  long getgevGenerateFilesForDenis() ;
  void setgevGenerateFilesForDenis (const long& str);
  long getgevGenerateGnuplotFile() ;
  void setgevGenerateGnuplotFile (const long& str);
  long getgevGeneratePythonFile() ;
  void setgevGeneratePythonFile (const long& str);
  long getgevPythonFileWithEstimatedParam() ;
  void setgevPythonFileWithEstimatedParam (const long& str);
  string getgevFileForDenis() ;
  void setgevFileForDenis (const string& str);
  long getgevAutomaticScalingOfLinearUtility() ;
  void setgevAutomaticScalingOfLinearUtility (const long& str);
  long getgevInverseIteration() ;
  void setgevInverseIteration (const long& str);
  long getgevSeed() ;
  void setgevSeed (const long& str);
  string getgevOne() ;
  void setgevOne (const string& str);
  float getgevMinimumMu() ;
  void setgevMinimumMu (const float& str);
  string getgevSummaryParameters() ;
  void setgevSummaryParameters (const string& str);
  string getgevSummaryFile() ;
  void setgevSummaryFile (const string& str);
  string getgevStopFileName() ;
  void setgevStopFileName (const string& str);
  long getgevCheckDerivatives() ;
  void setgevCheckDerivatives (const long& str);
  long getgevBufferSize() ;
  void setgevBufferSize (const long& str);
  long getgevDataFileDisplayStep() ;
  void setgevDataFileDisplayStep (const long& str);
  float getgevTtestThreshold() ;
  void setgevTtestThreshold (const float& str);
  long getgevGlobal() ;
  void setgevGlobal (const long& str);
  long getgevAnalGrad() ;
  void setgevAnalGrad (const long& str);
  long getgevAnalHess() ;
  void setgevAnalHess (const long& str);
  long getgevCheapF() ;
  void setgevCheapF (const long& str);
  long getgevFactSec() ;
  void setgevFactSec (const long& str);
  long getgevTermCode() ;
  void setgevTermCode (const long& str);
  long getgevTypx() ;
  void setgevTypx (const long& str);
  float getgevTypF() ;
  void setgevTypF (const float& str);
  long getgevFDigits() ;
  void setgevFDigits (const long& str);
  float getgevGradTol() ;
  void setgevGradTol (const float& str);
  float getgevMaxStep() ;
  void setgevMaxStep (const float& str);
  long getgevItnLimit() ;
  void setgevItnLimit (const long& str);
  float getgevDelta() ;
  void setgevDelta (const float& str);
  string getgevAlgo() ;
  void setgevAlgo (const string& str);
  long getgevScreenPrintLevel() ;
  void setgevScreenPrintLevel (const long& str);
  long getgevLogFilePrintLevel() ;
  void setgevLogFilePrintLevel (const long& str);
  long getgevGeneratedGroups() ;
  void setgevGeneratedGroups (const long& str);
  long getgevGeneratedData() ;
  void setgevGeneratedData (const long& str);
  long getgevGeneratedAttr() ;
  void setgevGeneratedAttr (const long& str);
  long getgevGeneratedAlt() ;
  void setgevGeneratedAlt (const long& str);
  long getgevSubSampleLevel() ;
  void setgevSubSampleLevel (const long& str);
  long getgevSubSampleBasis() ;
  void setgevSubSampleBasis (const long& str);
  long getgevComputeLastHessian() ;
  void setgevComputeLastHessian (const long& str);
  float getgevEigenvalueThreshold() ;
  void setgevEigenvalueThreshold (const float& str);
  long getgevNonParamPlotRes() ;
  void setgevNonParamPlotRes (const long& str);
  float getgevNonParamPlotMaxY() ;
  void setgevNonParamPlotMaxY (const float& str);
  long getgevNonParamPlotXSizeCm() ;
  void setgevNonParamPlotXSizeCm (const long& str);
  long getgevNonParamPlotYSizeCm() ;
  void setgevNonParamPlotYSizeCm (const long& str);
  float getgevNonParamPlotMinXSizeCm() ;
  void setgevNonParamPlotMinXSizeCm (const float& str);
  float getgevNonParamPlotMinYSizeCm() ;
  void setgevNonParamPlotMinYSizeCm (const float& str);
  long getsvdMaxIter() ;
  void setsvdMaxIter (const long& str);
  long gethieMultinomial() ;
  void sethieMultinomial (const long& str);
  long gethieTruncStructUtil() ;
  void sethieTruncStructUtil (const long& str);
  long gethieUpdateHessien() ;
  void sethieUpdateHessien (const long& str);
  long gethieDateInLog() ;
  void sethieDateInLog (const long& str);
  long getbolducMaxAlts() ;
  void setbolducMaxAlts (const long& str);
  long getbolducMaxFact() ;
  void setbolducMaxFact (const long& str);
  long getbolducMaxNVar() ;
  void setbolducMaxNVar (const long& str);
  float getStepSecondIndividual() ;
  void setStepSecondIndividual (const float& str);
  float getNLgWeight() ;
  void setNLgWeight (const float& str);
  float getNLhWeight() ;
  void setNLhWeight (const float& str);
  float getTSFractionGradientRequired() ;
  void setTSFractionGradientRequired (const float& str);
  float getTSExpTheta() ;
  void setTSExpTheta (const float& str);
  long getcfsqpMode() ;
  void setcfsqpMode (const long& str);
  long getcfsqpIprint() ;
  void setcfsqpIprint (const long& str);
  long getcfsqpMaxIter() ;
  void setcfsqpMaxIter (const long& str);
  float getcfsqpEps() ;
  void setcfsqpEps (const float& str);
  float getcfsqpEpsEqn() ;
  void setcfsqpEpsEqn (const float& str);
  float getcfsqpUdelta() ;
  void setcfsqpUdelta (const float& str);
  long getdfoAddToLWRK() ;
  void setdfoAddToLWRK (const long& str);
  long getdfoAddToLIWRK() ;
  void setdfoAddToLIWRK (const long& str);
  long getdfoMaxFunEval() ;
  void setdfoMaxFunEval (const long& str);
  float getdonlp2Epsx() ;
  void setdonlp2Epsx (const float& str);
  float getdonlp2Delmin() ;
  void setdonlp2Delmin (const float& str);
  float getdonlp2Smallw() ;
  void setdonlp2Smallw (const float& str);
  float getdonlp2Epsdif() ;
  void setdonlp2Epsdif (const float& str);
  long getdonlp2NReset() ;
  void setdonlp2NReset (const long& str);
  long getsolvoptMaxIter() ;
  void setsolvoptMaxIter (const long& str);
  long getsolvoptDisplay() ;
  void setsolvoptDisplay (const long& str);
  float getsolvoptErrorArgument() ;
  void setsolvoptErrorArgument (const float& str);
  float getsolvoptErrorFunction() ;
  void setsolvoptErrorFunction (const float& str);
 protected:
  long BTRMaxGcpIter;
  float BTRArmijoBeta1;
  float BTRArmijoBeta2;
  long BTRStartDraws;
  float BTRIncreaseDraws;
  float BTREta1;
  float BTREta2;
  float BTRGamma1;
  float BTRGamma2;
  float BTRInitRadius;
  float BTRIncreaseTRRadius;
  long BTRUnfeasibleCGIterations;
  long BTRForceExactHessianIfMnl;
  long BTRExactHessian;
  long BTRCheapHessian;
  long BTRQuasiNewtonUpdate;
  long BTRInitQuasiNewtonWithTrueHessian;
  long BTRInitQuasiNewtonWithBHHH;
  long BTRMaxIter;
  float BTRTypf;
  float BTRTolerance;
  float BTRMaxTRRadius;
  float BTRMinTRRadius;
  long BTRUsePreconditioner;
  float BTRSingularityThreshold;
  float BTRKappaEpp;
  float BTRKappaLbs;
  float BTRKappaUbs;
  float BTRKappaFrd;
  long BTRSignificantDigits;
  float CTRAETA0;
  float CTRAETA1;
  float CTRAETA2;
  float CTRAGAMMA1;
  float CTRAGAMMA2;
  float CTRAEPSILONC;
  float CTRAALPHA;
  long CTRAMU;
  long CTRAMAXNBRFUNCTEVAL;
  long CTRAMAXLENGTH;
  long CTRAMAXDATA;
  long CTRANBROFBESTPTS;
  float CTRAPOWER;
  long CTRAMAXRAD;
  float CTRAMINRAD;
  float CTRAUPPERBOUND;
  float CTRALOWERBOUND;
  float CTRAGAMMA3;
  float CTRAGAMMA4;
  float CTRACOEFVALID;
  float CTRACOEFGEN;
  float CTRAEPSERROR;
  float CTRAEPSPOINT;
  float CTRACOEFNORM;
  float CTRAMINSTEP;
  float CTRAMINPIVOTVALUE;
  float CTRAGOODPIVOTVALUE;
  float CTRAFINEPS;
  float CTRAFINEPSREL;
  float CTRACHECKEPS;
  float CTRACHECKTESTEPS;
  float CTRACHECKTESTEPSREL;
  float CTRAVALMINGAUSS;
  float CTRAFACTOFPOND;
  long Precond;
  float Epsilon;
  float CondLimit;
  float PrecResidu;
  long MaxCGIter;
  float TolSchnabelEskow;
  long MaxIter;
  float InitStep;
  float MinStep;
  long MaxEval;
  long NbrRun;
  float MaxStep;
  float AlphaProba;
  float StepReduc;
  float StepIncr;
  float ExpectedImprovement;
  long AllowPremUnsucc;
  float PrematureStart;
  float PrematureStep;
  long MaxUnsuccIter;
  float NormWeight;
  string InputDirectory;
  string OutputDirectory;
  string TmpDirectory;
  string FunctionEvalExec;
  string jonSimulator;
  string CandidateFile;
  string ResultFile;
  string OutsifFile;
  string LogFile;
  string ProblemsFile;
  string MITSIMorigin;
  string MITSIMinformation;
  string MITSIMtravelTime;
  string MITSIMexec;
  float AugmentationStep;
  float ReductionStep;
  long SubSpaceMaxIter;
  long SubSpaceConsecutiveFailure;
  long WarmUpnbre;
  string gevInputDirectory;
  string gevOutputDirectory;
  string gevWorkingDirectory;
  long gevSignificantDigitsParameters;
  long gevDecimalDigitsTTest;
  long gevDecimalDigitsStats;
  long gevForceScientificNotation;
  float gevSingularValueThreshold;
  long gevPrintVarCovarAsList;
  long gevPrintVarCovarAsMatrix;
  long gevPrintPValue;
  long gevNumberOfThreads;
  long gevSaveIntermediateResults;
  long gevVarCovarFromBHHH;
  long gevDebugDataFirstRow;
  long gevDebugDataLastRow;
  long gevStoreDataOnFile;
  string gevBinaryDataFile;
  long gevDumpDrawsOnFile;
  long gevReadDrawsFromFile;
  long gevAntitheticDraws;
  long gevGenerateActualSample;
  string gevOutputActualSample;
  string gevNormalDrawsFile;
  string gevRectangularDrawsFile;
  string gevRandomDistrib;
  long gevMaxPrimeNumber;
  string gevWarningSign;
  long gevWarningLowDraws;
  float gevMissingValue;
  long gevGenerateFilesForDenis;
  long gevGenerateGnuplotFile;
  long gevGeneratePythonFile;
  long gevPythonFileWithEstimatedParam;
  string gevFileForDenis;
  long gevAutomaticScalingOfLinearUtility;
  long gevInverseIteration;
  long gevSeed;
  string gevOne;
  float gevMinimumMu;
  string gevSummaryParameters;
  string gevSummaryFile;
  string gevStopFileName;
  long gevCheckDerivatives;
  long gevBufferSize;
  long gevDataFileDisplayStep;
  float gevTtestThreshold;
  long gevGlobal;
  long gevAnalGrad;
  long gevAnalHess;
  long gevCheapF;
  long gevFactSec;
  long gevTermCode;
  long gevTypx;
  float gevTypF;
  long gevFDigits;
  float gevGradTol;
  float gevMaxStep;
  long gevItnLimit;
  float gevDelta;
  string gevAlgo;
  long gevScreenPrintLevel;
  long gevLogFilePrintLevel;
  long gevGeneratedGroups;
  long gevGeneratedData;
  long gevGeneratedAttr;
  long gevGeneratedAlt;
  long gevSubSampleLevel;
  long gevSubSampleBasis;
  long gevComputeLastHessian;
  float gevEigenvalueThreshold;
  long gevNonParamPlotRes;
  float gevNonParamPlotMaxY;
  long gevNonParamPlotXSizeCm;
  long gevNonParamPlotYSizeCm;
  float gevNonParamPlotMinXSizeCm;
  float gevNonParamPlotMinYSizeCm;
  long svdMaxIter;
  long hieMultinomial;
  long hieTruncStructUtil;
  long hieUpdateHessien;
  long hieDateInLog;
  long bolducMaxAlts;
  long bolducMaxFact;
  long bolducMaxNVar;
  float StepSecondIndividual;
  float NLgWeight;
  float NLhWeight;
  float TSFractionGradientRequired;
  float TSExpTheta;
  long cfsqpMode;
  long cfsqpIprint;
  long cfsqpMaxIter;
  float cfsqpEps;
  float cfsqpEpsEqn;
  float cfsqpUdelta;
  long dfoAddToLWRK;
  long dfoAddToLIWRK;
  long dfoMaxFunEval;
  float donlp2Epsx;
  float donlp2Delmin;
  float donlp2Smallw;
  float donlp2Epsdif;
  long donlp2NReset;
  long solvoptMaxIter;
  long solvoptDisplay;
  float solvoptErrorArgument;
  float solvoptErrorFunction;

   string appendDirFile(const string& dir, const string& file) ;

 private:
   patParameters() ;
   ofstream outFile ;

};

#endif 
