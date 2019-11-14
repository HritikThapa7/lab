

#include "stack.cpp"
int main(){
	stack s;
	s.push(20);
	s.push(40);
	cout<<"the current top is"<<s.Top()<<endl;
	cout<<s.pop()<<endl;
	cout<<"the current top is"<<s.Top()<<endl;
	s.push(35); 
	cout<<	s.isEmpty()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	cout<<"the current top is"<<s.Top()<<endl;
}