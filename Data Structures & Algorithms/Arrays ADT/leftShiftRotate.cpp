#include <iostream>
using namespace std;
void leftShiftRotate(int A[],int n){
	int x=A[0];
	for(int i=0;i<n-1;i++){

		A[i]=A[i+1];
	}
	A[n-1]=x;
}

int main(int argc, char const *argv[])
{
	int P[]={2,3,4,5};
	int length=sizeof(P)/sizeof(P[0]);
	leftShiftRotate(P,length);
	// 3 4 5 2
	for(int i=0;i<length;i++){
		cout<<P[i]<<"\n";
	}
	return 0;
}