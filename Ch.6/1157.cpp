#include <iostream>
#include <string>
using namespace std;

int main() {
	string input;
	int arr[26] = {0,};
	int max = -1;
	char res;
	cin >> input;
	
	for(int i=0; i<input.length(); i++){
	    if(input[i]>='a'&&input[i]<='z') input[i] = input[i] - 'a' + 'A';
	    
	    if(++arr[input[i]-'A']>max){
	        max = arr[input[i]-'A'];
	        res = input[i];
	    }
	}
	
	int check = 0;
	for(int i=0; i<26; i++){
	    if(max==arr[i]) check++;
	}
	
	if(check==1) cout<<res;
	else cout<<"?";
	
	return 0;
}