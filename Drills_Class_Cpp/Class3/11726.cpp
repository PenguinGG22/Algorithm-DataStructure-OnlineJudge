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