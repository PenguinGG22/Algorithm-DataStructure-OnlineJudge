#include <iostream>

int main() {
    // 입출력 속도 향상
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int T;
    std::cin >> T;
    while (T--) {
        int H, W, N;
        std::cin >> H >> W >> N;

        int floor = (N - 1) % H + 1;      // 배정될 층수 계산
        int room_num = (N - 1) / H + 1;   // 배정될 호수(거리) 계산

        // YXX 또는 YYXX 형태로 출력
        std::cout << floor * 100 + room_num << '\n';
    }

    return 0;
}