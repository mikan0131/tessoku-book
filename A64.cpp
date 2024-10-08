#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int N, M, A[100009], B[100009], C[100009];
vector <pair <int, int>> G[100009];
int cur[100009]; bool kakutei[1000009];
priority_queue <pair<int, int>, vector <pair <int, int>>, greater <pair <int, int>>> Q;

int main() {
    cin >> N >> M;
    for (int i = 1; i <= M; i++) {
        G[A[i]].push_back(make_pair(B[i], C[i]));
        G[B[i]].push_back(make_pair(A[i], C[i]));
    }
    for (int i = 1; i <= N; i++) kakutei[i] = false;
    for (int i = 1; i <= N; i++) cur[i] = 2000000000;
    cur[1] = 0;
    Q.push(make_pair(cur[1], 1));
    while (!Q.empty()) {
        int pos = Q.top().second;
        Q.pop();
        if (kakutei[pos] == true) continue;
        kakutei[pos] = true;
        for (int i = 0; i < G[pos].size(); i++) {
            int nex = G[pos][i].first;
            int cost = G[pos][i].second;
            if (cur[nex] > cur[pos] + cost) {
                cur[nex] = cur[pos] + cost;
                Q.push(make_pair(cur[nex], nex));
            }
        }
    }
    for (int i = 1; i <= N; i++) {
        if (cur[i] == 20000000000) cout << -1 << endl;
        else cout << cur[i] << endl;
    }
    return 0;
}