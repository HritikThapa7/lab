
#include<iostream>
using namespace std;
#include "stack.h"

stack::stack(){
	top=-1;
}
stack::~stack(){}

void stack::push(int element){
	if(top>=MAX_STACK_SIZE-1)
	{
		cout<<"cannot push"<<element<<".stack is full";
	}
	else{
		top++;
		this->element[top]=element;
	}	
}

int stack::pop(){
	if(top==-1){
		cout<<"cannot pop,stack is empty";
	}
	else{
		int t=top;
		top--;
		return element[t];

	}}
int stack::Top(){
	if(top<MAX_STACK_SIZE-1){
		return top;
	}
	

}

bool stack::isEmpty(){
	if(top<0){
		return true;
	}
	else{
		return false;
	}
}


