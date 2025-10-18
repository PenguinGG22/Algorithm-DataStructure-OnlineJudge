#include <bits/stdc++.h>

bool compare(const std::string& a, const std::string& b) {
    if (a.length() == b.length()) {
        return a < b;
    }
    return a.length() < b.length();
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    std::cin >> n;

    std::vector<std::string> words;
    words.reserve(n);
    std::string temp;

    for (int i = 0; i < n; ++i) {
        std::cin >> temp;
        words.push_back(temp);
    }

    std::sort(words.begin(), words.end(), compare);

    words.erase(std::unique(words.begin(), words.end()), words.end());

    for (const auto& word : words) {
        std::cout << word << '\n';
    }

    return 0;
}