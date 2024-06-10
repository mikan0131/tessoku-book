#include <iostream>
using namespace std;

long long N;

int main() {
    cin >> N;
    long long A = N / 3;
    long long B = N / 5;
    long long C = N / 15;
    cout << A + B - C << endl;
    return 0;
}