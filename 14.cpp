/*Problem: Longest Collatz sequence with starting number less than a million
Author: Kaushik Raghavan R
Source: projecteuler.net
*/

#include <iostream>

using namespace std;

int main()
{
	long int max=0;
	int count, maxcount;
	long int i;
	for(i=1; i<=1000000; i++)
	{
		long int temp=i;
		count=0;
		while(temp!=1)
		{
			if(temp%2==0)
				temp=temp/2;
			else
				temp=3*temp+1;
			count++;
		}
		if(count>maxcount)
		{
			maxcount=count;
			max=i;
		}
	}	
	cout<<max;
	return 0;
}
