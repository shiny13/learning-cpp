#include<iostream>
using namespace std;

int main () {
	int n=0, k=0;
	cout << "Enter the number of steps: ";
	cin >> n;
	cout << "Enter the number of jumps: ";
	cin >> k;
	cout << endl;
	if (n <= 1 || k <= 1) {
		cout << "Please enter a number more than 1" << endl;
	}
	
	int f[n+1][k+1];
	f[0][0] = 0;
	f[0][1] = 1;
	f[1][0] = 1;
	f[1][1] = 1;
		
	for (int j=1; j<=k; j++) {
		for (int i=2; i<=n; i++) {
			f[i][j] = f[i-1][j] + f[i-2][j];
			cout << f[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
