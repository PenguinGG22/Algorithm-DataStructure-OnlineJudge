#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int A, B;
    cin >> A >> B;

    if (A > B) printf(">");
    else if (A == B) printf("==");
    else printf("<");

    return 0;
}