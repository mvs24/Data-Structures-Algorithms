#include <iostream>
using namespace std;
int reverseArray(int A[],int n){
	int i=0,j=n-1;
	while(i<j){
		int temp=A[i];
		A[i]=A[j];
		A[j]=temp;
		i++;
		j--;
	}
	return A[n];
}
int main(int argc, char const *argv[])
{
	int A[]={3,-2,-1,4,-1};
	int n=sizeof(A)/sizeof(A[0]);
	reverseArray(A,n);
	for(int i=0;i<n;i++){
		cout<<A[i]<<endl;
	}
	return 0;
}