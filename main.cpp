/* 
 * File:   main.cpp
 * Author: jblake
 *
 * Created on September 24, 2015, 4:45 PM
 */
// version  save to git hub
#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

bool isPalindrome(const string &pali){
   
    int length = pali.length();
    for(int j = 0; j < (length / 2);j++){
        if(pali[j] != pali[length - 1 - j])
            return false;
        
      }
      return true;
}
   
/*
 * 
 */
int main(int argc, char** argv) {
    char word[25];
    cout << "Enter a word: ";
    cin >> word;
    if (isPalindrome(word))
        cout << "Is Palindrome";
    else
        cout << "Not a Palindrome";
    return 0;
}

