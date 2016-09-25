#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

//read from a dictionary file to return a vector of words
void getDictionaryWords(std::string strFilePath)
{

    std::vector<std::string> vecstrAllWords; // hold all words
    std::string strWord;                     //temp string to read into

    //open file from given path
    std::ifstream file(strFilePath);

    while (file >> strWord)
    {
        // adds each word one by one to our vector
        vecstrAllWords.push_back(strWord);
    }
    //close file
    file.close();
}

//get the letters of the challenge.
//Returns a vector of individual character strings
std::string getUserInput(std::string strPrompt)
{
    // need to declare strResult ahead of the loop so we can return it at the end
    std::string strResult = "";
    do
    {
        std::string strInput = "";
        //use getline to avoid errors with inputs
        std::cout << strPrompt;
        std::getline(std::cin, strInput);

        //check we have the correct number of letters
        if (strResult.size < 8 || strResult.size > 9)
        {
            std::cout << "Please enter 8 or 9 letters.\n";
        }

        //TODO: check that the user input is only letters. If not, complain to user

        //return the vector
    } while (strResult.size < 8 || strResult.size > 9);
    return strResult;
}

//return true if you can make the given word with the given letters.
//Each letter can only be used once
//return true if you can make the given word with the given letters. 
//Each letter can only be used once
bool validateWord(std::string strLetters, std::string strCheckWord) {
	//loop through each letter of the word. If that letter exists in the given array of letters
	// then carry on but remove the letter from the array so it can't be used again

		for (int j = 0; j <= strCheckWord.size; j++) {

			//read each letter of the word into a temp string
			std::string strCheckLetter;
			strCheckLetter = strLetters[j];

			auto autIterFound = std::find(strLetters.begin(), strLetters.end(), strCheckLetter);
			if (autIterFound!=strLetters.end()) {
				strLetters.erase(autIterFound);
			}
			else {
				return false;
			}
		}

		return true;
}
int main()
{
    //get user input
    vector<string> userInput = getUserInput();
    //comment

    //for every word in the dictionary, check if you can make that word with the user
    vector<string> dictionaryWords = getDictionaryWords();

    //if the word can be made from the letters add it to the matches vector

    //print the matches

    //print the size of the longest match
}