#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    vector<int> nums(N);
    vector<int> counts(8001, 0);
    double sum = 0;

    for (int i = 0; i < N; ++i) {
        cin >> nums[i];
        sum += nums[i];
        counts[nums[i] + 4000]++;
    }

    sort(nums.begin(), nums.end());

    int mean = round(sum / N);
    if (mean == -0) {
        mean = 0;
    }
    cout << mean << '\n';

    cout << nums[N / 2] << '\n';

    int max_freq = 0;
    for (int i = 0; i < 8001; ++i) {
        if (counts[i] > max_freq) {
            max_freq = counts[i];
        }
    }

    vector<int> modes;
    for (int i = 0; i < 8001; ++i) {
        if (counts[i] == max_freq) {
            modes.push_back(i - 4000);
        }
    }

    if (modes.size() > 1) {
        cout << modes[1] << '\n';
    }
    else {
        cout << modes[0] << '\n';
    }

    cout << nums.back() - nums.front() << '\n';

    return 0;
}