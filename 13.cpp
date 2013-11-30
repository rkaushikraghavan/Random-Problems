/* Problem: Find the first 10 digits of the sum of all numbers in 13input.txt
Author: Kaushik Raghavan R
Source: projecteuler.net
*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream f1("13input.txt");
	int i,j;
	string num[100];
	for(i=0; i<100; i++)
		f1>>num[i];

	int sum[50]={0};
	for(i=0; i<50; i++)
		for(j=0; j<100; j++)
			sum[i]+=(int)num[j][i]-48;
	
	int overflow;
	for(i=48;i>=0;i--)
	{
		sum[i]+=(sum[i+1]/10);
		sum[i+1]=sum[i+1]%10;
	}

	for(i=0; i<50; i++)
		cout<<sum[i];
	return 0;
}
