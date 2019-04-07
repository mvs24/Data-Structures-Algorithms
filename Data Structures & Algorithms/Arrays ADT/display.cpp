#include <iostream>
using namespace std;
int linearSearch(int A[],int n,int element){
	int counter=0;
	for(int i=0;i<n;i++){
		if(A[i]==element){
			counter++;
		}
	} 
	return counter;
}

int main()
{
	int A[]={5,6,-5,5,3,5,3,-2,0};
	int n=sizeof(A)/sizeof(A[0]);
	
	if(linearSearch(A,n,3)>0){
		cout<<"yes";
	}else{
		cout<<"no";
	}
	return 0;
}