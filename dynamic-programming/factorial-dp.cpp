#include<iostream>
using namespace std;

int main () {
	int n = 0;
	cout << "Enter the factorial number: ";
	cin >> n;
	cout << endl;
	if (n <= 1) {
		cout << "Please enter a number more than 1" << endl;
	}
	
	int f[n+1];
	f[0] = 1;
	for (int i = 1; i <= n; i++) {
		f[i] = f[i-1] * i;
		cout << f[i] << endl;
	}
	
	return 0;
}
