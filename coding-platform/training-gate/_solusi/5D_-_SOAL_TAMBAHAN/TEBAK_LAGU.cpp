#include <bits/stdc++.h>

typedef unsigned long long llu;
typedef long long ll;

#define RESET(a, b) memset(a, b, sizeof(a))
#define UNIQUE(a) (a).erase(unique((a).begin(), (a).end()), (a).end())
#define MP(a, b) make_pair(a, b)
#define PB(a) push_back(a)
#define F first
#define S second

using namespace std;

int fit(int x) {
  if (x<0)
    return 24-x;  
  return x;  
}

int main() {
  string song;  
  int n, song_len;
  const string tone[24] = {"c.", "c#", "d.", "d#", "e.", "f.", "f#", "g.",
                           "g#", "a.", "a#", "b.", "C.", "C#", "D.", "D#",
                           "E.", "F.", "F#", "G.", "G#", "A.", "A#", "B."};
  map<string, int> tone_map;

  for (int i=0; i<24; i++)
    tone_map[tone[i]] = i;  

  cin >> song >> n;
  song_len = song.length();
  int pola[song_len/2-1]; int pivot=tone_map[song.substr(0, 2)];
  for (int i=0; i<song_len/2 - 1; i++)
    pola[i] = pivot-tone_map[song.substr(i*2+2, 2)];  

  string var_song[24];
  for (int i=0; i<24; i++) {
    string tmp = tone[i];
    for (int j=0; j<song_len/2-1; j++)
      tmp.append(string(tone[fit(i-pola[j])%24]));
    var_song[i] = tmp;
  }

  for (int i=1; i<=n; i++) {
    string x;
    cin >> x;
    for (int j=0; j<24; j++) {
      if (x.find(var_song[j]) != string::npos) {
        cout << i << endl;
        return 0;
      }
    }
  }
  cout << '#' << endl;
}