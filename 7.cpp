/*Problem: Find the 10001st prime number
Author: Kaushik Raghavan R
Source: projecteuler.net
*/

#include <iostream>
#include <cmath>

using namespace std;

int isprime(long int a)
{
        int checkupto=sqrt(a);
        for(int i=2; i<checkupto+1; i++)
                if((a%i)==0)
                        return i;
        return 1;
}

int main()
{
	int i=2,count=0;
	while(1)
	{
		int check=isprime(i);
		if(check==1)
			count++;
		if(count==10001)
			break;	
		i++;
	}	
	cout<<i;
	return 0;
}
