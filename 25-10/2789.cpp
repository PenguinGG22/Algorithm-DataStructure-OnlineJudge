#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string S;
    cin >> S;
    string cambridge = "CAMBRIDGE"; // char 배열 대신 string으로 관리하는 게 편합니다.
    string result = "";

    // 입력받은 S를 한 글자씩 확인
    for (char c : S) {
        // find 함수는 문자를 찾지 못하면 string::npos를 반환합니다.
        // 즉, cambridge 문자열에 포함되지 않은 글자인지 확인하는 조건입니다.
        if (cambridge.find(c) == string::npos) {
            result += c; // 포함되지 않았으면 결과에 추가
        }
    }

    cout << result << '\n';

    return 0;
}