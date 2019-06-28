#include <iostream>
using namespace std;
int smallestMissingElementInSortedArray(int A[],int n){
	int k=0;
	if(A[0]!=0){
		return 0;
	}
	int i=0;
	while(A[k+1]-A[k]==1){
		i++;
		k++;
	}
	
	return A[i]+1
	;
}
int main(int argc, char const *argv[])
{
	int A[]={0,1,3,4,5,7};
	int n=sizeof(A)/sizeof(A[0]);
	cout<<smallestMissingElementInSortedArray(A,n);
	return 0;
}
