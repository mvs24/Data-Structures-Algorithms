#include <iostream>
using namespace std;
int largestDivisor(int num1,int num2){
	static int num3=num2;
	if(num2==1){
		return 1;
	}else{

		if(num1%num2==0 && num3%num2==0){
			return num2;
		}else{
			return largestDivisor(num1,num2-1);
		}
	}
}
int main(int argc, char const *argv[])
{
	cout<<largestDivisor(42,12);	
	return 0;
}