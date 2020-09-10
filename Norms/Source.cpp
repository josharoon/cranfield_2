#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

double l_1(vector<double> input);
double l_2(vector<double> input);
double l_3(vector<double> input);


int main() 

{
	int n;
	cout << "\n input vector size : ";
	cin >> n;
	vector<double> vec1(n);

	for (size_t i = 0; i < n; i++)
	{
		cout << "\n input 1st vector " << i << " : ";
		cin >> vec1[i];

	}


	int choice;
	cout << "\n please enter 1 for L1 norm 2 for L2 norm or 3 for L3 norm";
	cin >> choice;

	switch (choice)
	{
	case 1:
		cout << "L1 norm =" << l_1(vec1);
		break;
	case 2:
		cout << "L2 norm =" << l_2(vec1);
		break;
	case 3:
		cout << "L3 norm =" <<  l_3(vec1);
		break;
	}
}

double l_1(vector<double> input)
{
	double sum = 0.0;
	for (size_t i = 0; i < input.size(); i++)

	{
		sum += abs(input[i]) ;
	}
	return sum;
}

double l_2(vector<double> input)
{
	double sum = 0.0;
	for (size_t i = 0; i < input.size(); i++)

	{
		sum += input[i] * input[i];
	}
	return sqrt(sum);
}

double l_3(vector<double> input)
{	
	int n = input.size();
	double inputMax = input[n-1];
	for (unsigned int i = 0; i < input.size(); i++)
		if (input[i] > inputMax)
		{
			inputMax = input[i];
		}
	return inputMax;

}
