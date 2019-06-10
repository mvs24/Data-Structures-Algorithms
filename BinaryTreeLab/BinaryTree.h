#ifndef PEMEKERKIMI_H
#define PEMEKERKIMI_H
#include <iostream>
using namespace std;
struct NyjePeme
{
    int Key;
    NyjePeme *left;
    NyjePeme *right;
};
class PemeKerkimi
{
public:
    PemeKerkimi();
    ~PemeKerkimi();
    bool isEmpty();

    NyjePeme *Kerko(int Key);
    bool Insert(NyjePeme *newNode);
    bool Insert(int Key);
    bool Delete(int Key);
    void PrintNyje(NyjePeme *T);
    void Print();



    int maxEl(NyjePeme *T);
    void findMax();
    int smallest(NyjePeme *T, int k);
    void showSmallest(int k);
    int nr(NyjePeme *T);
    void numri();

private:
      NyjePeme *root;
    void Clear(NyjePeme *T);
    NyjePeme *KopjoNyje(NyjePeme *T);

    void PrintPema(NyjePeme *T);
    void PrintAll(NyjePeme *T);
};
#endif