#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, M;
    cin >> N >> M;

    map<int, bool> set;
    
    while (N--) {
        int i;
        cin >> i;
        set[i] = true;
    }

    while (M--) {
        int i;
        cin >> i;
        if (set[i] == true) set[i] = false;
        else set[i] = true;
    }

    int cnt = 0;
    for (auto i : set) {
        if (i.second == true) cnt++;
    }

    cout << cnt;

    return 0;
}