#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N, S, A[69];
bool dp[69][10009];
vector <int> ans;

int main() {
    cin >> N >> S;
    for (int i = 1; i <= N; i++) cin >> A[i];
    for (int i = 0; i <= S; i++) dp[0][i] = false;
    dp[0][0] = true;
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j <= S; j++) {
            if (j < A[i]) dp[i][j] = dp[i - 1][j];
            else dp[i][j] = dp[i - 1][j] || dp[i - 1][j - A[i]];
        }
    }
    int Place = S;
    for (int i = N; i >= 1; i--)  {
        if (Place < A[i]) continue;
        else {
            if (dp[i][Place - A[i]] == true) {ans.push_back(i); Place -= A[i];}
            else continue;
        }
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