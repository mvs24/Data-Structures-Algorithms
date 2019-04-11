#include <iostream>
using namespace std;
int moveZeroToEnd(int A[],int n){
	int i=0,j=n-1;
	while(i<=j){
		while(A[j]==0){
			j--;
		}
		if(A[i]==0){
			swap(A[i],A[j]);

		}
		i++;
	}
	return A[n];
}
int main(int argc, char const *argv[])
{
	int A[]={5,6,0,5,0,5,3,-2,0,2,0};
	int n=sizeof(A)/sizeof(A[0]);
	moveZeroToEnd(A,n);
	for (int i = 0; i < n; ++i)
	{
		cout<<A[i]<<endl;
	}
	return 0;
}