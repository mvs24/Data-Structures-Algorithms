#include <iostream>
using namespace std;
float power(float a,float b){
	float result=1;
	if(b==0) return 1;
	if(b>0){
		for(int i=1;i<=b;i++){
		 result*=a;
	    }
	}else{
		for(int i=-1;i>=b;i--){
			 result*=1/a;
		}
	}
	return result;
}
int main(int argc, char const *argv[])
{
	cout<<power(3,-4);	
	return 0;
}