#include <iostream>
#include <iostream>

using namespace std;

int main() {
  char wordArray[16];
  char guessArray[26];
  int correctCount;
  bool winFlag = false;

  int wordchar = 7;
  
  for(int i = 0; i < wordchar; i++)
    cin >> wordArray[i];

  for(int i = 0; i < 26; i++)
    cin >> guessArray[i];

  
  
  for(int word = 0; word < wordchar; word++){ // for every letter in word
    winFlag = false;
    for(int guess = 0; guess < wordchar+8; guess++){ // for alphabet through (word+10)
      if (wordArray[word] == guessArray[guess]){ // if letter matches guess
        winFlag = true; // make win true
      }
    }
    if (winFlag == false) // if there is no matching char
      break; // break loop and guess next letter
  }

cout << winFlag;
      
}