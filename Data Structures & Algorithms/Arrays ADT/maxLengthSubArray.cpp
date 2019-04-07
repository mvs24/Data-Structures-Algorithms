#include <iostream>
using namespace std;
int MaxLengthSum(int A[],int n){
	int counter=0;
	for(int i=0;i<n;i++){
		if(A[i]<0){
			counter++;
		}
	}
	if(counter==n){
		return 0;
	}
 int max=-99999;
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			int sum=0;
			for(int k=i;k<=j;k++){
				sum+=A[k];
				if(sum>max){
					max=sum;
				}

			}
		}
	}
	return max;
}
int main(int argc, char const *argv[])
{
	int A[]={3,-2,-1,4,-1};
	int n=sizeof(A)/sizeof(A[0]);
	cout<<MaxLengthSum(A,n);
	return 0;
}

// O(n3)