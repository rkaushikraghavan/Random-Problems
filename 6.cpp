/*Problem: Find (1^2 + 2^2 + .... + 100^2) - (1+2+..+100)^2
Author: Kaushik Raghavan R
Source: projecteuler.net
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	long int firstterm=100*101*201/6;
	long int secondterm=pow(50*101,2);
	cout<<secondterm-firstterm;
}
