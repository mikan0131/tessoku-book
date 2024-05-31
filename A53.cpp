#include <iostream>
#include <queue>
using namespace std;

int Q;
priority_queue <int, vector<int>, greater<int>> price;

int main() {
    cin >> Q;
    for (int i = 1; i <= Q; i++) {
        int T;
        cin >> T;
        if (T == 1) {
            int x;
            cin >> x;
            price.push(x);
        }
        if (T == 2) cout << price.top() << endl;
        if (T == 3) price.pop();
    }
    return 0;
}