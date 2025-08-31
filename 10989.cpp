#include <iostream>

int counts[10001];

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    std::cin >> n;

    int temp = 0;
    for (int i = 0; i < n; ++i) {
        std::cin >> temp;
        counts[temp]++;
    }

    for (int i = 1; i <= 10000; ++i) {
        for (int j = 0; j < counts[i]; ++j) {
            std::cout << i << '\n';
        }
    }

    return 0;
}