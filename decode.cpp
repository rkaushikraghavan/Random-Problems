/*
Author: R. Kaushik Raghavan
Algorithm followed
------------------
1. Read input line by line
2. For every line:
	1. If the first bit is zero go to next input line
	2. Have an array of string length size
	3. If any bit is zero attach it to the previous bit by multiplying it by 10 (2 followed by 0 becomes 20), IF prev bit is less than 3.
	P.S. Don't need to push the whole array. We can just omit zero bits when we calculate.
	4. Have another array of size new length(after eliminating zeroes) called total
	5. As you access every bit in the array, keep a count of valid possible sequences till that bit. 
	6. Output the last index of this array.

HINT: If you take the 1111111111 example, you will see that it follows a fibonacci sequence. 89 is the 10th term of 1,2,3,5,8,...,89.
So basically whenever you see a 1 or a 2, add total[i-1] and total[i-2] to get the value.
Complexity: O(n)
*/


#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>

using namespace std;

int main()
{
	string seq;
	int i; 						
	ifstream f1;
	f1.open("decodeinput.txt");
	f1>>seq;
	while(seq!="EOF")
	{
		while(seq[0]==48)
		{
			f1>>seq;
			if(seq=="EOF"){
				cout<<"\n";
				exit(0);
			}
		}
		int len=strlen(seq.c_str());
		int a[len],index=0;
		for(i=0;i<len;i++)
		{
			if(seq[i]==48)					
			{
				if(a[index-1]<3)
					a[index-1]=a[index-1]*10;
				else{
					f1>>seq;
					continue;
				}
			}
			else{
				a[index]=seq[i]-48;
				index++;
			}
		}
		int total[index];
		cout<<"\n";
		total[0]=1;
		if(a[0]==1 || (a[0]==2 && a[1]<7))
			total[1]=2;
		else
			total[1]=0;
		for(i=2;i<index;i++)
		{	
			if(a[i]==0)
				continue;
			total[i]=total[i-1];
			if(a[i-1]==1)
				total[i]+=total[i-2];
			if(a[i-1]==2 && a[i]<7)
				total[i]+=total[i-2];
		}
		cout<<total[index-1];
		f1>>seq;
	}
	cout<<"\n";
	return 0;
}
