#include<iostream>
#include<vector>
using namespace std;

int main() {
	int n;

	while (true) {
		cin >> n;
		if (n == -1) {
			break;
		}

		vector<int> vec;

		for (int i = 1; i <= n; ++i) {
			if (n % i == 0) {
				vec.push_back(i);
			}
		}

		int cnt = 0;
		for (int i = 0; i < vec.size() - 1; ++i) {
			cnt += vec[i];
		}

		if (n == cnt) {
			cout << n << " =";
			for (int i = 0; i < vec.size() - 1; ++i) {
				cout << " " << vec[i];
				if (i != vec.size() - 2) {
					cout << " +";
				}
			}
			cout << endl;
		}
		else {
			cout << n << " is NOT perfect." << endl;
		}
	}

	return 0;
}