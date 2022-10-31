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
  
  for(int word = 0; word < wordchar; word++){
    for(int guess = 0; guess < (wordchar+10); guess++) {
      if (wordArray[word] == guessArray[guess])
        winFlag = true;
    }
    if (winFlag == false)
      break;
  }

cout << winFlag;
      
}