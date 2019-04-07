#include <iostream>
using namespace std;

int binarySearch(int A[],int l,int h,int element){
	while(l<=h){
	int mid=(l+h)/2;
		if(element>A[mid]){
			l=mid+1;
		}else if(element<A[mid]){
			h=mid-1;
		}else if(element==A[mid]){
			return mid;
		}
	}
	return -1;
	
}

int main(int argc, char const *argv[])
{
	int A[]={1,2,3,4,5,6,7,9,10,11};
	int n=sizeof(A)/sizeof(A[0]);
	cout<<binarySearch(A,1,9,2);
	return 0;
}