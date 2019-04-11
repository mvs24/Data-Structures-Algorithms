#include <iostream>
using namespace std;
float power(float a,float b){
	
	if(b>=0){
		if(b==0){
			return 1;
		}
		if(b==1){
		return a;
	    }else{
		return power(a,b-1)*a;
	    }
	}
	else{
		float result;
		if(b==-1){
			 result=1/a;
		}else{
			 result=power(a,b+1)*(1/a);
		}
		return result;
	}
}
int main(int argc, char const *argv[])
{

	cout<<power(3,-7);
	return 0;
}