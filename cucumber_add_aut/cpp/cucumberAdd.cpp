#include "headers/cucumberAdd.h"
#include <vector>
#include <string>
#include <iostream>
#include <fstream>


// PUBLIC METHODS

cucumberAdd::cucumberAdd(){ 
	orig = ""; 
	replacementList.clear();
	replacementIndex = 0;
	finString = "";
}

void cucumberAdd::setOrig(std::string replacement){
	orig = replacement;
}

void cucumberAdd::addReplacement(std::string replacement){
	replacementList.push_back(replacement);
}

void cucumberAdd::setReplacementIndex(int index){
	replacementIndex = index;
}

std::string cucumberAdd::getOrig(){
	return orig;
}

std::string cucumberAdd::getReplacement(int index){
	return replacementList.at(index);
}

int cucumberAdd::getReplacementIndex(){
	return replacementIndex;
}

std::string cucumberAdd::getFinString(){
	return finString;
}

bool cucumberAdd::writeToIndexFile(){
	bool success = false;
	std::ofstream indexFile;
	
	this->setFinString();
	
	indexFile.open("../../index.nsrs", std::ios_base::app);
	
	if(indexFile << finString << std::endl)
		success = true;
			
	return success;
}


// PRIVATE METHODS

void cucumberAdd::setFinString(){
	
	std::string replacementListComposite;
	
	for(int i = 0; i<=replacementIndex - 1; i++)
		replacementListComposite += " " + replacementList.at(i);
	
	finString = orig + " " + "{#" + std::to_string(replacementIndex) + "#} " + "=" + replacementListComposite + ";";
	
}


// PRIVATE DATA MEMBERS (non-static, but listed for debugging purposes.)

/*
std::string cucumberAdd::orig;
std::vector<std::string> cucumberAdd::replacementList;  
int cucumberAdd::replacementIndex;
std::string cucumberAdd::finString;
*/





