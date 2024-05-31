#include <iostream>
#include <string>
#include <queue>
using namespace std;

int Q;
queue <string> people;

int main() {
    cin >> Q;
    for (int i = 1; i <= Q; i++) {
        int T;
        cin >> T;
        if (T == 1) {
            string x;
            cin >> x;
            people.push(x);
        }
        if (T == 2) cout << people.front() << endl;
        if (T == 3) people.pop();
    }
    return 0;
}