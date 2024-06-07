#include <iostream>
using namespace std;

int A, B;

int gcd(int a, int b) {
    while (a != 1 && b != 1) {
        if (a > b) a %= b;
        else b %= a;
    }
    if (a == 1) return b;
    else return a;
}


int main() {
    cin >> A >> B;
    cout << gcd(A, B) << endl;
    return 0;
}