#include <bits/stdc++.h>
using namespace std;

vector<int> graph[101];
bool vis[101];
int com_cnt;

void BFS(int st) {
    queue<int> Q;
    Q.push(st);
    vis[st] = true;

    while (!Q.empty()) {
        int cur = Q.front(); Q.pop();
        for (int i = 0; i < graph[cur].size(); i++) {
            int next = graph[cur][i];
            if (!vis[next]) {
                vis[next] = true;
                Q.push(next);
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int K;
    cin >> com_cnt >> K;

    for (int i = 0; i < K; i++) {
        int N, M;
        cin >> N >> M;
        graph[N].push_back(M);
        graph[M].push_back(N);
    }

    BFS(1);

    int cnt = 0;
    for (int i = 1; i <= com_cnt; i++) {
        if (vis[i]) {
            cnt++;
        }
    }

    cout << cnt - 1;

    return 0;
}