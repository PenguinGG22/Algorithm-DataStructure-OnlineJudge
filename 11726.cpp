#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;

    int arr[100005] = { 0, };
    arr[1] = 1; arr[2] = 2;
    for (int i = 3; i <= N; ++i) {
        arr[i] = (arr[i - 1] + arr[i - 2]) % 10007;
    }

    cout << arr[N];

    return 0;
}

/*

2x1 = 1
2x2 = 2
2x3 = 3
2x4 = 5
2x5 = 8
f(x) = f(x-1) + f(x-2) [x>3]

*/