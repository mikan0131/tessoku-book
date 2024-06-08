#include <iostream>
#include <set>
using namespace std;

int Q, T[100009], x[100009];

int main() {
    cin >> Q;
    for (int i = 1; i <= Q; i++) cin >> T[i] >> x[i];
    set <int> S;
    for (int i = 1; i <= Q; i++) {
        if (T[i] == 1) S.insert(x[i]);
        if (T[i] == 2) S.erase(x[i]);
        if (T[i] == 3) {
            auto itr = S.lower_bound(x[i]);
            if (itr == S.end()) cout << -1 << endl;
            else cout << (*itr) << endl;
        }
    }
    return 0;
}