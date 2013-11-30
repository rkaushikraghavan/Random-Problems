/*Problem: Find the largest prime factor of 600851475143
Author: Kaushik Raghavan R*/

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int isprime(long int a)
{
	int checkupto=sqrt(a);
	for(int i=2; i<=checkupto; i++)
		if((a%i)==0)
			return i;
	return 1;
}

int main()
{
	long int a=600851475143;
	int j=1;
	for(long int i=a; i>=2; i=a/j)
	{
		i=a/j;
		j++;
		while(a%j!=0)
			j++;
		if(isprime(j)==1)
			cout<<j<<" ";
	}
	return 0;
}
