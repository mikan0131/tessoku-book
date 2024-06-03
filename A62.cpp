#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N, M, A[100009], B[100009];
vector <int> G[100009];
bool visited[100009];

void dfs (int pos) {
    visited[pos] = true;
    for (int i = 0; i < G[pos].size(); i++) {
        int nex = G[pos][i];
        if (visited[nex] == false) dfs(nex);
    }
    return;
}


int main() {
    cin >> N >> M;
    for (int i = 1; i <= M; i++) {
        cin >> A[i] >> B[i];
        G[A[i]].push_back(B[i]);
        G[B[i]].push_back(A[i]);
    }
    for (int i = 1; i <= N; i++) visited[i] = false;
    dfs(1);
    for (int i = 1; i <= N; i++) {
        if (visited[i] == false) {cout << "Teh graph is not connected." << endl; return 0;}
    }
    cout << "The graph is connected." << endl;
    return 0;
}