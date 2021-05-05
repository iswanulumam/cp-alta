#include <bits/stdc++.h>
using namespace std;

int main() {
  int nilai = 80;

  if (nilai > 100 && nilai < 0) {
    cout << "Nilai invalid" << endl;
  } else if (nilai < 35) {
    cout << "E" << endl;
  } else if (nilai < 50) {
    cout << "D" << endl;
  } else if (nilai < 65) {
    cout << "C" << endl;
  } else if (nilai < 80) {
    cout << "B" << endl;
  } else if (nilai <= 100) {
    cout << "A" << endl;
  }
}