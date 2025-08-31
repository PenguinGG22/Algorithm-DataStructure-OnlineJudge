#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n;
    std::cin >> n;
    int count = 0;

    while (n >= 0) {
        if (n % 5 == 0) {
            count += n / 5;
            std::cout << count << std::endl;
            return 0;
        }
        n -= 3;
        count++;
    }

    std::cout << -1 << std::endl;

    return 0;
}