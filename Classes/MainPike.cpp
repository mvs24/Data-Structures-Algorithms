#include <iostream>
#include "Pike.cpp"
using namespace std;
#include <string>


int main(int argc, char const *argv[])
{
	Pike a(3,5);
	Pike b(9.2,5.12);
	string s1;
	cin>>s1;
	cout<<s1;

	
	// cout<<a.getDistance(b);
	
	// if(a.eNjejte(b)==1){
	// 	cout<<"E njete";
	// }else cout<<"Jo e njejte";


	// Pike z=b.krijimi(a);
	// z.getData();

	Pike z=a.krijimi(a);
	z.getData();
	a.getData();


	return 0;
}