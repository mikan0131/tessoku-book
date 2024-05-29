#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N, A[100009];
vector <int> ans;
int B[100009];

int main() {
    cin >> N;
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
        ans.push_back(A[i]);
    }
    sort(ans.begin(), ans.end());
    ans.erase(unique(ans.begin(), ans.end()), ans.end());
    for (int i = 1; i <= N; i++) {
        int pos = lower_bound(ans.begin(), ans.end(), A[i]) - ans.begin() + 1;
        cout << pos;
        if (i == N) cout << endl;
        else cout << ' ';
    }
    return 0;
}