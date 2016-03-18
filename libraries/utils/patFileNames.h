//-*-c++-*------------------------------------------------------------
//
// File name : patFileNames.h
// Author :    \URL[Michel Bierlaire]{http://rosowww.epfl.ch/mbi}
// Date :      Thu Aug 15 21:39:14 2002
//
//--------------------------------------------------------------------

#ifndef patFileNames_h
#define patFileNames_h

#include "patError.h"
#include "patString.h"

/**
   @doc This singleton is designed to provide file names to the package
   @author \URL[Michel Bierlaire]{http://rosowww.epfl.ch/mbi}, EPFL
   (Thu Aug 15 21:39:14 2002)
*/

class patFileNames {
  
 public:
  
  /**
   */
  virtual ~patFileNames() ;
  
  /**
     @return pointer to the single instance of the class
  */
  static patFileNames* the() ;
  
  /**
   */
  patString getModelName() ;

  /**
   */
  void setModelName(const patString& name) ;

  /**
     @return name of the parameter file
   */
  patString getParFile() ;
  
  /**
     @return name of the model specification file
   */
  patString getModFile() ;
  /**
     @param name of one of the sample files
   */
  void addSamFile(patString name) ;
  /**
     @return name of one of the sample files
  */
  patString getSamFile(unsigned short nbr, patError*& err) ;
  /**
   @return number of data files  
  */
  unsigned short getNbrSampleFiles() ;
  /**
   *
     @return name of the file where statistics about the sample are reported
   */
  patString getStaFile(patError*& err) ;
  /**
     @return name of the file where the report on estimation results is stored
   */
  patString getRepFile(patError*& err) ;
  /**
     @return name of the file where the report on estimation results is stored in ALOGIT format
   */
  patString getALogitFile(patError*& err) ;
  /**
     @return name of the file where the report on estimation results is stored in HTML format
  */
  patString getHtmlFile(patError*& err) ;
  /**
     @return name of the file where the python specifiction is written
  */
  patString getPythonSpecFile(patError*& err) ;

  /**
     @return name of the file where the report on estimation results is stored in LaTeX format
  */
  patString getLatexFile(patError*& err) ;

  /**
     @return name of the file where a copy of the screen output  is stored 
   */
  patString getLogFile() ;
  /**
     @return name of the file where the draws for the normal random
     variables are read
   */
  patString getNormalDrawsFile(patError*& err) ;
  /**
     @return name of the file where the draws for the uniform random
     variables are read
   */
  patString getUnifDrawsFile(patError*& err) ;
  /**
     @return name of the file where the normal draws generated by Biogeme are reported
   */
  patString getNormalDrawLogFile(patError*& err) ;
  /**
     @return name of the file where the uniform draws generated by Biogeme are reported
   */
  patString getUnifDrawLogFile(patError*& err) ;
  /**
     @param name of the file where the normal draws for the random variables are read
   */
  void setNormalDrawsFile(patString fileName) ;
  /**
     @param name of the file where the uniform draws for the random variables are read
   */
  void setUnifDrawsFile(patString fileName) ;
  /**
     @return name of the file where sample enumeration is generated
   */
  patString getEnuFile(patError*& err) ;
  /**
     @return name of the model specification file with estimated values
   */
  patString getResFile(patError*& err) ;

  /**
     @return name of the backup file with intermediate values
   */
  patString getBckFile(patError*& err) ;

  /**
     @return name of the file where debugging information about the
     model is reported
   */
  patString getModelDebug() ;
  /**
     @return name of the file where debugging information about the
     parameters is reported
   */
  patString getParamDebug() ;
  /**
     @return name of the file where debugging information about the
     model specicification file is reported
   */
  patString getSpecDebug() ;
  /**
     @return name of the file with the gnuplot source for result simulation
   */
  patString getGnuplotFile(patError*& err) ;

  /**
     @return name of the file where the C++ code must be stored
   */
  patString getCcCode(patError*& err) ;
  /**
     @return name of the file where the C++ code for the function must be stored
   */
  patString getCcCode_f(patError*& err) ;
  /**
     @return name of the file where the C++ code for the gradient must be stored
   */
  patString getCcCode_g(patError*& err) ;
  /**
     @return name of the file where the C++ code for the statistics must be stored
   */
  patString getCcCode_s(patError*& err) ;
  /**
     @return name of the LaTeX file where the Zheng-Fosgerau tests are reported
   */
  patString getZhengFosgerauLatex(patError*& err) ;
  /**
     @return name of the data file where the results of the
     Zheng-Fosgerau tests are reported
   */
  patString getZhengFosgerau(patError*& err) ;
  /**
     @return name of the file contaning the estimated parameters in python format
  */
  patString getPythonEstimated(patError*& err) ;

  /**
     @return name of the file containnig the statistics of the Monte-Carlo integration
   */
  patString getMonteCarloLog(patError*& err) ;

 private:
  patString getInputFile(patString extension) ;
  patString getOutputFile(patString extension, patError*& err) ;
  patString getOutputFileNoBackup(patString extension) ;

 protected:
  
  patFileNames() ;
  
  patString modelName ;
  patString ccCodeName ;
  patString ccfCodeName ;
  patString ccgCodeName ;
  patString defaultName ;
  patString parFile ;
  patString modFile ;
  patString normalDrawFile ;
  patString normalDrawLogFile ;
  patString unifDrawFile ;
  patString unifDrawLogFile ;
  vector<patString> samFile ;
  patString staFile ;
  patString repFile ;
  patString f12File ;
  patString htmlFile ;
  patString pythonSpecFile ;
  patString latexFile ;
  patString enuFile ;
  patString resFile ;
  patString gnuplotFile ;
  patString logFile ;
  patString bckFile ;

  patString modelDebug ;
  patString paramDebug ;
  patString specDebug ;

  patString zfLatex ; 
 patString zfDetails ;

  patString mcFile ;
  patString pythonEstimated ;
};

#endif
