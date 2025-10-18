#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, B, V;
	cin >> N >> B >> V;

	int cnt = 0;
	cnt = (V - B) / (N - B);
	if ((V - B) % (N - B) != 0) cnt++;

	cout << cnt;
    
	return 0;
}