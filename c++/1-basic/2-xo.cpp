#include <bits/stdc++.h>
using namespace std;

// complexity: O(n)
bool CountXO(string inputString) {
  int countX = 0, countY = 0;

  for (int i = 0; i < inputString.size(); i++) {
    if (inputString[i] == 'x') {
      countX += 1;
    } else if (inputString[i] == 'o') {
      countY += 1;
    }
  }
  
  if (countX == countY) {
    return true;
  }
  return false;
}

int main() {
  cout << CountXO("xoxoxo") << endl; // True
  cout << CountXO("oxooxo") << endl; // False
  cout << CountXO("oxo") << endl; // False
  cout << CountXO("xxxooo") << endl; // True
  cout << CountXO("xoxooxxo") << endl; // True
}