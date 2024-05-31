#include <iostream>
#include <map>
using namespace std;

int Q;
map <string, int> score;

int main() {
    cin >> Q;
    for (int i = 1; i <= Q; i++) {
        int T;
        cin >> T;
        if (T == 1) {
            string N;
            int S;
            cin >> S >> N;
            score[N] = S;
        }
        if (T == 2) {
            string N;
            cin >> N;
            cout << score[N] << endl;
        }
    }
    return 0;
}