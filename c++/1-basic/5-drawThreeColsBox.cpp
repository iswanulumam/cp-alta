#include <bits/stdc++.h>
using namespace std;

void drawThreeColsBox(int height) {
  int counter = 1;
  for (int i = 1; i <= height; i++) {
    for (int j = 1; j <= height; j++) {
      if (counter % 3 == 0) {
        cout << "* ";
      } else if (counter % 2 == 0) {
        cout << "$ ";
      } else {
        cout << "@ ";
      }
      counter++;
    }
    cout << endl;
  }
}

int main() {
  drawThreeColsBox(3);
  /*
  @ $ *
  $ @ *
  @ $ *
  */
  drawThreeColsBox(5);
  /*
  @ $ * $ @
  * @ $ * $
  @ * @ $ *
  $ @ * @ $
  * $ @ * @
  */
  drawThreeColsBox(1);
  // @
}