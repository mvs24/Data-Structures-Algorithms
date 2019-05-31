#include <iostream>
using namespace std;

struct Node{
	struct Node *leftChild;
	int data;
	struct Node *rightChild;
}*root=NULL;


	
	void insert(int key){
		struct Node *t = root;
		struct Node *r=NULL, *p;
		if(root==NULL){
			p=new struct Node;
			p->data = key;
			p->leftChild = p->rightChild = NULL;
			root=p;
			return;
		}
		while(t){
			r=t;
			if(key < t->data){
				t=t->leftChild;
			}
			else if(key > t->data){
				t=t->rightChild;
			}
			else{
				return ;
			}
		}
			p=new struct Node;
			p->data = key;
			p->leftChild = p->rightChild = NULL;
			if(key < r->data){
				r->leftChild=p;
			}else r->rightChild=p;
	}


	void Inorder(struct Node *root){
		if(root){
			Inorder(root->leftChild);
			cout<<root->data<<endl;
			Inorder(root->rightChild);
		}
	}

	int maxEl(struct Node *root){
		if(root==NULL){
			return INT_MIN;
		}

		int momentValue = root->data;
		maxEl(root->rightChild);
		if(momentValue<maxEl(root->rightChild)){
			momentValue=maxEl(root->rightChild);
		}
		return momentValue;
	}

	void printEven(struct Node *root){
		if(!root){
			return;
		}
		printEven(root->leftChild);
		printEven(root->rightChild);
		if(root->data%2==0){
			cout<<root->data<<endl;
		}
	}

	 Node * findParent(struct Node *root, int key){  
    if(!root) return NULL;

    if(key==root->data){
        return root;

    }
    if(key!=root->data){
        root->leftChild=findParent(root->leftChild, key);
        root->rightChild=findParent(root->rightChild, key);
    }
    return root;
 }

	

int main(int argc, char const *argv[])
{
	
	insert(10);
	insert(5);
	insert(20);
	insert(8);
	insert(7);
		insert(330);
	insert(30);
	Inorder(root);
	cout<<endl;
	// cout<<maxEl(root);
	printEven(root);
	cout<<findParent(root,1222);
	return 0;
}
