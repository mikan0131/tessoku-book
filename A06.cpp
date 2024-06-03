#include <iostream>
using namespace std;

int N, Q, A[100009], L[100009], R[100009];
int S[100009];

int main() {
    cin >> N >> Q;
    for (int i = 1; i <= N; i++) cin >> A[i];
    for (int i = 1; i <= Q; i++) cin >> L[i] >> R[i];
    for (int i = 2; i <= N; i++) {
        S[i] = S[i - 1] + A[i];
    }
    for (int i = 1; i <= Q; i++) {
        cout << S[R[i]] - S[L[i] - 1] << endl;
    }
    return 0;
}