#include "List.cpp"
#include <iostream>
using namespace std;
int main(){
Linked_list<int> list1, list2;
Linked_list<int>::position iter;
int x;
/* shtohen kater elementet ne listen list1 */
x = 1;
list1.insert(x, list1.begin());
x = 2;
list1.insert(x, list1.begin());
x = 3;
list1.insert(x, list1.begin());
x = 4;
list1.insert(x, list1.begin());
/* afishimi i elementeve te list1 */
cout << "list1=" ;
cout << list1;
list2 = list1;
cout <<endl<< "Pasi list2=list1, list2="; cout << list2;
/* perdoret operatori i bere overload == */
	if (list1 == list2){
		cout << "list1 == list2" << endl;
	}else{
		cout << "list1 != list2" << endl;
	}
list2.erase(list2.begin());
cout << "Pas fshirjes se elementit te pare, list2="; cout << list2;
/* perdoret operatori i bere overload == */
	if (list1 == list2){
		cout << "list1 == list2" << endl;
	}else{
	cout << "list1 != list2" << endl;
	}

	// list1.ciftet(list2);
	// cout<<list1.isSorted();
	// list1.printPozicione();
	// cout<<list1;
	Linked_list<int> list3;
	list3.insert(1, list3.begin());
	list3.insert(5, list3.begin());
	list3.insert(6, list3.begin());
	list3.insert(3, list3.begin());
	list3.insert(1, list3.begin());

	
	
	cout<<list3.palindrome();
}