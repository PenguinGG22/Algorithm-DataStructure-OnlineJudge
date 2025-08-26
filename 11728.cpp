#include<iostream>
#include<vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, m;
	cin >> n >> m;
	vector<int> a;
	vector<int> b;

	for (int i = 0; i < n; ++i) {
		int input;
		cin >> input;
		a.push_back(input);
	}
	for (int i = 0; i < m; ++i) {
		int input;
		cin >> input;
		b.push_back(input);
	}

	int aidx = 0, bidx = 0;
	vector<int> arr;
	arr.reserve(n + m);

	for (int i = 0; i < n + m; ++i) {
		if (aidx == n) arr.push_back(b[bidx++]);
		else if (bidx == m) arr.push_back(a[aidx++]);
		else if (a[aidx] <= b[bidx]) arr.push_back(a[aidx++]);
		else arr.push_back(b[bidx++]);
	}

	for (int i = 0; i < n + m; i++) cout << arr[i] << ' ';
	return 0;
}