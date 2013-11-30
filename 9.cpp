/*Problem: There exists exactly one Pythagorean triplet for which a + b + c = 1000. Find the product abc.
Author: Kaushik Raghavan R
Source: projecteuler.net
*/

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std; 

int main()
{
	int a,b,c;
	for(int k=499; k>0; k--)
	for(int i=500-k; i<499; i++)
	for(int j=k; j>0; j--)
		if(i+j+k==1000)		
			if(pow(i,2)+pow(j,2)==pow(k,2))
			{
				cout<<i*j*k;
				exit(0);
			}
	return 0;
}
