#include <bits/stdc++.h>
#include <vector>
#define N 4
#define M 4
using namespace std;

// To calculate min path in matrix
int minPathSum(vector<vector<int>>& grid) {
	int n = grid.size();
	int m = grid[0].size();
	for(int i = m - 2; i>= 0; i--)
	{
		grid[n - 1][i] += grid[n - 1][i + 1]; //prefix sum last row
	}
	for(int i = n - 2; i>= 0; i--)
	{
		grid[i][m - 1] += grid[i + 1][m - 1]; //prefix sum last colum
	}
	for(int i = n - 2; i >= 0; i--)
	{
		for(int j = m - 2; j >= 0; j--)
		{
			grid[i][j] = min(grid[i + 1][j] , grid[i][j + 1]) + grid[i][j];
			//add min of (i + 1)(j) , (i)(j + 1) + (i , j)
			cout << grid[i][j] << " ";
		}
		cout << endl;
	}
	return grid[0][0]; //return (0 , 0);
}


// Driver program to check findMaxPath
int main()
{
     
    vector<vector<int>> mat1 = { { 1, 3, 2, INT_MAX},
                    { 4, 3, 1, INT_MAX },
                    { 5, 6, 1, INT_MAX },
                    { INT_MAX, INT_MAX, INT_MAX, INT_MAX } };
             
    cout << minPathSum(mat1) << endl;
    return 0;
}

