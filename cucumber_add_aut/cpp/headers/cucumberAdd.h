#include <string>
#include <vector>

class cucumberAdd {
	public:
		cucumberAdd();
		
		void setOrig(std::string);
		void addReplacement(std::string);
		
		std::string getOrig();
		std::string getReplacement(int);
		
		bool writeToIndex();
		
	private: //some of these can potentially be const... 
		std::string orig;
		std::vector<std::string> replacementList;  
		int replacementIndex;
		std::string stringToAdd;
		std::string mergeStrings(std::string, std::vector<std::string>);
		
};
