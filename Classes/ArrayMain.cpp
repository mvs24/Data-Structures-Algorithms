#include <iostream>
#include "Array.cpp"
using namespace std;
int main(int argc, char const *argv[])
{
	int A[]={1,2,3,4,5,6,8,9};
	int n=sizeof(A)/sizeof(A[0]);
	Array array(n);
	// cout<<array.member(A,5);
	// cout<<array.greaterThan(A,3);
	// cout<<array.largest(A).index;
	// array.remove(A,5);
	// for (int i = 0; i < n; ++i)
	// {
	// 	cout<<A[i]<<endl;
	// }
	// if(array.ordering(A)==1){
	// 	cout<<"I renditur ne rend rrites";
	// }else{
	// 	cout<<"Jo i renditur ne rend rrites";
	// 
	// array.reverse(A);
	// for (int i = 0; i < n; ++i)
	// {
	// 	cout<<A[i]<<endl;
	// }
	// cout<<array.smallestMissingElementInSortedArray(A);
	cout<<array.maxDifference(A);
	return 0;
}