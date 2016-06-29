#ifndef TEST_USERANALYSIS_CXX
#define TEST_USERANALYSIS_CXX

#include "MyPandoraAnalysis.hh"
#include <iostream>

test::MyPandoraAnalysis::MyPandoraAnalysis()
  : fAlgName("MyPandoraAnalysis")
{}

void test::MyPandoraAnalysis::SetupOutputTree(TTree* tfs_tree){
  fTree = tfs_tree;

  std::string title = fAlgName + " Tree";
  fTree->SetObject(fTree->GetName(),title.c_str());
}

void test::MyPandoraAnalysis::RunAnalysis(){
  PrintInfo();
}

void test::MyPandoraAnalysis::PrintInfo(){
  std::cout << "\n================================== MyPandoraAnalysis ==========================" << std::endl;
  std::cout << "This is a MyPandoraAnalysis class called " << fAlgName << std::endl;
  std::cout << "\tThere is an output tree called "
	    << fTree->GetName() << " (" << fTree->GetTitle() << ")" << std::endl;
  std::cout << "==========================================================================\n" << std::endl;
}

#endif
