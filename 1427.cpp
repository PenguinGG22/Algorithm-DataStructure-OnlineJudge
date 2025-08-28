#include<iostream>
#include<vector>
using namespace std;

int n = 0;
vector<int> arr;
vector<int> tmp;

void merge(int st, int en) {
	int mid = (st + en) / 2;
	int lidx = st;
	int ridx = mid;
	for (int i = st; i < en; ++i) {
		if (ridx == en) tmp[i] = arr[lidx++];
		else if (lidx == mid) tmp[i] = arr[ridx++];
		else if (arr[lidx] >= arr[ridx]) tmp[i] = arr[lidx++];
		else tmp[i] = arr[ridx++];
	}
	for (int i = st; i < en; i++) arr[i] = tmp[i];
}

void merge_sort(int st, int en) {
	if (en == st + 1) return;
	int mid = (st + en) / 2;
	merge_sort(st, mid);
	merge_sort(mid, en);
	merge(st, en);
}

int main() {
	int n;
	cin >> n;

	int num = n;
	int arr_size = 0;
	while (num > 0) {
		arr_size++;
		num /= 10;
	}

	arr.resize(arr_size);
	tmp.resize(arr_size);

	int i = 0;
	while (n > 0) {
		arr[i++] = n % 10;
		n /= 10;
	}

	merge_sort(0, arr_size);
	for (int i = 0; i < arr_size; i++) cout << arr[i];
	return 0;
}