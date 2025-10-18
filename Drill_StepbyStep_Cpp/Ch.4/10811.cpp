#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int input1, input2;
	cin >> input1 >> input2;
	vector<int> arr(input1);

	for (int i = 0;i < input1; i++) {
		arr[i] = i + 1;
	}
	
	for (int i = 0;i < input2; i++) {
		int n, m;
		cin >> n >> m;
		n--; m--;

		int gap = m - n;
		for (int j = 0; j <= gap / 2; j++) {
			swap(arr[n + j], arr[m - j]);
		}
	}

	for (int i = 0; i < input1; i++) {
		cout << arr[i] << " ";
	}
}