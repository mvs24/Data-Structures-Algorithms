#ifndef Node_H 
#define Node_H 
#include <iostream> 
using namespace std;

class Node
{
public:
	int data;
	Node *next;
};

class LinkedList
{
	
private:
	Node *first;
public:
	LinkedList(){
		first=NULL;
	}
	~LinkedList(){
		Node *p=first;
		while(first){

			first=first->next;
			delete p;
			p=first;
		}
	}
	void create(int A[], int n){
		Node *t,*last;
		first=new Node;
		first->data=A[0];
		first->next=0;
		last=first;
		for (int i = 1; i < n; ++i)
		{
			// starting i=1 because p->data=A[0] is created the first Node
			t=new Node;
			t->data=A[i];
			t->next=0;
			last->next=t;
			last=t;
		}
	}

	void display(){
		Node *p=first;
		while(p){
			cout<<p->data<<endl<<" ";
			p=p->next;
		}
		cout<<endl;
	}


	int length(){
		Node *p=first;
		int len=0;
		while(p){
			len++;
			p=p->next;
		}
		return len;
	}

	void search(int key){
		Node *p=first;
		Node *q=NULL;
		while(p!=NULL){
			if(p->data==key){
				q->next=p->next;
				p->next=first;
				first=p;
			}
			q=p;
			p=p->next;
			
		}

	}

	void insertInTheBeginning(int x){
		Node *t=new Node;
		t->data=x;
		t->next=first;
		first=t;
	}


	void insert(int x, int position){
		Node *t = new Node;
		t->data=x;
		Node *p = first;
		for (int i = 0; i < position-1 && p; ++i)
		{
			p=p->next;
		}
		if(p){
		t->next=p->next;
		p->next=t;	
		}
		
	}

	void insertLast(int x){
		Node *p = first;
		Node *last;
		Node *t = new Node;
		t->data=x;
		t->next=NULL;
		if(first==NULL){
			first=last=t;
		}else{
		while(p){
			last=p; 
			p=p->next;
		}
			last->next=t;
			last=t;
		}
	}

	void insertInSorted(int x){
		Node *p = first;
		Node *q = NULL;

		Node *t = new Node;
		if(p->data > x){
			t->data=x;
			t->next=first;
			first=t;
			return;
		}
		while(p && p->data < x){
			q=p;
			p=p->next;
		}
			t->data=x;
			// be careful the order of instructions
			t->next=q->next;
			q->next=t;

	}

	void deleteFirstNode(){
		Node *p = first;
		first=p->next;
		delete p;
	}

	void deleteNodeInGivenPosition(int position){
		Node *p = first;
		Node *q=NULL;
		for (int i = 0; i < position-1; ++i)
		{
			q=p;
			p=p->next;
		}
		q->next=p->next;
		delete p;
	}


	void reverseElements(){
		Node *p = first;
		int i=0;
		int *A = new int[length()];
		while(p){
			A[i]=p->data;
			p=p->next;
			i++;
		}
		p=first;
		i--;
		while(p){
			p->data=A[i];
			p=p->next;
			i--;
		}
	}

	void reverseLinks(){
		Node *p = first;
		Node *q=NULL, *r=NULL;
		while(p){
			r=q;
			q=p;
			p=p->next;
			q->next=r;
		}
		first=q;
	}

	bool isSorted(){
		Node *p = first;
		Node *q = NULL;
		while(p){
			q=p;
			p=p->next;
			if(p->data < q->data){
				return false;
			}
		}
		return true;
	}

	bool isSorted2(){
		int x=INT_MIN;
		Node *p = first;
		while(p){
			if(p->data < x){
				return false;
			}
			x=p->data;
			p=p->next;

		}
		return true;
	}


};


#endif