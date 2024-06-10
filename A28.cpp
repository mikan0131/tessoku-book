#include <iostream>
#include <algorithm>
using namespace std;

int Answer = 0;
int N;
char T[100009]; int A[100009];

int main() {
    cin >> N;
    for (int i = 1; i <= N; i++) cin >> T[i] >> A[i];
    for (int i = 1; i <= N; i++) {
        if (T[i] == '+') Answer += A[i];
        if (T[i] == '-') Answer -= A[i];
        if (T[i] == '*') Answer *= A[i];
        Answer %= 10000;
        if (Answer < 0) Answer += 10000;
        cout << Answer << endl;
    }
    return 0;
}