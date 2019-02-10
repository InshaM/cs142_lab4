//including library
#include <iostream>
#include "ll.cpp"
using namespace std;

class Queue{
	public:
	//create a pointer end;
	Node *end;
	//create a pointer front;
	Node *front;
	LinkedList l1;
	Queue(){
		end = l1.head;
		front = l1.tail;
	}
	//insert an element in the end
	void Enqueue(int value){
		//void insertAt(int pos,int value){
		l1.insertAt(1,value);
		//end=new head
		end = l1.head;
	}
	//delete the last element
	void Dequeue(){
		//void dlt(){
		l1.dlt();
		//front = new tail
		front = l1.tail;
	}
	//checks whether the queue is empty
	bool isEmpty(){
		if(end==NULL) return true;
		return false;
	}
	//count the number of items in the queue
	int size(){
    	return l1.countItem();
	}
	//display the queue
	void display(){
		l1.display();
	}
};

int main(){
	Queue q1;
	for(int i = 1; i <10;i++){
		q1.Enqueue(i);
	}
	q1.display();
	q1.Dequeue();
	q1.display();
	cout<<"The total number of elements in the queue is "<<q1.size()<<endl;
	q1.Dequeue();
	q1.display();
	q1.Dequeue();
	q1.display();
	q1.Dequeue();
	q1.display();
	q1.Dequeue();
	q1.display();
	q1.Dequeue();
	q1.display();
	q1.Dequeue();
	q1.display();
	q1.Dequeue();
	q1.display();
	q1.Dequeue();
	q1.display();
	q1.Dequeue();
	q1.display();
}