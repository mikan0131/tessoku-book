#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, A[100009], B[100009];
int dp[100009];
vector <int> ans;

int main() {
    cin >> N;
    for (int i = 2; i <= N; i++) cin >> A[i];
    for (int j = 3; j <= N; j++) cin >> B[j];
    dp[1] = 0;
    dp[2] = A[2];
    for (int i = 3; i <= N; i++) {
        dp[i] = min(dp[i - 1] + A[i], dp[i - 2] + B[i]);
    }
    for (int i = N; i >= 1; i--) {
        ans.push_back(i);
        if (dp[i] - A[i] == dp[i - 1]) continue;
        else i--;
    }
    reverse(ans.begin(), ans.end());
    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i];
        if (i == ans.size() - 1) cout << endl;
        else cout << ' ';
    }
    return 0;
}