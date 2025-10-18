#include <iostream>
using namespace std;

int main() {
	int r;
	cin >> r;
	int* arr = new int[r];

	for (int i = 0; i < r; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < r - 1; i++) {
		for (int j = 0; j < r - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < r; i++) {
		cout << arr[i] << endl;
	}

	delete[] arr;
	return 0;
}