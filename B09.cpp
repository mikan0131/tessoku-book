#include <iostream>
using namespace std;

int N, A[100009], B[100009], C[100009], D[100009];
long long P[1509][1509];

int main() {
  cin >> N;
  for (int i = 1; i <= N; i++) cin >> A[i] >> B[i] >> C[i] >> D[i];
  for (int i = 1; i <= N; i++) {
    C[i]--;
    D[i]--;
  }
  for (int i = 1; i <= N; i++) {
    P[A[i]][B[i]]++;
    P[A[i]][D[i] + 1]--;
    P[C[i] + 1][B[i]]--;
    P[C[i] + 1][D[i] + 1]++;
  }
  for (int i = 1; i <= 1500; i++) {
    for (int j = 1; j <= 1500; j++) {
      P[i][j] += P[i][j - 1];
    }
  }
  for (int j = 1; j <= 1500; j++) {
    for (int i = 1; i <= 1500; i++) {
      P[i][j] += P[i - 1][j];
    }
  }
  long long count = 0;
  for (int i = 1; i <= 1500; i++) {
    for (int j = 1; j <= 1500; j++) {
      if (P[i][j] >= 1) count++;
    }
  }
  cout << count << endl;
  return 0;
}