/*Problem: Write a program to find the smallest positive number divisible (with no remainder) by all numbers in the range 1-20.
Author: Kaushik Raghavan R
Source: projecteuler.net
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	//Basically LCM of first twenty numbers

	//1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20
	//3,4,6,7,8,9,11,12,13,14,15,16,17,18,19,20		If its divisible by 20, it is divisible by 10,5,2,1
	//4,7,8,11,12,13,14,15,16,17,18,19,20
	//7,11,12,13,14,15,16,17,18,19,20
	//11,12,13,14,15,16,17,18,19,20

	//Taking the maximum number of the primes required, we get: 2,2,2,2,3,3,5,7,11,13,17,19
	long int a=2*2*2*2*3*3*5*7*11*13*17*19;
	cout<<a;
	return 0;
}
