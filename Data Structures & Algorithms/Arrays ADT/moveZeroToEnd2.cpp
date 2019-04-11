#include <iostream>
using namespace std;
void reorder(int A[], int n)
{
	int k = 0;
	for (int i = 0; i < n; i++){
		if (A[i] != 0){
			A[k] = A[i];
			k++;
		}
	}
	for (int i = k; i < n; i++){
		A[i] = 0;
	}
}

int main()
{
	int A[] = {3,2,0,0,7,8,9,0,1,0};
	int n = sizeof(A) / sizeof(A[0]);

	reorder(A, n);

	for (int i = 0; i < n; i++){
		cout<<A[i]<<endl;
	}

	return 0;
}