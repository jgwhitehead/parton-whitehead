#include <iostream>
#include <string>

using namespace std;

std::string getUserInput(std::string strPrompt);

int main()
{
    //get user input
    vector<string> userInput = getUserInput();
	//comment

    //for every word in the dictionary, check if you can make that word with the user 
}

//get the letters of the challenge. 
//Returns a vector of individual character strings

std::string getUserInput(std::string strPrompt)
{
	// need to declare strResult ahead of the loop so we can return it at the end
	std::string strResult = "";
	do {
		std::string strInput = "";
		//use getline to avoid errors with inputs
		std::cout << strPrompt;
		std::getline(std::cin, strInput);

		//check we have the correct number of letters
		if (strResult.size < 8 || strResult.size>9) {
			std::cout << "Please enter 8 or 9 letters.\n";
		}

	} while (strResult.size < 8 || strResult.size>9);
	return strResult;
}
