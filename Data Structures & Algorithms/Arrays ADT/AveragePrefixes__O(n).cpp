#include <iostream>
using namespace std;
void averagePrefixes(int P[], int &n){
	for (int i = 0; i < n-1; ++i)
	{
		int sum = P[i]+P[i+1];
		P[i]=sum/2;
	}
		n--;
}
int main(int argc, char const *argv[])
{
	int P[]={10,2,4,8,10,2,8};
	int length=sizeof(P)/sizeof(P[0]);
	averagePrefixes(P,length);
	for (int i = 0; i < length; ++i)
	{
		cout<<P[i]<<endl;
	}


	return 0;
}
