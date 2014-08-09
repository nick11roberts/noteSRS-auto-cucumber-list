#include <string>
#include <vector>

class cucumberAdd {

	public:
	
		cucumberAdd();
		int getReplacementIndex();
		bool writeToIndexFile();
		void setOrig(std::string), addReplacement(std::string), setReplacementIndex(int);
		std::string getOrig(), getReplacement(int), getFinString();
		
	private: 
	 	
	 	void setFinString();
		int replacementIndex;
		std::string orig, finString;
		std::vector<std::string> replacementList; 
		
};
