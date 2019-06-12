#include <iostream>
using namespace std;
void insertInHeap(int A[], int n) {
	int temp = A[n];
	int i = n;
	while(i > 1 && temp > A[i/2]){
		A[i] = A[i/2];
		i=i/2;
	}
	A[i] = temp;
}
void deleteRoot(int A[], int n) {
	int x = A[n];
	int i=1, j=2*i;
	while(j<n-1){
		if(A[j+1]>A[j]){
			j=j+1;
		}
		if(A[i]<A[j]){
			swap(A[i], A[j]);
			i=j;
			j=2*j;
		}else
			break;
	}
	A[n] = x;
}
int main(int argc, char const *argv[])
{
	int A[] = {0,10,20,30,25,5,40,35};
	int n=sizeof(A)/sizeof(A[0]);
	for (int i = 2; i <= n-1; ++i)
	{
		insertInHeap(A,i);
	}
	
	return 0;
}