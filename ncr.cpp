#include<iostream>

using namespace std;

float CalcCombination(float n, float r)
{
	int i, res;
	if(r > 0)
		return (n/r)*CalcCombination(n-1,r-1);
	else
		return 1;
}

int main()
{
	float n, r;
	int result;
	cout<<"\n\n\tEnter the value of n: ";
	cin>>n;
	cout<<"\tEnter the value of r: ";
	cin>>r;

	result = CalcCombination(n,r);
	cout<<"\The number of possible combinations is: "<<result;
}
