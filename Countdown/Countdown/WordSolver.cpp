#include <algorithm>
#include <fstream>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

//read from a dictionary file to return a vector of words
vector<string> getDictionaryWords() {

	vector<string> vecstrAllWords; // hold all words
	string strWord; //temp string to read into

	//open file from given path
	string strFilePath = "words";
	ifstream file(strFilePath);

	while (file >> strWord) {
		// adds each word one by one to our vector
		vecstrAllWords.push_back(strWord);
	}
	//close file
	file.close();

	return vecstrAllWords;
}

//get the letters of the challenge.
//Returns a vector of individual character strings
vector<string> getUserInput() {
	// need to declare strResult ahead of the loop so we can return it at the end
	string strResult = "";
	do {
		string strInput = "";
		//use getline to avoid errors with inputs
		cout << "Please enter 8 or 9 letters.\n";
		getline(cin, strInput);

		//check we have the correct number of letters
		if (strResult.size() < 8 || strResult.size() > 9) {
			cout << "Please enter 8 or 9 letters.\n";
		}

		//TODO: check that the user input is only letters. If not, complain to user

		//return the vector
	} while (strResult.size() < 8 || strResult.size() > 9);
	//split into a vector of letters
	stringstream ss(strResult);
	istream_iterator<string> begin(ss);
	istream_iterator<string> end;

	vector<string> letters(begin, end);
        return letters;
}

//return true if you can make the given word with the given letters.
//Each letter can only be used once
bool validateWord(vector<string> strLetters, string strCheckWord) {
	//loop through each letter of the word. If that letter exists in the given array of letters
	// then carry on but remove the letter from the array so it can't be used again
	for (char letterOfWord : strCheckWord) {

		auto autIterFound = find(strLetters.begin(), strLetters.end(),
				string(1,letterOfWord));
		if (autIterFound != strLetters.end()) {
			//if the letter is found, remove it from being used again
			strLetters.erase(autIterFound);
		} else {
			//not found, not valid
			return false;
		}
	}

	return true;
}
int main() {
	//get user input
	vector<string> userInput = getUserInput();
	//comment

	//for every word in the dictionary, check if you can make that word with the user
	vector<string> dictionaryWords = getDictionaryWords();

	//if the word can be made from the letters add it to the matches vector
	vector<string> matches;
	//print the matches

	for (auto match : matches)
		cout << match << '\n';

	//print the size of the longest match
//printf("Longest word is: %s with %s letters", matches.back(),
//		strlen(matches.back()*));
}
