#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string expression;
    cin >> expression;

    int result = 0;
    string current_num_str = "";
    bool is_minus_section = false;

    for (int i = 0; i <= expression.length(); ++i) {
        if (i == expression.length() || expression[i] == '+' || expression[i] == '-') {
            int num = stoi(current_num_str);

            if (is_minus_section) {
                result -= num;
            } else {
                result += num;
            }

            current_num_str = "";

            if (i < expression.length() && expression[i] == '-') {
                is_minus_section = true;
            }
        } else {
            current_num_str += expression[i];
        }
    }

    cout << result << endl;

    return 0;
}