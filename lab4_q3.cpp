#include <iostream>
#include "b.cpp"
using namespace std;

class StackFQ{
	public:
	Queue q1;
	Queue q2;
	Node *top;
//...........................................................................................................
	//constructer
	StackFQ(){
		top = q1.end;
	}
//...........................................................................................................
	//insert elements in to the stack
	void push(int value){
		q1.Enqueue(value);
	}
//...........................................................................................................	
	//delete the first elemt in the stack
	void pop(){
		if (q1.front!=NULL){
			//insering values to q2
			while(q1.front!=q1.end){
					q2.Enqueue(q1.front->data);
					q1.Dequeue();
			}
			//deleting first element in q1
			q1.Dequeue();
			//insering back to q1
			while(q2.front!=NULL){
					q1.Enqueue(q2.front->data);
					q2.Dequeue();
			}
		}
		else{
			cout<<"The stack doesnt consist sufficient elements"<<endl;
		}
	}
//...........................................................................................................
	//size of the stack
	int size(){
		q1.size();
	}
//...........................................................................................................
	//display elemets in stack
	void display(){
		q1.display();
	}
//...........................................................................................................
	//check whether the ctack is empty
	bool isEmpty(){
		q1.isEmpty();
	}
};
int main(){
	StackFQ s1;
	for(int i = 1; i<2; i++){
	s1.push(i);
	}
	s1.display();
	s1.pop();
	s1.display();
	s1.pop();
	s1.display();
}