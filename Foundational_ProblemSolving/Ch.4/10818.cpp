#include<iostream>
using namespace std;

int main() {
	int input;
	cin >> input;

	int* arr = new int[input];
	for (int i = 0; i < input; i++) {
		cin >> arr[i];
	}
	
	int min = arr[0], max = arr[0];
	for (int i = 0; i < input; i++) {
		if (arr[i] < min) min = arr[i];
		if (arr[i] > max) max = arr[i];
	}
	cout << min << " " << max;
}