#include <iostream>
using namespace std;
int smallestMissingElementInSortedArray(int A[],int n){
	int k=0;
	if(A[0]!=0){
		return 0;
	}else{
		for (int i = 0; i < n; ++i)
		{
			if(A[i+1]-A[i]>1){
				k=A[i]+1;
				break;
			}
		}
	}
	
		if(k==0){
			return A[n-1]+1;
		}
	return k;
}
int main(int argc, char const *argv[])
{
	int A[]={1,1,2,3,4,5,7,8,10};
	int n=sizeof(A)/sizeof(A[0]);
	cout<<smallestMissingElementInSortedArray(A,n);
	return 0;
}
