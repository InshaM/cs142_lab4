#include<iostream>
#include "ll.cpp"
//c++ header file learn it
using namespace std;

class Stack{
	public:
	Node *top;
	LinkedList l1;
	Stack(){
			top = l1.head;
		}
		//insert void in the top
		void push(int value){
			//void insertAt(int pos,int value){
			l1.insertAt(1,value);
			//top = new_head
			top = l1.head;	
		}	
		//delete the top element
		void pop(){
			//void deleteAt(int pos)
			l1.dltAt(1);
			//top = new_head;
			top = l1.head;
		}
		//checks whether the stack is empty
		bool isEmpty(){
			if(top==NULL) return true;
			return false;
		}
		//count the number of items in the stack
		int size(){
	    	return l1.countItem();
		}
		//display the top eelement
		void topDisplay(){
	
		}
		void display(){
			l1.display();
		}
	
	};
int main(){
	Stack s1;	

	cout<<s1.isEmpty()<<endl;
	for(int i = 1; i <5; i++){
		s1.push(i);
	}
	s1.display();
	s1.pop();
	s1.display();	
	s1.push(8);
	s1.push(9);
	s1.display();
	cout<<"The number of elements in s1 :"<<s1.size()<<endl;
	cout<<s1.isEmpty()<<endl;
	
}