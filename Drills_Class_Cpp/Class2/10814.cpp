#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    struct Member {
        int age;
        int join_order;
        string name;
    };

    vector<Member> members(N);
    for (int i = 0; i < N; ++i) {
        cin >> members[i].age >> members[i].name;
        members[i].join_order = i;
    }

    sort(members.begin(), members.end(), [](const Member& a, const Member& b) {
        if (a.age != b.age) {
            return a.age < b.age;
        }
        return a.join_order < b.join_order;
    });

    for (int i = 0; i < N; ++i) {
        cout << members[i].age << " " << members[i].name << "\n";
    }

    return 0;
}