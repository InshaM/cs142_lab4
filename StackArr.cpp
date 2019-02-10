#include<iostream>
using namespace std;
	
class Stack{
	public:
	int top;
	int StackArr[];
	//constructer
	Stack(){
		top = -1;
		StackArr[0];
	}
	//insert arr in the top
	void push(int value){
		//top = new_top
		top++;
		//adding values to the top
		StackArr[top]=value;
		
			
	}	
	//delete the top element
	void pop(){
		//top = previous top;
		top--;
	if(top == -1){
		cout<<"The stack doesnt have sufficient elements"<<endl;
	}
		
		
	}
	//checks whether the stack is empty
	bool isEmpty(){
		if(top==-1) return true;
		return false;
	}
	//count the number of items in the stack
	int size(){
	return top+1;
	}
	//display the top eelement
	void topDisplay(){

	}
	void display(){
		for(int i = 0; i<(top+1);i++){
			cout<<StackArr[i]<<"->";
		}
		cout<<"NULL"<<endl;
	}

};
int main(){
	Stack s1;	

	cout<<s1.isEmpty()<<endl;
	
	s1.push(2);
	s1.push(3);
	s1.push(1);
	s1.push(5);
	s1.display();
	s1.pop();	
	s1.display();
	cout<<s1.size()<<endl;
	s1.pop();	
	s1.display();
	s1.pop();	
	s1.display();
	s1.pop();	
	s1.display();
	cout<<s1.size();
}