#include <iostream>
#include <string>
using namespace std;

int main() {
	int input;
	cin >> input;
	int cnt = 0;

	for (int i = 0; i < input; i++) {
		string str;
		cin >> str;

		bool isGroup = true;
		bool arr[26] = { false, };
		char prev = str[0];
		arr[prev - 'a'] = true;

		for (int i = 1; i < str.size(); i++) {
			if (str[i] != prev) {
				if (arr[str[i] - 'a'] != true) {
					prev = str[i];
					arr[prev - 'a'] = true;
				}
				else {
					isGroup = false;
					break;
				}
			}
		}
		
		if (isGroup == true) cnt++;
	}

	cout << cnt;
	return 0;
}