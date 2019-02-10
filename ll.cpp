#include <iostream>
using namespace std;

class Node {
public:
	//Data
	int data;
	//pointer to the neXt Node
	Node *next;
	//constucter that makes the pointer to null
	Node(){
		next = NULL;
	}

};

class LinkedList {
	public:
	//head + circles inside linked with each other 
	//head -> Node type pointer
	Node *head;
	Node *tail;

	//construct
	LinkedList(){
		head = NULL;
		tail = NULL;
	}
	//circles inside linked with  each other
	//rules how circles will be linked



	//insert
	void insert(int value){
		//if !st NOde is added
		Node *temp = new Node;
		//********//temp has the address of the nodes will be stord in the stack
		// creates a circle in the heap and give back the address of the circle

		//Insert data in the node
		temp->data = value;
		//*********    //temp will point to the data of the node which has the values;
		//1ST nODE only
		if(head == NULL){
			head = temp; // head will store temp and temp store pointer of first
			tail = temp;
		}
		//Any other NOde only
		else{
			tail->next = temp;
			tail = temp;
		}

	}
	
	//insert at specific position
	void insertAt(int pos,int value){
		//reach the position before the position
		Node *current = head;
		Node *current1 = head;
		int j = 0;
		while(current1!=NULL){
			j++;
			current1= current1->next;
		}
		if(head == NULL){
			if(pos ==1){
				Node *temp = new Node;
				temp->data = value;
				temp->next = current;
				head = temp;	
				tail = head;
			}
			else{
				cout<<"Linked List does not have that many elements"<<endl;
			}
		}
		else{
			if(j<pos ){
				cout<<"Linked List does not have that many elements"<<endl;
			}
			//updating the code for 1st position
			else{
				if (pos==1){
					Node *temp = new Node;
					temp->data = value;
					temp->next = current;
					head = temp;	
				}
				else{

				int i = 1;
				while(i<pos-1){
					i++;
					current = current->next;
				}
				//Create a Node
				Node *temp = new Node;
				temp->data = value;
				temp->next = current->next;
				current->next = temp;
				}
			}
		}
	}
	//deleting the last element
	void dlt(){
		if(tail == NULL){
			cout<<"Linked List does not have that many elements"<<endl;
		}
		else{

			//store the tail into temp
			Node * temp = tail;
			//before tail has to pont to null
			Node *current = head;
			if(head == tail){
				head = NULL;
				tail = head;
			}
			else{
				while(current->next != tail){
					current= current->next;  //contonue till temp = null'
				}
				current->next = NULL;
				// update tail
				tail = current;
			}
			//delete th temp
			delete temp;
		}
	}
	//delete at specific position
	void dltAt(int pos){
		//store the tail into temp
		Node *current = head;
		Node *temp;
		Node *current1 = head;
		//finding the number of elements in linked list
		int j = 0;
		while(current1!=NULL){
			j++;
			current1= current1->next;
		}
		if(j<pos){
			cout<<"Linked List does not have that many elements"<<endl;
		}
		else{
			if (pos==1){
				temp = current;
				head = current->next;
				if(head == NULL){
					tail = head;
				}
			}
			else{
				int i = 1;
				while(i<pos-1){
					i++;
					current = current->next;
					//contonue till we get the position
				}
				temp = current->next;
				current->next = NULL;
				temp->next = temp;
			}
			//Delete a Node
			delete temp;

		}
	
	}

	//display
	void display(){
		Node *current = head;
		while(current!= NULL){
			cout<<current->data<<"->";
			current= current->next;  //contonue till temp +null'
		}
		cout<<"NULL"<<endl;
	}
	//Returns the number of items in the linked list.
	int countItem(){
		//reading the total number node
		Node *current = head;
		int i = 0;
		//looping
		while(current!=NULL){
			i++;
			current= current->next;
		}
		return i;
	}

};