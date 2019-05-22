#include <iostream> 
#include "Node.h"
using namespace std;
int main(int argc, char const *argv[])
{
	int A[]={2,3,4,8};
	int n=sizeof(A)/sizeof(A[0]);
	LinkedList LLS;
	LLS.create(A,n);
	LLS.display();
	// LLS.insert(99,3);
	LLS.display();
	LLS.insertLast(67);
	LLS.display();
	LLS.insertInSorted(0);
	LLS.display();
	LLS.deleteFirstNode();
	LLS.display();
	// LLS.deleteNodeInGivenPosition(4);
	// LLS.reverseElements();
	// LLS.display();
	// LLS.reverseLinks();
	// LLS.display();
	// LLS.insert(3,6);
	// cout<<LLS.isSorted2();
	LLS.display();
	cout<<LLS.isSorted();
	
	return 0;
} 
