#include "BinaryTree.h"
#include <iostream>
using namespace std;
PemeKerkimi::PemeKerkimi()
{
    root = NULL;
    return;
}
PemeKerkimi::~PemeKerkimi()
{
    Clear(root);
    return;
}
void PemeKerkimi::Clear(NyjePeme *T)
{
    if (T == NULL)
        return;
    if (T->left != NULL)
        Clear(T->left);
    if (T->right != NULL)
        Clear(T->right);
    delete T;
    return;
}
bool PemeKerkimi::isEmpty()
{
    return (root == NULL);
}


NyjePeme *PemeKerkimi::KopjoNyje(NyjePeme *T)
{
    NyjePeme *kopje;
    kopje = new NyjePeme();
    *kopje = *T; // kopjon strukturen
    kopje->left = NULL;
    kopje->right = NULL;
    return kopje;
}


NyjePeme *PemeKerkimi::Kerko(int Key)
{
    // bool ValueInTree = false;
    NyjePeme *temp;
    temp = root;

    while ((temp != NULL) && (temp->Key != Key))
    {
        if (Key < temp->Key)
            temp = temp->left;
        else
            temp = temp->right;
    }
    if (temp == NULL)
        return temp;
    else
        return (KopjoNyje(temp));
}
bool PemeKerkimi::Insert(NyjePeme *newNode)
{
    NyjePeme *temp;
    NyjePeme *p;
    temp = root;
    p = NULL;
    while (temp != NULL)
    {
        p = temp;
        if (newNode->Key < temp->Key)
            temp = temp->left;
        else
            temp = temp->right;
    }
    if (p == NULL)
        root = newNode;
    else
    {
        if (newNode->Key < p->Key)
            p->left = newNode;
        else
            p->right = newNode;
    }
    return true;
}
bool PemeKerkimi::Insert(int Key)
{
    NyjePeme *nyje;
    nyje = new NyjePeme();
    nyje->Key = Key;
    nyje->left = nyje->right = NULL;

    return (Insert(nyje));
}
bool PemeKerkimi::Delete(int Key)
{
    NyjePeme *back;
    NyjePeme *temp;
    NyjePeme *delPrind;
    NyjePeme *delNyje;
    temp = root;
    back = NULL;
    while ((temp != NULL) && (Key != temp->Key))
    {
        back = temp;
        if (Key < temp->Key)
            temp = temp->left;
        else
            temp = temp->right;
    }
    if (temp == NULL)
    {
        return false;
    }
    else
    {
        if (temp == root)
        {
            delNyje = root;
            delPrind = NULL;
        }
        else
        {
            delNyje = temp;
            delPrind = back;
        }
    }
    // Rasti 1: fshin nyje me 1 ose 0 femije
    if (delNyje->right == NULL)
    {
        if (delPrind == NULL) // nqs po fshijme rrenjen
        {
            root = delNyje->left;
            delete delNyje;
            return true;
        }
        else
        {
            if (delPrind->left == delNyje)
                delPrind->left = delNyje->left;
            else
                delPrind->right = delNyje->left;
            delete delNyje;
            return true;
        }
    }
    else // ka te pakten nje femije
    {
        if (delNyje->left == NULL) //ka vetem nje femije dhe eshte i djathte
        {
            if (delPrind == NULL) // nqs po fshihet rrenja
            {
                root = delNyje->right;
                delete delNyje;
                return true;
            }
            else
            {
                if (delPrind->left == delNyje)
                    delPrind->left = delNyje->right;
                else
                    delPrind->right = delNyje->right;
                delete delNyje;
                return true;
            }
        }
        else // Rasti 2 po fshijem nyje me 2 femije
        {
            temp = delNyje->left;
            back = delNyje;
            while (temp->right != NULL)
            {
                back = temp;
                temp = temp->right;
            }
            delNyje->Key = temp->Key;
            if (back == delNyje)
                back->left = temp->left;
            else
                back->right = temp->left;
            delete temp;
            return true;
        }
    }
}
void PemeKerkimi::PrintNyje(NyjePeme *T)
{
    cout << T->Key << "\n";
}
void PemeKerkimi::PrintPema(NyjePeme *T)
{
    if (T != NULL)
    {
        PrintPema(T->left);
        PrintNyje(T);
        PrintPema(T->right);
    }
}
void PemeKerkimi::Print()
{
    PrintPema(root);
}


    void PemeKerkimi::findMax(){
        cout<<maxEl(root);
    }


int PemeKerkimi::maxEl(NyjePeme *root){
       if (root == NULL)  
    return INT_MIN;  
  
    // Return maximum of 3 values:  
    // 1) Root's data 2) Max in Left Subtree  
    // 3) Max in right subtree  
    // int res = root->Key;  
    // int lres = maxEl(root->left);  
    // int rres = maxEl(root->right);  
    // if (lres > res)  
    // res = lres;  
    // if (rres > res)  
    // res = rres;  
    // return res;  
    // }
	int max = root->Key;
	int maxRight = maxEl(root->right);
	if(max < maxRight ){
		max=maxRight;
	}
	return max;
}

    // int PemeKerkimi::smallest(NyjePeme *root, int k){
    //     static int counter = 0;
    //     if(!root) return INT_MAX;
    //      static  int min = 99999;
    //     if(root->Key < min) {
    //         min = root->Key;
    //         counter++;
    //         // cout<<counter<<endl;
    //     }
    //      if(counter==k) {
    //         return root->Key;
    //     }
    //       smallest(root->left, k);
       
    // }

    // void PemeKerkimi::showSmallest(int k){
    //     cout<<smallest(root, k);
    // }

    int PemeKerkimi::nr(NyjePeme *root){
    	if(root==NULL) return NULL;
    	return 1+nr(root->left) + nr(root->right);
   	}

   	void PemeKerkimi::numri(){
   		cout<<nr(root);
   	}













