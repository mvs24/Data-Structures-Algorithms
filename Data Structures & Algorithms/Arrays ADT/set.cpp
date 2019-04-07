#include <iostream>
using namespace std;
void setElement(int A[],int index,int element,int n){
	if(index>=0 && index<n){
		A[index]=element;
	}
}
int main(int argc, char const *argv[])
{
	int A[]={3,-2,-1,4,-1};
	int n=sizeof(A)/sizeof(A[0]);
	setElement(A,1,99,n);
	for(int i=0;i<n;i++){
		cout<<A[i]<<endl;
	}
	return 0;
}