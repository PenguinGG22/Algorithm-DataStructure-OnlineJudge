#include <iostream>
#include <string>
using namespace std;

int main() {
	string A, B;
	cin >> A >> B;
	char tmp;
	tmp=A[2];
	A[2]=A[0];
	A[0]=tmp;
	tmp=B[2];
	B[2]=B[0];
	B[0]=tmp;
	if(A>B) cout << A;
	else cout << B;
}