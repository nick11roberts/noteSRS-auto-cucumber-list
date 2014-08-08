#include "headers/cucumberAdd.h"
#include <iostream>
#include <string>

const bool DEBUG = false;

int main(){

	cucumberAdd newEntry;
	std::string originalWord;
	std::string replacementWord;
	int numOfReplacements;
	int i;
	bool success;
	
	std::cout << "Original word" << std::endl
		<< ">: ";
		
	std::cin >> originalWord;
	
	newEntry.setOrig(originalWord);
	
	std::cout << "How many replacements" << std::endl
		<< ">: ";
		
	std::cin >> numOfReplacements;
	
	if( ! numOfReplacements){
		std::cout << "Invalid " << std::endl 
			<< "Quit " << std::endl;
		return 0;
	}
	else
		newEntry.setReplacementIndex(numOfReplacements);
	
	for(i=0;i<=numOfReplacements-1;i++){
		std::cout << "Replacement word " << i+1 << std::endl
			<< ">: ";
		std::cin >> replacementWord;
		newEntry.addReplacement(replacementWord);
	}
	
	success = newEntry.writeToIndex();
	
	if(success)
		std::cout << "Success " << std::endl;
	else
		std::cout << "Failed " << std::endl;
	
	return 0;
	
}
