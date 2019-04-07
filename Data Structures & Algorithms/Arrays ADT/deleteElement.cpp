#include <iostream>
using namespace std;
void deleteElement(int P[],int index,int &length){
	for(int i=index;i<length-1;i++){
		P[i]=P[i+1];
	}
	length--;

}
int main(int argc, char const *argv[])
{
	int P[]={2,3,4,5,6,7,8,9};
	int length=sizeof(P)/sizeof(P[0]);
	deleteElement(P,5,length);
	for(int i=0;i<length;i++){
		cout<<P[i]<<"\n";
	}
	return 0;
}

