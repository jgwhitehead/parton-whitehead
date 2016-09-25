#include <iostream>
using namespace std;

int main(){
    //get user input
    vector<string> userInput = getUserInput();

    //for every word in the dictionary, check if you can make that word with the user
    vector<string> dictionaryWords = getDictionaryWords(); 
}

//read from a dictionary file to return a vector of words
vector<string> getDictionaryWords(){

}

//get the letters of the challenge. 
//Returns a vector of individual character strings
vector<string> getUserInput(){
    //read from the command line

    //check that they only entered 8 or 9 letters, otherwise ask again

    //turn the string input into a vector of individual letters

    //return the vector
}

//return true if you can make the given word with the given letters. 
//Each letter can only be used once
boolean validateWord(String word,vector<string> letters){
//loop through each letter of the word. If that letter exists in the given array of letters
// then carry on but remove the letter from the array so it can't be used again
}



