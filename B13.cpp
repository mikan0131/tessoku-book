#include <iostream>
using namespace std;

long long N, K;
long long A[100009], S[100009], R[100009];

long long sum (int l, int r) {
    return S[r] - S[l - 1];
}

int main() {
    cin >> N >> K;
    for (int i = 1; i <= N; i++) cin >> A[i];
    S[0] = 0;
    for (int i = 1; i <= N; i++) S[i] = S[i - 1] + A[i];
    for (int i = 1; i <= N; i++) {
        if (i == 1) R[i] = 0;
        else R[i] = R[i - 1];
        while (R[i] < N && sum(i, R[i] + 1) <= K) {
            R[i]++;
        }
        
    }
    long long Answer = 0;
    for (int i = 1; i <= N; i++) Answer += (R[i] - i + 1);
        
    cout << Answer << endl;
    return 0;
}