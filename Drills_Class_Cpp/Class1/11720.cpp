#include <bits/stdc++.h>
using namespace std;

int main() {
	int pos;
	string arr = { 0 };

	cin >> pos;
	cin >> arr;

	int hap = 0;
	for (int i = 0; i < pos; i++) {
		hap += arr[i]-'0';
	}

	cout << hap;

    return 0;
}