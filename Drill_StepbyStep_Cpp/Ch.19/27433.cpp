#include <bits/stdc++.h>
using namespace std;

long long factorial = 1;

void recursive(int N) {
	if (N <= 0) return;

	factorial *= N;
	recursive(--N);
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	recursive(N);

	cout << factorial;

	return 0;
}