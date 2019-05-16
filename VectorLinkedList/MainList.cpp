#include <iostream>
#include "List.cpp"
using namespace std;
int main()
{
    List_Vektor<int> list1, list2;
    List_Vektor<int>::position iter;
    int x;
    /* shtimi i tre elementeve ne list1 */
    x = 1;
    
    list1.insert(x, list1.begin());
    x = 2;
    list1.insert(x, list1.begin());
    x = 3;
    list1.insert(x, list1.begin());
    x = 4;
    list1.insert(x, list1.begin());
    list1.insert(4, list1.begin());
    list1.insert(7, list1.begin());
    list1.insert(1, list1.begin());

    // list1.insert(2, list1.begin());


    /* printimi i permbajtjes se listes */
    cout << "list1=";
    list1.print();
    /* perdorimi operatorin = per te barazuar dy listat
*/
    list2 = list1;
    /* afishimi i list2 */
    cout << "Pasi bejme list2=list1, list2=";
    list2.print();
    /*krahasimi per barazi i list1 dhe list2 */
    if (list1 == list2)

        cout << "list1 == list2" << endl;

    else

        cout << "list1 != list2" << endl;
    /* fshirja e elementit te pare nga list2 */
    list2.erase(list2.begin());
    /* afishimi i list2 */
    cout << "Pas fshirjes se elementit te pare, list2=";
    list2.print();
    /* krahasimi per barazi i list1 dhe list2 */
    if (list1 == list2)

        cout << "list1 == list2" << endl;

    else

        cout << "list1 != list2" << endl;


    // list2.duplicate();
    // list1.duplicateList(list2);
    int n,y;
    cout<<"Jep numrin e elementeve te listes se re";
    cin>>n;

    List_Vektor<int> list3;

    for (int i = 0; i < n; ++i)
    {
        cin>>y;
        list3.insert(y, list3.begin());
    }
      // list3.insert(5, list3.begin());
      // list3.insert(4, list3.begin());
      // list3.insert(4, list3.begin());
      // list3.insert(8, list3.begin());
      // list3.insert(1, list3.begin());
      // list1.print();
      // list3.print();

      list1.duplicateList(list3);

      List_Vektor<int> ConcatList=list1.concat(list3);
      // ConcatList.print();
    
}
