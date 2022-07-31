#include <iostream>
using namespace std;
class node{	
	public:
		int data;
		node * link;
		node(int d){
		data=d;
		link = NULL;
		}
	};
class LinkedList{
	node * end;;
	int count;
	node * head;
	node * temp;
	public:
		LinkedList(){
			end = NULL;
			count = 0;
			head = NULL;
		}
	int get_first_elem(){
		return head->data;
	}
	int getlength(){
		return count;
	}
	int get_last_elem(){
		return end->data;
	}
	void insert_at_beginning(int val){
		node * temp = new node(val);
		temp->link=head;
		head=temp;
		count++;
	}	

	void insert_at_last(int val){	
		node * n = new node(val);
		if (head==NULL){
		head = n;
		end = n;
		count++;
		return;
		}
		node* temp=head;
		while(temp->link!=NULL){
			temp=temp->link;
		}
		temp->link=n;
		end = n;
		count++;
	}
	
	void display(){
		while (temp!=NULL){
		cout << temp ->data ;
		temp=temp->link;
	
			cout <<"List is null";
			
		}
	}
	bool isEmpty(){
		return (head==NULL);
	}

};
	int main(){
		LinkedList L1;
		L1.insert_at_last(1);
		L1.get_first_elem();
		L1.insert_at_last(24);
		L1.get_last_elem();
		L1.insert_at_beginning(26);
		cout<<"Original Linked List : \n";
		L1.display();
		cout<<endl<<endl;
		L1.display();
		cout<<endl<<endl;
		cout<<"IsEmpty List: ";(L1.isEmpty())? cout <<"True"<<endl : cout<<"False" <<endl;
		cout <<"\nFirst Element : " <<L1.get_first_elem() <<endl;
		cout <<"\nLast Element : " <<L1.get_last_elem()<<endl;
		cout <<"\nTotal Elements in The List : " <<L1.getlength()<<endl;
		
		
		
	}
