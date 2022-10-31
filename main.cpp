#include <iostream>
#include <iostream>
#include <cstring>

using namespace std;

void displayWinLose(bool winFlag);
bool testWin(char wordArray[], char guessArray[], int wordchar, bool winFlag);

int main() {
  string wordString;
  char wordArray[16];
  char guessArray[26];
  bool winFlag = false;

  int wordchar;

  cin >> wordString;

  wordchar = wordString.length();
  
  strcpy(wordArray, wordString.c_str());

  for(int i = 0; i < 26; i++)
    cin >> guessArray[i];

  winFlag = testWin(wordArray, guessArray, wordchar, winFlag);
  displayWinLose(winFlag);
}

// FUNCTIONS //
void displayWinLose(bool winFlag){
  if (winFlag == true)
    cout << "WIN" << endl;
  else if (winFlag == false)
    cout << "LOSE" << endl;
}

bool testWin(char wordArray[], char guessArray[], int wordchar, bool winFlag){
   for(int word = 0; word < wordchar; word++){ // for every letter in word
    winFlag = false;
    for(int guess = 0; guess < (wordchar+7); guess++){ // for alphabet through (word+10)
      if (wordArray[word] == guessArray[guess]){ // if letter matches guess
        winFlag = true; // make win true
      }
    }
    if (winFlag == false) // if there is no matching char
      break; // break loop and guess next letter
  }
  return winFlag;
}
