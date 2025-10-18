#include <bits/stdc++.h>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

    int N, K;
    cin >> N >> K;
    
    queue<int> que;
    vector<int> vec;

    for (int i = 1; i <= N; i++) {
        que.push(i);
    }
    
    while (N--) {
        int repeat = K;
        while (--repeat) {
            int tmp = que.front();
            que.push(tmp);
            que.pop();
        }
        vec.push_back(que.front());
        que.pop();
    }

    cout << "<";
    for (int i = 0; i < vec.size() - 1; i++) {
        cout << vec[i] << ", ";
    }
    cout << vec.back() << ">";

    return 0;
}