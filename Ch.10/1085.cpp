#include <bits/stdc++.h>
using namespace std;

int main() {
	int x, y, w, h;
	cin >> x >> y >> w >> h;

	int height1 = h - y;
	int height2 = y;
	int width1 = w - x;
	int width2 = x;

	int arr[4] = { height1,height2,width1,width2 };
	int min = arr[0];

	for (int i = 0; i < 4; i++) {
		if (min > arr[i]) min = arr[i];
	}

	cout << min;
	return 0;
}