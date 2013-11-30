/*Problem: Find the sum of even valued terms of all fibo numbers not exceeding 4 million
Author: Kaushik Raghavan R*/

#include <iostream>
#include <cstdlib>

using namespace std;

void f(int a, int b)
{
	static int sum=0;
	if(b>4000000)
	{
		cout<<sum;
		exit(0);	
	}
	if(b%2==0)
	{
		cout<<b<<" ";
		sum+=b;
	}
	f(b,a+b);
}

int main()
{
	f(1,2);
	return 0;
}
