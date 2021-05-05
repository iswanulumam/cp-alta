#include <bits/stdc++.h>
using namespace std;

// complexity: O(n)
bool CheckAB(string inputString) {
  for (int i = 0; i < inputString.size() - 4; i++) {
    if (inputString[i] == 'a' && inputString[i + 4] == 'b') {
      return true;
    } else if (inputString[i] == 'b' && inputString[i + 4] == 'a') {
      return true;
    }
  }
  return false;
}

int main() {
  cout << CheckAB("lane borrowed") << endl; // True
  cout << CheckAB("i am sick") << endl; // False
  cout << CheckAB("you are boring") << endl; // True
  cout << CheckAB("barbarian") << endl; // True
  cout << CheckAB("bacon and meat") << endl; // False
}