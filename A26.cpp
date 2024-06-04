#include <iostream>
#include <algorithm>
using namespace std;

int X, A[10009];

int main() {
    cin >> X;
    for (int i = 1; i <= X; i++) cin >> A[i];
    for (int i = 1; i <= X; i++) {
        bool ans = true;
        for (int j = 2; j * j <= A[i]; j++) {
            if (A[i] % j == 0) {ans = false; break;}
        }
        if (ans == true) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}