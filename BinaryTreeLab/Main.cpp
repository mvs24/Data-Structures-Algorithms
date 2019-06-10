#include <iostream>
#include <string>
#include "BinaryTree.cpp"
using namespace std;
int main(void)
{

    PemeKerkimi *pema;
    NyjePeme *nyjeBosh;
    // inicializimi
    pema = new PemeKerkimi();
    // Shtimi sipas renditjes
    // 8, 4, 12, 2, 6, 10, 14, 1, 3, 5, 7, 9, 11, 13, 15
    // pese nyjet e para shtohen me Insert1(), pjesa tjeter me Insert2()
    nyjeBosh = new NyjePeme();
    nyjeBosh->Key = 8;
    nyjeBosh->left = nyjeBosh->right = NULL;
    pema->Insert(nyjeBosh);
    nyjeBosh = new NyjePeme();
    nyjeBosh->Key = 4;
    nyjeBosh->left = nyjeBosh->right = NULL;
    pema->Insert(nyjeBosh);
    nyjeBosh = new NyjePeme();
    nyjeBosh->Key = 12;
    nyjeBosh->left = nyjeBosh->right = NULL;
    pema->Insert(nyjeBosh);
    nyjeBosh = new NyjePeme();
    nyjeBosh->Key = 2;
    nyjeBosh->left = nyjeBosh->right = NULL;
    pema->Insert(nyjeBosh);
    nyjeBosh = new NyjePeme();
    nyjeBosh->Key = 6;
    nyjeBosh->left = nyjeBosh->right = NULL;
    pema->Insert(nyjeBosh);
    pema->Insert(10);
    pema->Insert(14);
    pema->Insert(1);
    pema->Insert(3);
    pema->Insert(5);
    pema->Insert(7);
    pema->Insert(9);
    pema->Insert(11);
    pema->Insert(13);
    pema->Insert(15);

    cout << "Nyjet u shtuan\n";
    cout << "-----------------------------------------------------\n";
    pema->Print();
    cout << "-----------------------------------------------------\n";
    cout << "Testim i funksionit te kerkimit\n";
    nyjeBosh = pema->Kerko(13);




    if (nyjeBosh != NULL)
    {
        pema->PrintNyje(nyjeBosh);
        delete nyjeBosh; //nyjeBosh eshte dublikate e nyjes ne peme prandaj duhet
    }
    else
        cout << "Elementi nuk gjendet\n";
    nyjeBosh = pema->Kerko(6);
    if (nyjeBosh != NULL)
    {
        pema->PrintNyje(nyjeBosh);
        delete nyjeBosh;
    }
    else
        cout << "Elementi nuk gjendet\n";
    nyjeBosh = pema->Kerko(1);
    if (nyjeBosh != NULL)

    {
        pema->PrintNyje(nyjeBosh);
        delete nyjeBosh;
    }
    else
        cout << "Elementi nuk gjendet\n";
    nyjeBosh = pema->Kerko(25); //ky celes nuk ndodhet ne peme
    if (nyjeBosh != NULL)
    {
        pema->PrintNyje(nyjeBosh);
        delete nyjeBosh;
    }
    else
        cout << "Elementi nuk gjendet\n";
    cout << "-----------------------------------------------------\n";
    cout << "Testimi i funksionit te fshirje per te gjitha rastet\n";
    cout << "-----------------------------------------------------\n";
    cout << "Fshirje e nje gjetheje.\n";
    pema->Delete(7);
    pema->Print();
    cout << "-----------------------------------------------------\n";
    cout << "Fshirje e nje nyjeje me 2 femije.\n";
    pema->Delete(12);
    pema->Print();
    cout << "-----------------------------------------------------\n";
    cout << "Fshirje e nje nyjeje me 1 femije.\n";
    pema->Delete(6);
    pema->Print();
    cout << "-----------------------------------------------------\n";
    cout << "Fshirja e nje nyjeje qe nuk ndodhet ne peme.\n";
    pema->Delete(7);
    pema->Print();
    cout << "-----------------------------------------------------\n";
    cout << "Fshirja e rrenjes\n";
    pema->Delete(8);
    pema->Print();
    cout << "-----------------------------------------------------\n";

    cout<<"-----------------------------VEPRIMET E MIA----------------------------------"<<endl;
    
   // pema->findMax();
    // pema->showSmallest(1);
    pema->numri();

    return 0;
}