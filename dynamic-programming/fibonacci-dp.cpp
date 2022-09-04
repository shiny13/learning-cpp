#include<iostream>
using namespace std;

int main() {
	int n = 0;
	cout << "Enter the fibonacci series number: ";
	cin >> n;
	cout << endl;
	if (n <= 1) {
		cout << "Please enter a number more than 1" << endl;
	}
	
	int f[n+1];
	f[0] = 0;
	f[1] = 1;
	
	for (int i = 2; i <= n; i++) {
		f[i] = f[i-1] + f[i-2];
		cout << f[i] << endl;
	}
}
