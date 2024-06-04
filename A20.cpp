#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string S, T;
int N, M;
int dp[2009][2009];

int main() {
    cin >> S >> T;
    N = S.size(); M = T.size();
    for (int i = 0; i <= N; i++) {
        for (int j = 0; j <= M; j++) {
            if (i >= 1 && j >= 1 && S[i] == T[j]) dp[i][j] = max({dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1] + 1});
            else if (i >= 1 && j >= 1) dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            else if (i >= 1) dp[i][j] = dp[i - 1][j];
            else if (j >= 1) dp[i][j] = dp[i][j - 1];
        }
    }
    cout << dp[N][M] << endl;
    return 0;
}