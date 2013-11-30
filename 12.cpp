/* Problem: Find the first triangular number to have more than 500 divisors
Author: Kaushik Raghavan R
Source: projecteuler.net */

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int isprime(long int a)
{
        int checkupto=sqrt(a);
        for(int i=2; i<=checkupto; i++)
                if((a%i)==0)
                        return 0;
        return 1;
}

void find_divisor(long int k)
{
	int temp=k;
	int i;
	int count1=1, count2;
	for(i=2; i<=k; i++)
	{
		if(isprime(i))
		{
			count2=1;
			while(k%i==0)
			{
				k=k/i;
				count2++;
			}
			count1 = count1 * count2;
		}
	}
	if(count1>=500)
	{
		cout<<temp;
		exit(0);
	}
}

int main()
{
	long int i;
	for(i=1; i; i++)
		find_divisor(i*(i+1)/2);
	return 0;
}
