#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    
    long long cnt = 1;
    for(int i=1; i<=N; i++){
        cnt *= i;
    }
    
    cout << cnt;
    return 0;
}