#include <iostream>
using namespace std;
int duplicateElement(int A[],int n){
	int counter=0;
	int element;
	
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(A[i]==A[j]){
				element=A[i];
				counter++;
			}
		}
	}
	if(counter>0){
		return element;
	}
}
int main(int argc, char const *argv[])
{
	int A[]={1,2,3,4,90};
	int n=sizeof(A)/sizeof(A[0]);
	cout<<duplicateElement(A,n);
	return 0;
}