#include <iostream>
using namespace std;
void findUncommon(int A[],int n,int B[],int m){
	int i=0,j=0;
	while(i<n && j<m){
		if(A[i]>B[j]){
			cout<<A[i]<<endl;
			i++;
		}
		else if(B[j]>A[i]){
			cout<<B[j]<<endl;
			j++;
		}
		else{
			i++;
			j++;
		}
	}
	for(;i<n;i++){
		cout<<A[i]<<endl;
	}
	for(;j<m;j++){
		cout<<B[j]<<endl;
	}
}
int main(int argc, char const *argv[])
{
	int A[]={10,9,7,6,4,3};
	int B[]={8,6,5,4,1};

	int n=sizeof(A)/sizeof(A[0]);
	int m=sizeof(B)/sizeof(B[0]);

	findUncommon(A,n,B,m);
	return 0;
}