#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int input;
	cin >> input;
	vector<int> arr(input);
	for (int i = 0; i < input; i++) {
		cin >> arr[i];
	}
	float max = arr[0];
	for (int i = 0; i < input; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	float hap = 0;
	for (int i = 0; i < input; i++) {
		hap += arr[i] / max * 100;
	}
	cout << hap / input;
	return 0;
}