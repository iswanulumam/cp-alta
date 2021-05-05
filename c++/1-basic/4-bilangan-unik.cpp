#include <bits/stdc++.h>
using namespace std;

bool CheckUnik(int number) {
  vector<int> primes{2, 3, 5};
  for (int i = 0; i < primes.size(); i++) {
    while (number % primes[i] == 0) {
      number = number / primes[i];
    }
  }
  if (number == 1) {
    return true;
  }
  return false;
}

void BilanganUnik(int inputNumber) {
  for (int i = 2; i <= inputNumber; i++) {
    if (CheckUnik(i)) {
      cout << i << " ";
    }
    if (i == inputNumber) {
      cout << endl;
    }
  }
}

int main() {

  // cout << CheckUnik(4) << endl; // 1
  // cout << CheckUnik(15) << endl; // 1
  // cout << CheckUnik(17) << endl; // 0
  // cout << CheckUnik(20) << endl; // 1

  BilanganUnik(10); // 2 3 4 5 6 8 9 10
  BilanganUnik(20); // 2 3 4 5 6 8 9 10 12 15 16 18 20
  BilanganUnik(4); // 2 3 4
  BilanganUnik(1); //
  BilanganUnik(30); // 2 3 4 5 6 8 9 10 12 15 16 18 20 24 25 27 30
}