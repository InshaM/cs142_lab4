#include<iostream>
#include "a.cpp"
using namespace std;

class QueueFS{
	public:
	Stack s1;
	Stack s2;
	Node *end;
	Node *front;
	//constructor
	QueueFS(){
		//end is the top of stack
		end = s1.top;
		front = s1.top;
	}
	//insert element in the top;
	//void push(int value){
	void Enqueue(int value){
		s1.push(value);
		//end = new top
		end = s1.top;
		if(end == front){	
			front = s1.top;
		}

	}
	//delete the last element
	void Dequeue(){
		//adding elements to second stack from first stack
		while(s1.top->next!=NULL){
			s2.push(s1.top->data);
			s1.pop();
		}
		//removing last element to the first stack
		s1.pop();
		//removing elements from second stack and loading them back to first stack
		while(s2.top != NULL){
			s1.push(s2.top->data);
			s2.pop();
		}		
	}	

	//check whether the queue is empty
	bool isEmpty(){
		return s1.isEmpty();
	}
	//know the size of the queue
	int size(){
		cout<<"The number of elements in queue :"<<s1.size()<<endl;
	}
	//display the element
	void display(){
		s1.display();
	}
	
};
int main(){
	QueueFS q1;
	for(int i = 1; i <5;i++){
		q1.Enqueue(i);
	}
	q1.display();
	q1.size();
	q1.Dequeue();
	q1.display();
}