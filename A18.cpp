#include <iostream>
#include <algorithm>
using namespace std;

int N, S, A[69];
bool dp[69][10009];

int main() {
    cin >> N >> S;
    for (int i = 1; i <= N; i++) cin >> A[i];
    for (int i = 0; i <= N; i++) {
        for (int j = 0; j <= S; j++) dp[i][j] = false;
    }
    dp[0][0] = true;
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j <= S; j++) {
            if (j < A[i]) dp[i][j] = dp[i - 1][j];
            else dp[i][j] = dp[i - 1][j] || dp[i - 1][j - A[i]];
        }
    }
    if (dp[N][S] == true) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}