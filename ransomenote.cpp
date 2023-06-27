// leetcode prob: ransom note wow
// Given two strings ransomNote and magazine, return true if ransomNote can be constructed 
// by using the letters from magazine and false otherwise.
// Each letter in magazine can only be used once in ransomNote.

// not very efficient at all, i wrote it like javascript

#include <iostream.h>
using namespace std;

// void shownotes(string ransomNote, string magazine) {
//   std::cout << ransomNote + "\n";
//   std::cout << magazine;
// }

class Solution {
public:
  bool canConstruct(string ransomNote, string magazine) {
    
    // awesome premature optimization for fringe cases (lowkey stupid)
    // if (magazine.length() < ransomNote.length()) {
    //   return false;
    // }

    // if (magazine.find(ransomNote) != std::string::npos) {
    //   return true;
    // }
    
    for (int i = 0; i < magazine.length(); i++) {
      int foundIndex = ransomNote.find(magazine[i]);
      if (foundIndex != std::string::npos) {
        ransomNote.erase(foundIndex, 1);
      }
      if (ransomNote.empty()) {
        return true;
      }
    }

    return false;
  }
};

