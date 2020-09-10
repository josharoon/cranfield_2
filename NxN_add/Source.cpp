#include <iostream>
#include <math.h>
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
	vector<vector<double>> vec(n);
	
	cout << "\n input vector \n";
	for(int row = 0; row < n; row++)
	{
		cout << " input row " << row << " : " << row;
		for (int col = 0; col << n; col++)
		{
			cout << "col " << col << " : ";
			cin >> vec[row][col];
		}
		

	}

	cout << "\n input vector = \n";
	for (int row = 0; row < n; row++)
	{
		cout << "\n ";
		cout << " input row " << row << " : " << row;
		for (int col = 0; col << n; col++)
		{
			cout << "col " << col << " : ";
			cin >> vec[row][col];
		}


	}
	