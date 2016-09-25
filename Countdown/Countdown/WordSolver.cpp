#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){
std::string getUserInput(std::string strPrompt);

    //get user input
    vector<string> userInput = getUserInput();
	//comment

    //for every word in the dictionary, check if you can make that word with the user
    vector<string> dictionaryWords = getDictionaryWords(); 
}

//read from a dictionary file to return a vector of words
void getDictionaryWords(std::string strFilePath){

	std::string strWord;

	//open file from given path
	std::ifstream file;
	file.open(strFilePath);


	while (file >> strWord) {
		std::cout << strWord << "\n";	
	}

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
		if (strResult.size < 8 || strResult.size > 9) {
			std::cout << "Please enter 8 or 9 letters.\n";
		}

    //return the vector
    }while (strResult.size < 8 || strResult.size > 9);
	return strResult;
}

//return true if you can make the given word with the given letters. 
//Each letter can only be used once
boolean validateWord(String word,vector<string> letters){
//loop through each letter of the word. If that letter exists in the given array of letters
// then carry on but remove the letter from the array so it can't be used again
}

