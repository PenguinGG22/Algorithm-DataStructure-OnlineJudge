#include <bits/stdc++.h>
using namespace std;

bool compare(string& a, string& b) {
    if (a.length() == b.length()) {
        return a < b;
    }
    return a.length() < b.length();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<string> words;
    words.reserve(n);
    string temp;

    for (int i = 0; i < n; ++i) {
        cin >> temp;
        words.push_back(temp);
    }

    sort(words.begin(), words.end(), compare);

    words.erase(unique(words.begin(), words.end()), words.end());

    for (auto c : words) {
        cout << c << '\n';
    }

    return 0;
}