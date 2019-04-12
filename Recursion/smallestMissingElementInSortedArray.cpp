#include <iostream>
using namespace std;
int smallestMissingElementInSortedArray(int A[],int n){
	static int i=0;
	if(A[0]!=0){
		return 0;
	}
	if(n==0){
		return A[i-1]+1;
	}
	if(A[i+1]-A[i]>1){
		return A[i]+1;
	}else{
		i++;
		return smallestMissingElementInSortedArray(A,n-1);
	}
}
int main(int argc, char const *argv[])
{	
	int k=0;
	int A[]={0,1,2,3,4,5,6,7,8,9};
	int n=sizeof(A)/sizeof(A[0]);
	cout<<smallestMissingElementInSortedArray(A,n);
	return 0;
}
