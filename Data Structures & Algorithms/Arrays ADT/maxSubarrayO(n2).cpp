#include <iostream>
using namespace std;
int MaxLengthSum(int A[],int n){
	// int counter=0;
	// for(int i=0;i<n;i++){
	// 	if(A[i]<0){
	// 		counter++;
	// 	}
	// }
	// if(counter==n){

	// }
 int max=-99999;
	for(int i=0;i<n;i++){
		int sum=0;
		for(int j=i;j<n;j++){
			sum=sum+A[j];
			if(sum>max){
				max=sum;
			}
		}
	}
	return max;
}
int main(int argc, char const *argv[])
{
	int A[]={3,-2,-1,4,-1,8,-15};
	int n=sizeof(A)/sizeof(A[0]);
	cout<<MaxLengthSum(A,n);
	return 0;
}
// O(n2)