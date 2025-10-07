#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	int input;
	cin >> input;
	vector<string> arr(input);

	for (int i = 0; i < input; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < input; i++) {
		int length = arr[i].size();
		cout << arr[i][0] << arr[i][length - 1] << endl;
	}
}