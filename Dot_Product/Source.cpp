#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

double mag(vector<double> input);

int main() 
{
	int n;

	
	cout << "\n input vector size";
	cin >> n;
	vector<double> vec1(n);
	for (size_t i = 0; i < n; i++)
	{
		cout << "\n input v " << i;
		cin >> vec1[i];

	}
	cout << "\n magnitude = " << mag(vec1);
}

double mag(vector<double> input) {

	double sum = 0.0;
	for (size_t i = 0; i < input.size(); i++)
	
	{
				sum += input[i] * input[i];
	}
	return sqrt(sum);
}
