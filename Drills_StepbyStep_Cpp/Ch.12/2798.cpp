#include<iostream>
#include<vector>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	vector<int> arr;

	for (int i = 0; i < n; i++) {
		int input;
		cin >> input;
		arr.push_back(input);
	}

	int max_size = 0;
	for (int i = 0; i < arr.size(); i++) {
		for (int j = i + 1; j < arr.size(); j++) {
			for (int k = j + 1; k < arr.size(); k++) {
				int current_size = arr[i] + arr[j] + arr[k];
				if (current_size > max_size && current_size <= m) {
					max_size = current_size;
				}
			}
		}
	}

	cout << max_size;
	return 0;
}