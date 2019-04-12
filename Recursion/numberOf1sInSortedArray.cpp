#include <iostream>
using namespace std;
int numberOf1sInSortedArray(int A[],int n){
	static int i=0;
		if(A[n-1]!=0){
			i++;
			numberOf1sInSortedArray(A,n-1);
		}
		
		
	return i;
}
int main(int argc, char const *argv[])
{
	int A[]={0,0,0,0,1,1,1,1,1,1,1};
	int n=sizeof(A)/sizeof(A[0]);
	cout<<numberOf1sInSortedArray(A,n);
	return 0;
}