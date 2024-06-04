#include <iostream>
#include <set>
using namespace std;

int Q;
set <int> X;

int main() {
    cin >> Q;
    for (int i = 1; i <= Q; i++) {
        int T;
        cin >> T;
        int x;
        cin >> x;
        if (T == 1) X.insert(x);
        if (T == 2) {
            if (X.count(x) == true) X.erase(x);
            else cout << -1 << endl;
        }
        if (T == 3) {
            if (X.count(x) == true) 
        }
    }
    return 0;
}