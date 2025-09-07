#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    string str;

    cin >> N >> M >> str;
    
    int ans = 0, cnt = 0;
    for (int i = 0; i < M - 2; ++i) {
        if (str[i]=='I' && str[i + 1]=='O' && str[i + 2]=='I'){
            cnt++;
            if (cnt == N) {
                ans++;
                cnt--;
            }
            i++;
        }
        else {
            cnt = 0;
        }
    }

    cout << ans;
    return 0;
}