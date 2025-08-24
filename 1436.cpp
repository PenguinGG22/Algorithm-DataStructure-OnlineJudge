#include <iostream>
#include <string>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int N;
    std::cin >> N;

    int count = 0;
    int num = 665;

    while (true) {
        num++;
        std::string s = std::to_string(num);
        if (s.find("666") != std::string::npos) {
            count++;
        }
        if (count == N) {
            std::cout << num << std::endl;
            break;
        }
    }

    return 0;
}