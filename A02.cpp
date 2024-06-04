#include <iostream>
using namespace std;

int N, X, A[109];

int main() {
    cin >> N >> X;
    for (int i = 1; i <= N; i++) cin >> A[i];
    for (int i = 1; i <= N; i++) {
        if (A[i] == X) {cout << "Yes" << endl; return 0;}
    }
    cout << "No" << endl; return 0;
}