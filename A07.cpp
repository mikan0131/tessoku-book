#include <iostream>
using namespace std;

int D, N, L[100009], R[100009];
int S[100009];

int main() {
    cin >> D >> N;
    for (int i = 1; i <= N; i++) cin >> L[i] >> R[i];
    for (int i = 1; i <= N; i++) {
        S[L[i]]++;
        S[R[i] + 1]--;
    }
    for (int i = 1; i <= D; i++) S[i] = S[i - 1] + S[i];
    for (int i = 1; i <= D; i++) cout << S[i] << endl;
    return 0;
}