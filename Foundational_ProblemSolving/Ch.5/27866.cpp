#include <iostream>
#include <string>
using namespace std;

int main() {
	string input;
	int num;
	cin >> input;
	cin >> num;
	char find = input[num-1];
	cout << find;
}