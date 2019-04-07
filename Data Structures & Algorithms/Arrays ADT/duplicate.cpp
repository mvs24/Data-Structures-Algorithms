#include <iostream>
using namespace std;
void duplicate(int A[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(A[i]==A[j]){
				cout<<A[i]<<"\n";
			}
		}
	}
	
}
int main(int argc, char const *argv[])
{
	int A[]={5,6,-5,5,3,5,3,-2,0};
	int n=sizeof(A)/sizeof(A[0]);
	duplicate(A,n);
	return 0;
}