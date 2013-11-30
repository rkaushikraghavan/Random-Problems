/*Problem: Find sum of all primes less than 2 million
Author: Kaushik Raghavan R
Source: projecteuler.net*/

#include <iostream>
#include <cmath>

using namespace std;

long int isprime(int a)
{
        int checkupto=sqrt(a);
        for(int i=2; i<checkupto+1; i++)
                if((a%i)==0)
                        return 0;
        return a;
}

int main()
{
	int i=2000000;
	long int sum=0;
	while(i>1)
	{
		sum+=isprime(i);
		i--;
	}
	cout<<sum<<"\n";
}
