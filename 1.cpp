/* Problem: Find the sum of all multiples of 3 or 5 below 1000
Author: Kaushik Raghavan R*/

#include <iostream>

using namespace std;

int main()
{
	int sum=0;
	for(int i=1; i<1000; i++)
	{
		if(i%3==0 || i%5==0)
			sum+=i;
	}
	cout<<sum;
	return 0;
}
