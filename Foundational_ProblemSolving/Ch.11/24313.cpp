#include<iostream>
using namespace std;

int main() {
	int a1, a0;
	int c;
	int n0;

	cin >> a1 >> a0;
	cin >> c;
	cin >> n0;

	if (c >= a1 && (a1 * n0 + a0 <= c * n0)) cout << true;
	else cout << false;

	return 0;
}