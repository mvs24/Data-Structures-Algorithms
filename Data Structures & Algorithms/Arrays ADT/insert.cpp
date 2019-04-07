#include <iostream>
using namespace std;
void insert(int P[],int index,int element,int & length){
	for(int i=length;i>index;i--){
		P[i]=P[i-1];
	}
		P[index]=element;
		length++;
}
int main(int argc, char const *argv[])
{
	int P[10]={2,3,4,5,6,7,8,9};
	int length=sizeof(P)/sizeof(P[0]);
	insert(P,4,123,length);
	for(int i=0;i<sizeof(P)/sizeof(P[0]);i++){
		cout<<P[i]<<"\n";
	}



	return 0;
}
