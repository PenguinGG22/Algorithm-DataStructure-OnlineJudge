#include <iostream>
#include <string>
using namespace std;

int main(){
    int num;
    string str;
    
    cin >> str >> num;
    
    string it;
    int cnt = 0;
    
    for(int i = 0; i < num; i++){
        cin >> it;
        if(it == str)
            cnt++;
    }
    
    cout << cnt;
    
    return 0;
}