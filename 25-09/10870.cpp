#include <bits/stdc++.h>
using namespace std;

int fibonacci(int N) {
	if (N <= 0) return 0;
	else if (N <= 2) return 1;
	else return fibonacci(N - 1) + fibonacci(N - 2);
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;
	
	cout << fibonacci(N);

	return 0;
}