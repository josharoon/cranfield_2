#include <iostream>
//#include <math.h>
#include <vector>
using namespace std;

double mag(vector<double> input);
vector<double> unit_v(vector<double> input);
vector <vector<double>>  dot_p(vector<double> v_1, vector<double> v_2);

int main()
{
	int n;


	cout << "\n input vector size (n*n)";
	cin >> n;
	vector<vector<double>> vec(n, vector<double>(n));

	cout << "\n input vector \n";
	for (int row = 0; row < n; row++)
	{
		

		for (int col = 0; col < n; col++)
		{
			cout << " input row " << row << " : " << row << " col " << col << " : ";
			cin >> vec[row][col];

		}
		
		
		


	}

	for (int row = 0; row < n; row++)
	{
		cout << "\n";
		for (int col = 0; col < n; col++)
			cout << vec[row][col] << " ";
	}

	
}
