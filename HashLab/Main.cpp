#include <iostream>
#include <iostream>
#include "Hash.h"
using namespace std;
int main()
{
    HashKuadratik<int> h1;
    HashKuadratik<int> h2;
    const int NUMS = 4000;
    const int GAP = 37;
    int i;
    for (i = GAP; i != 0; i = (i + GAP) % NUMS)
        h1.insert(i);
    h2 = h1;
    for (i = 1; i < NUMS; i += 2)
        h2.remove(i);
    for (i = 2; i < NUMS; i += 2)
        if (!h2.contains(i))
            cout << "Nuk ndodhet " << i << endl;
    for (i = 1; i < NUMS; i += 2)
    {
        if (h2.contains(i))
            cout << "!!!! " << i << endl;
    }

    h1.show();

    return 0;
}
