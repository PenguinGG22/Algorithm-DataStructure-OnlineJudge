#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long N;
    cin >> N;
    vector<long long> sizes(6);

    for (int i = 0; i < 6; i++) {
        cin >> sizes[i];
    }

    long long T, P;
    cin >> T >> P;
    int total_shirt = 0;
    
    for (int i = 0; i < 6; i++) {
        total_shirt += sizes[i] / T;
        if (sizes[i] % T != 0) total_shirt++;
    }
    
    int pen_bundle = N / P;
    int pen_single = N % P;

    cout << total_shirt << '\n';
    cout << pen_bundle << ' ' << pen_single;

    return 0;
}