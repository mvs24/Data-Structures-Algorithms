#include <iostream>
using namespace std;
int largestDivisor(int num1,int num2){
	if(num1>num2){
		int largest=-99999;
	if(num1%num2==0){
		return num2;
	}else{
		for(int i=1;i<num2;i++){
			if(num1%i==0 && num2%i==0){
				if(i>largest){
					largest=i;
				}
			}
		}
	}
	return largest;
	}
	else{
	int largest=-9999999;
	if(num2%num1==0){
		return num1;
	}else{
		for(int i=1;i<num1;i++){
			if(num1%i==0 && num2%i==0){
				if(i>largest){
					largest=i;
				}
			}
		}
	return largest;
}
	
	}
	
}
int main(int argc, char const *argv[])
{
	cout<<largestDivisor(42,12);	
	return 0;
}