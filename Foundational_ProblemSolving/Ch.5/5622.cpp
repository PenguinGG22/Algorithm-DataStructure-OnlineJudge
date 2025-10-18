#include <iostream>
#include <string>
using namespace std;

int main() {
	string input;
	int time[26] = {3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10};
	int cnt = 0;
	cin >> input;
	for (int i = 0; i < input.size(); i++) {
		if (int(input[i]) > 64 && int(input[i]) < 91) {
			cnt += time[input[i] - 65];
		}
		else if (int(input[i]) > 96 && int(input[i])<123) {
			cnt += time[input[i] - 97];
		}
	}
	cout << cnt;
}