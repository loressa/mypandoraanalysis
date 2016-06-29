/**
 * \file MyPandoraAnalysis.h
 *
 * 
 * \brief Little sample program for establishing a user analysis space.
 *
 * @author wketchum
*/

#ifndef TEST_USERANALYSIS_H
#define TEST_USERANALYSIS_H

#include <string>

#include "TTree.h"

namespace test{
  class MyPandoraAnalysis;
}

class test::MyPandoraAnalysis{
  
public:
  
  /// Default constructor
  MyPandoraAnalysis();

  /// Default destructor
  virtual ~MyPandoraAnalysis(){};

  void RunAnalysis();
  void SetupOutputTree(TTree*);
  
 private:

  std::string fAlgName;
  TTree*      fTree;
  
  void PrintInfo();

  
};

#endif
