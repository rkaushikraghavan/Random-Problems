/*
Algo:
1. Print n elements of Row 0.

2. Print m-1 elements of Column n-1.
3. Print n-1 elements of Row m-1  (Inverted)
4. Print m-2 elements of Column 0 (Inverted)
5. Print n-2 elements of Row 1
And so on, till m-m or n-n which is earlier.
Points to note:
Last element might be left out. Keep count and print the last element, if needed
*/

#include <iostream>
using namespace std;

int main()
{
	int **a,m,n,i,j,k,l,r=1;
	cout<<"\nEnter m,n:   ";
	cin>>m>>n;
	a=new int*[m];
	for(i=0;i<m;i++)
		a[i]=new int[n];
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			a[i][j]=r++;

	cout<<"\n\nOutput:\n";
	int flag, offset=0,count=0;
	if(m>n)
		flag=n;
	else
		flag=m;

	for(i=0;i<n;i++){
		cout<<a[0][i]<<"\n";
		count++;
	}
	for(i=1;i<flag;i++){
		if(i%2!=0){
			offset++;
			for(j=0+offset;j<m-i+offset;j++){
				cout<<a[j][n-offset]<<"\n";
				count++;
			}
			for(j=n-offset-1;j>i-offset-1;j--){
				cout<<a[m-offset][j]<<"\n";
				count++;
			}
		}
		else{
			for(j=m-1-offset;j>i-offset-1;j--){
				cout<<a[j][offset-1]<<"\n";
				count++;
			}
			for(j=0+offset;j<n-i+offset;j++){
				cout<<a[offset][j]<<"\n";
				count++;
			}
		}
	}
	if(count!=m*n){
		cout<<a[m/2][n/2]<<"\n";
	}
	return 0;
}
