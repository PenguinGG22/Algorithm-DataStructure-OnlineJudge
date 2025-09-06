#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;

    map<string, int> maps_name;
    vector<string> vec;
    for (int i = 0; i < N; ++i) {
        string getname;
        cin >> getname;

        maps_name[getname] = i + 1;
        vec.push_back(getname);
    }

    for (int i = 0; i < M; ++i) {
        string findkey;
        cin >> findkey;

        if (isdigit(findkey[0])) {
            int num = stoi(findkey);
            cout << vec[num - 1] << '\n';
        }
        else {
            cout << maps_name[findkey] << '\n';
        }
    }

    return 0;
}