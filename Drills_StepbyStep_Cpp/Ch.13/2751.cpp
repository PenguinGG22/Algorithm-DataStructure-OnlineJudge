#include<iostream>
#include<vector>
using namespace std;

vector<int> arr;
vector<int> tmp;

void merge(int st, int en) {
	int mid = (st + en) / 2;
	int lidx = st, ridx = mid;
	for (int i = st; i < en; ++i) {
		if (ridx == en) tmp[i] = arr[lidx++];
		else if (lidx == mid) tmp[i] = arr[ridx++];
		else if (arr[lidx] <= arr[ridx]) tmp[i] = arr[lidx++];
		else tmp[i] = arr[ridx++];
	}
	for (int i = st; i < en; i++) arr[i] = tmp[i];
}

void merge_sort(int st, int en) {
	if (en <= st + 1) return;
	int mid = (st + en) / 2; 
	merge_sort(st, mid);
	merge_sort(mid, en);
	merge(st, en);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;

	arr.resize(n);
	tmp.resize(n);

	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}

	merge_sort(0, n);
	for (int i = 0; i < n; i++) cout << arr[i] << '\n';
	return 0;
}