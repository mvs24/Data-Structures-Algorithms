#include <iostream>
using namespace std;
bool isArraySorted(int A[],int n){
	for(int i=0;i<n-1;i++){
		if(A[i]>A[i+1]){
			return false;
		}
	}
	return true;
}

int main(int argc, char const *argv[])
{
	int P[]={2,3,4,5,5};
	int length=sizeof(P)/sizeof(P[0]);
	cout<<isArraySorted(P,length);
	return 0;
}

// O(n)