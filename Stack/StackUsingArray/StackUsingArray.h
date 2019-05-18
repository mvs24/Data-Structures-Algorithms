#include <iostream>
using namespace std;

class Stack
{
private:
	int size;
	int top;
	int *s;
public:
	Stack(int size){
		this->size=size;
		s=new int[size-1];
		top=-1;
	}
	bool isEmpty();
	bool isFull();
	void push(int);
	int pop();
	int peek(int);
	int stackTop();
};

bool Stack::isEmpty(){
	if(top==-1){
		return true;
	}
	return false;
}

bool Stack::isFull(){
	if(top==size-1){
		return true;
	}
	return false;
}

void Stack::push(int value){
	if(!isFull()){
		top++;
		s[top]=value;  
	}else{
		cout<<"Stack is full";
	}

}

int Stack::pop(){
	int x=-1;
	if(isEmpty()){
		cout<<"Stack overflow";
	}else{
		x=s[top];
		top--;
	}
	return x;
}

int Stack::peek(int position){
	// we should return s[index] of that position
	// formula:index=top-position+1
	int x=-1;
	if(top-position+1 < 0) {
		cout<<"Invalid postion";
	}else{
		x=s[top-position+1];
	}
	return x;
}
int Stack::stackTop(){
	if(top==-1){
		return -1;
	}
	return s[top];
}

