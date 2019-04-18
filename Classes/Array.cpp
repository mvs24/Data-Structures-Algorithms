#include <iostream>
#include "Array.h"
using namespace std;
	Array::Array(int numri){
		this->n=numri;
	}
 bool Array::member(int A[],int k){
 	for (int i = 0; i < n; ++i)
 	{
 		if(A[i]==k){
 			return true;
 		}
 	}
 	return false;
 }

	int Array::greaterThan(int A[],int k){
		int counter=0;
		for (int i = 0; i < n; ++i)
		{
			if (A[i]>k)
			{
				counter++;
			}
		}
		return counter;
	}
	

	void Array::remove(int A[],int k){
		for (int i = 0; i <n-1; ++i)
		{
			if (A[i]==k)
			{
				for (; i <n-1 ; ++i)
				{
					A[i]=A[i+1];
				}
			
			}
		}
	}

	bool Array::ordering(int A[]){
		for (int i = 0; i < n-1; ++i)
		{
			if(A[i]>A[i+1]){
				 return false;
			}
		}
		return true;
	}

	void Array::reverse(int A[]){
		int i=0,j=n-1;
		while(i<=j){
			int temp=A[i];
			A[i]=A[j];
			A[j]=temp;
			i++;
			j--;
		}
	}

	int Array::smallestMissingElementInSortedArray(int A[]){
	int k=0;
	if(A[0]!=0){
		return 0;
	}else{
		for (int i = 0; i < n; ++i)
		{
			if(A[i+1]-A[i]>1){
				k=A[i]+1;
				break;
			}
		}
	}
		if(k==0){
			return A[n-1]+1;
		}
	
	return k;
}

int max(int x,int y){
	return x>y ? x:y;
}
int Array::maxDifference(int A[]){
	int dif=-9999999;
	for (int i=0; i<n-1;i++){
		for (int j=i+1;j<n;j++){
				dif=max(dif,A[j]-A[i]);
		}
	}
	return dif;
}


