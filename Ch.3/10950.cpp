#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;
    deque<int> deq;
    for (int i = 0; i < N; i++)
        deq.push_back(i + 1);

    int cnt = 0;
    while (M--) {
        int F;
        cin >> F;
        
        deque<int> idx = deq;
        int locFront = 0;
        while (idx.front() != F) {
            int tmp = idx.front();
            idx.push_back(tmp);
            idx.pop_front();
            locFront++;
        }

        idx = deq;
        int locBack = 0;
        while (idx.front() != F) {
            int tmp = idx.back();
            idx.push_front(tmp);
            idx.pop_back();
            locBack++;
        }
        
        if (locFront <= locBack) {
            while (deq.front() != F) {
                int tmp = deq.front();
                deq.push_back(tmp);
                deq.pop_front();
                cnt++;
            }
            deq.pop_front();
        }
        else {
            while (deq.front() != F) {
                int tmp = deq.back();
                deq.push_front(tmp);
                deq.pop_back();
                cnt++;
            }
            deq.pop_front();
        }
    }

    cout << cnt;

    return 0;
}
