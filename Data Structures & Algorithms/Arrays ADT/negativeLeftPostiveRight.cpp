#include <iostream>
using namespace std;
void negLPosR(int A[],int n){
	int i=0,j=n-1;
	while(i<j){
		while(A[i]<0){i++;}
		while(A[j]>0){j--;}
		if(i<j){
			swap(A[i],A[j]);
		}
	}

}
int main(int argc, char const *argv[])
{
	int A[]={-2,3,-5,-1,2,3,-4,9,0,-7};
	int n=sizeof(A)/sizeof(A[0]);
	negLPosR(A,n);
	for(int i=0;i<n;i++){
		cout<<A[i]<<"\n";
	}
	return 0;
}