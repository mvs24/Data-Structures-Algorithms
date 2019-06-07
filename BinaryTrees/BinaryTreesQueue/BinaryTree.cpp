#include <iostream>
#include "Queue.h"
using namespace std;
class Tree
{
    Node *root;

public:
    Tree() { root = NULL; }
    void CreateTree();
    void Preorder() { Preorder(root); }
    void Preorder(Node *p);
    void Postorder() { Postorder(root); }
    void Postorder(Node *p);
    void Inorder() { Inorder(root); }
    void Inorder(Node *p);
    void Levelorder() { Levelorder(root); }
    void Levelorder(Node *p);
    int Height() { return Height(root); }
    int Height(Node *root);
    int numberOfNodes() { numberOfNodes(root); }
    int numberOfNodes(Node *root);
    int numberOfLeafs() { numberOfLeafs(root); }
    int numberOfLeafs(Node *root);
    int numberOfDeg1() { numberOfDeg1(root); }
    int numberOfDeg1(Node *root);

    // int maxElement() { return maxElement(root); }
    // int maxElement(Node *root);
   // struct Node * findParent(){ findParent(root, key); }
   //  struct Node * findParent(struct Node *root, int key)
    // void sum() { sum(root); }
    // void sum(Node *root);
    // int numberOfElementsGreaterThanKey() {return numberOfElementsGreaterThanKey(root); }
    // int numberOfElementsGreaterThanKey(Node *root);
    void nodeInInorderTraversal(int k) { return nodeInInorderTraversal(root, k); }
    void nodeInInorderTraversal(Node *root, int k);

    struct Node * deleteLeafs2() { return deleteLeafs2(root); }
    struct Node * deleteLeafs2(Node *root);

    int HeightOfNode(int key) { return HeightOfNode(root, key); }
    int HeightOfNode(Node * root, int key);

    int nrOfPairs(int sum) { return nrOfPairs(root, sum); }
    int nrOfPairs(Node * root, int sum);
};
void Tree::CreateTree()
{
    Node *p, *t;
    int x;
    Queue q(100);
    printf("Eneter root value ");
    scanf("%d", &x);
    root = new Node;
    root->data = x;
    root->lchild = root->rchild = NULL;
    q.enqueue(root);
    while (!q.isEmpty())
    {
        p = q.dequeue();
        printf("eneter left child of %d ", p->data);
        scanf("%d", &x);
        if (x != -1)
        {
            t = new Node;
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->lchild = t;
            q.enqueue(t);
        }
        printf("eneter right child of %d ", p->data);
        scanf("%d", &x);
        if (x != -1)
        {
            t = new Node;
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->rchild = t;
            q.enqueue(t);
        }
    }
}
void Tree::Preorder(struct Node *p)
{
    if (p)
    {
        printf("%d ", p->data);
        Preorder(p->lchild);
        Preorder(p->rchild);
    }
}
void Tree::Inorder(struct Node *p)
{
    if (p)
    {
        Inorder(p->lchild);
        printf("%d ", p->data);
        Inorder(p->rchild);
    }
}
void Tree::Postorder(struct Node *p)
{
    if (p)
    {
        Postorder(p->lchild);
        Postorder(p->rchild);
        printf("%d ", p->data);
    }
}
void Tree::Levelorder(struct Node *root)
{
    Queue q(100);
    printf("%d ", root->data);
    q.enqueue(root);
    while (!q.isEmpty())
    {
        root = q.dequeue();
        if (root->lchild)
        {
            printf("%d ", root->lchild->data);
            q.enqueue(root->lchild);
        }
        if (root->rchild)
        {
            printf("%d ", root->rchild->data);
            q.enqueue(root->rchild);
        }
    }
}
// int Tree::Height(struct Node *root)
// {
//     int x = 0, y = 0;
//     if (root == 0)
//         return 0;
//     x = Height(root->lchild);
//     y = Height(root->rchild);
//     if (x > y)
//         return x + 1;
//     else
//         return y + 1;
// }

// int Tree::numberOfNodes(struct Node *p){
//     if(p==NULL){
//         return 0;
//     }
//     return 1+ numberOfNodes(p->lchild)+numberOfNodes(p->rchild);
// }

// int Tree::numberOfLeafs(struct Node *root){
//     if(root==NULL){
//         return 0;
//     }
//     if(root->lchild==NULL && root->rchild==NULL){
//         return 1+numberOfLeafs(root->lchild) + numberOfLeafs(root->rchild);
//     }else{
//         return numberOfLeafs(root->lchild) + numberOfLeafs(root->rchild);
//     }
// }

 // int Tree::numberOfDeg1(struct Node *root){
 //    int x,y;
 //    if(root->lchild || root->rchild ){
 //        x=numberOfDeg1(root->lchild);
 //        y=numberOfDeg1(root->rchild);
 //        return x+y+1;
 //    }else {
 //        return x+y;
 //    }
 //    return 0;
 // }

 // int Tree::maxElement(struct Node *root){
 //     if (root == NULL)  
 //    return INT_MIN;   
 //    int res = root->data;  
 //    int lres = maxElement(root->lchild);  
 //    int rres = maxElement(root->rchild);  
 //    if (lres > res)  
 //    res = lres;  
 //    if (rres > res)  
 //    res = rres;  
 //    return res;  
 // }

 // Node * Tree::findParent(struct Node *root, int key){  
 //    if(!root) return NULL;

 //    if(key==root->data){
 //        return root;
 //    }
 //    if(key!=root->data){
 //        root->lchild=findParent(root->lchild, key);
 //        root->rchild=findParent(root->rchild, key);
 //    }
 //    return root;
 // }

// void sum(struct Node *root){
//     int sumEL=0;
//     sumEL+=root->data;
//     sumEL=sum(root->lchild);
//     sumEL=sum(root->rchild);
//     cout<<sumEL;
//  }


 void Tree::nodeInInorderTraversal(struct Node *root, int k){
   static int counter = 0;
   if(!root) return;
  
   if(counter==k){
    cout<<root->data<<endl;
   }
    counter++;
   nodeInInorderTraversal(root->lchild, k);
   nodeInInorderTraversal(root->rchild, k);
 }

 Node * Tree::deleteLeafs2(struct Node *root){
    if(!root) return NULL;
    if(!root->lchild && !root->rchild) {
        delete root;
        return NULL;
    };
    root->lchild=deleteLeafs2(root->lchild);
    root->rchild=deleteLeafs2(root->rchild);
    cout<<root;
    return root;
 }

 int Tree::HeightOfNode(struct Node *root, int key){
    static int heightX = 0, heightY = 0;
    static int counter=0;

    if(!root) return 0;

    if(root->lchild && counter==0){
        heightX++;
        HeightOfNode(root->lchild, key);
        HeightOfNode(root->rchild, key); 
    }

    if(root->rchild && counter!=0){
        heightY++;
        HeightOfNode(root->rchild, key); 
        HeightOfNode(root->lchild, key); 
    }

    
    return heightY+heightX; 
 }

 int Tree::nrOfPairs(struct Node* root, int sum){
    if(!root) return 0;
    // if(root->lchild==NULL && root->rchild==NULL){

    // }
    int pairSumX,pairSumY;
    static int nrOfPairsN = 0;
   if(root->lchild){
     pairSumX = root->data + root->lchild->data;
   } 
   if(root->rchild){
     pairSumY = root->data + root->rchild->data;
   }

    if(pairSumY==sum || pairSumX==sum){
        nrOfPairsN++;
        nrOfPairs(root->lchild, sum);
        nrOfPairs(root->rchild, sum);
    }
    return nrOfPairsN;

 }



 // Tree Tree::deleteLeafs(struct Node *root){
 //    if(root==NULL || (root->lchild==NULL && root->rchild==NULL)){
 //        return NULL;
 //    }
 //    root->lchild=deleteLeafs(root->lchild);
 //    root->rchild=deleteLeafs(root->rchild);
 //    return root;
 // }
int main()
{
    Tree t;
    t.CreateTree();
    cout << "Preorder ";
    t.Preorder();
    cout << endl;
    cout << "Inorder ";
    t.Inorder();
    cout << endl
         << endl;
    // cout<<t.numberOfLeafs();
         //cout<<t.numberOfDeg1();
         // cout<<t.maxElement();
         // cout<<t.findParent(34);
         // cout<<t.numberOfElementsGreaterThanKey();
         // t.nodeInInorderTraversal(3);
         // t.deleteLeafs2();
         // t.Inorder();
         cout<<endl;
         // cout<<t.HeightOfNode(9);
         cout<<t.nrOfPairs(19);
    // t.deleteLeafs();
    // cout<<endl;
    // t.Preorder();
    return 0;
}