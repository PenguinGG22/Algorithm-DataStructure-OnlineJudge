#include <bits/stdc++.h>
using namespace std;

int N, K;
int cnt = 0;
int result = -1;

void merge(std::vector<int>& vec, int st, int mid, int en) {
    vector<int> tmp;

    int i = st;
    int j = mid + 1;

    while (i <= mid && j <= en) {
        if (vec[i] <= vec[j]) {
            tmp.push_back(vec[i++]);
        }
        else {
            tmp.push_back(vec[j++]);
        }
    }

    while (i <= mid) {
        tmp.push_back(vec[i++]);
    }

    while (j <= en) {
        tmp.push_back(vec[j++]);
    }

    for (int k = st; k <= en; ++k) {
        vec[k] = tmp[k - st];
        cnt++;
        if (cnt == K) {
            result = vec[k];
        }
    }
}

void merge_sort(vector<int>& vec, int st, int en) {
    if (st < en) {
        int mid = (st + en) / 2;
        merge_sort(vec, st, mid);
        merge_sort(vec, mid + 1, en);
        merge(vec, st, mid, en);
    }
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

    cin >> N >> K;

    vector<int> vec;

    for (int i = 0; i < N; i++) {
        int add;
        cin >> add;
        vec.push_back(add);
    }

    merge_sort(vec, 0, N - 1);
    
    cout << result << '\n';

    return 0;
}