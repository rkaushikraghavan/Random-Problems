/*Problem: Find the largest palindrome made from multiplying two 3-digit numbers
Author: Kaushik Raghavan R*/

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cmath>

using namespace std;

int findlen(int a)
{
	int j=0;
	for(int i=1; a/i>0; i=i*10)
		j++;
	return j;
}

int ispalim(int a, int max)
{
	int temp=a;
	string s="", s2="";
	while(a)
	{
		char c=(a%10)+48;
		s=s+c;
		a=a/10;
	}
	int len=findlen(temp);
	while(temp)
	{
		char c=(temp/pow(10,len-1))+48;
		s2=s2+c;
		int b=pow(10,len-1);
		temp=temp%b;
		len--;
	}
	if(s==s2)
	{
		if(atoi(s.c_str())>max)
			max=atoi(s.c_str());
	}
	return max;
}

int main()
{
	int max=0;
	for(int i=999; i>99; i--)
		for(int j=999; j>99; j--)
			max=ispalim(i*j, max);
	cout<<max;
	return 0;
}
