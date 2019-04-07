#include <iostream>
using namespace std;
bool isArraySorted(int A[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(A[i]>A[j]){
				return false; 
			}
		}
	}
	return true;
}

int main(int argc, char const *argv[])
{
	int P[]={2,3,4,5,6};
	int length=sizeof(P)/sizeof(P[0]);
	if(isArraySorted(P,length)==true){
		cout<<true;
	}
	return 0;
}

// O(n2)