#include <iostream>
#include <cmath>
using namespace std;

int N, X[159], Y[159];
int P[159];
bool visited[159];

double GetDist(int p, int q) {
  return sqrt((X[p] - X[q]) * (X[p] - X[q]) + (Y[p] - Y[q]) * (Y[p] - Y[q]));
}

void PlayGreedy() {
  P[1] = 1;
  int CurrentPlace = 1;
  for (int i = 1; i <= N; i++) visited[i] = false;
  visited[1] = true;
  for (int i = 2; i <= N; i++) {
    double MinDist = 10000.0;
    int Min_ID = 0;
    for (int j = 1; j <= N; j++) {
      if (visited[j] == true) continue;
      double NewDist = GetDist(CurrentPlace, j);
      if (NewDist < MinDist) {
        MinDist = NewDist;
        Min_ID = j;
      }
    }
    P[i] = Min_ID;
    visited[Min_ID] = true;
    CurrentPlace = Min_ID;
  }
  P[N + 1] = 1;
}

int main() {
  cin >> N;
  for (int i = 1; i <= N; i++) cin >> X[i] >> Y[i];
  PlayGreedy();
  for (int i = 1; i <= N + 1; i++) cout << P[i] << endl;
  return 0;
}