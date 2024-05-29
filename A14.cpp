#include <iostream>
#include <algorithm>
using namespace std;

int N, K, A[1009], B[1009], C[1009], D[1009];
int L[1000009], R[1000009];

int main() {
    cin >> N >> K;
    for (int i = 1; i <= N; i++) cin >> A[i];
    for (int i = 1; i <= N; i++) cin >> B[i];
    for (int i = 1; i <= N; i++) cin >> C[i];
    for (int i = 1; i <= N; i++) cin >> D[i];
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            L[N * (i - 1) + j] = A[i] + B[j];
        }
    }
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            R[N * (i - 1) + j] = C[i] + D[j];
        }
    }
    sort(R + 1, R + N * N + 1);
    for (int i = 1; i <= N * N; i++) {
        int num = K - L[i];
        bool ans = binary_search(R + 1, R + N * N + 1, num);
        if (ans == true) {cout << "Yes" << endl; return 0;}
    }
    cout << "No" << endl;
    return 0;
}