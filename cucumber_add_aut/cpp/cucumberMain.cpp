#include "headers/cucumberAdd.h"
#include <iostream>
#include <string>

const bool DEBUG = true;

int main(){
	cucumberAdd newEntry;
	std::string originalWord;
	std::string replacementWord;
	int numOfReplacements;
	int i;
	
	std::cout << "Enter original word" << std::endl
		<< "=> ";
	std::cin >> originalWord;
	
	if(DEBUG)
			std::cout << "\033[1;31m" 
				<< "=>" << originalWord 
				<< "\033[0m" << std::endl;
		
	std::cout << "Enter number of replacements" << std::endl
		<< "=> ";
	std::cin >> numOfReplacements;
	if(DEBUG)
			std::cout << "\033[1;31m" 
				<< "=>" << numOfReplacements 
				<< "\033[0m" << std::endl;
	
	for(i=0;i<=numOfReplacements-1;i++){
		std::cout << "Enter replacement word #" << i+1 << std::endl
			<< "=> ";
		std::cin >> replacementWord;
		if(DEBUG)
			std::cout << "\033[1;31m" 
				<< "=>" << replacementWord 
				<< "\033[0m" << std::endl;
		newEntry.addReplacement(replacementWord);
	}
	
	return 0;
}
