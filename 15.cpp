/*Problem: Lattice paths in 20 X 20 grids
Author: Kaushik Raghavan
Source: projecteuler.net*/

#include <iostream>
#include <cmath>

using namespace std;

int arr[40];

int isprime(long int a)
{
        int checkupto=sqrt(a);
        for(int i=2; i<=checkupto; i++)
                if((a%i)==0)
                        return 0;
        return 1;
}

void find_divisor(long int k, int position)
{
        int temp=k;
        int i;
        int count1=1, count2;
        for(i=2; i<=k; i++)
        {
                if(isprime(i))
                {
                        count2=0;
                        while(k%i==0)
                        {
                                k=k/i;
                                count2++;
                        }
			if(position==1)
				arr[i]+=count2;
			else
				arr[i]-=count2;
                }
        }
}


int main()
{
	int i;
	
	for(i=0; i<40; i++)
		arr[i]=0;

	for(i=40; i>1; i--)
		find_divisor(i,1);	
	for(i=20; i>1; i--)
		find_divisor(i,0);	
	for(i=20; i>1; i--)
		find_divisor(i,0);
	long int prod=1;
	for(i=0; i<40; i++)
	{
		if(arr[i])
		{
			for(int k=0; k<arr[i]; k++)
				prod=prod*i;
		}
	}	
	cout<<prod;
	return 0;
}
