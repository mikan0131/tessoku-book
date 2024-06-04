#include <iostream>
#include <stack>
#include <string>
using namespace std;

int Q;
stack <string> book;

int main() {
    cin >> Q;
    for (int i = 1; i <= Q; i++) {
        int T;
        cin >> T;
        if (T == 1) {
            string x;
            cin >> x;
            book.push(x);
        }
        if (T == 2) cout << book.top() << endl;
        if (T == 3) book.pop();
    }
    return 0;
}