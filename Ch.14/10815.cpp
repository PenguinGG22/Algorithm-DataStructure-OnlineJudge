#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;

    map<int, bool> cards;
    
    while (N--) {
        int input;
        cin >> input;
        cards[input] = true;
    }

    int M;
    cin >> M;

    while (M--) {
        int input;
        cin >> input;
        if (cards.count(input)) cout << 1 << ' ';
        else cout << 0 << ' ';
    }

    return 0;
}