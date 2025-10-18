#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    vector<int> vec;
    for (int i = 0; i < N; ++i) {
        int M;
        cin >> M;
        vec.push_back(M);
    }
    sort(vec.begin(), vec.end());

    int cnt = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j <= i; ++j) {
            cnt += vec[j];
        }
    }

    cout << cnt;
    
    return 0;
}