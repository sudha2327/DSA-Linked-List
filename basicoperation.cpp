#include<iostream>
using namespace std;

class node{
	public:
		int data;
		node*next;
		 
	node(int data){
		this->data=data;
		this->next=NULL;
	}
};
	
class linked{
	public:
		node*head;
	linked(){
		this->head=NULL;
	}
	
	void insertatbegin(int data){
		node*newnode=new node(data); //assinging the parts to newnode
		newnode->next=head;
		head=newnode;
	}
	void inseratend(int data){
		node*newnode=new node(data);
		
		while(head==NULL){
			head=newnode; 
			return;    //if head null, it will assign newnode to the head;
		}
		node*temp=head;  //temp value for forwarding the next locations.
		
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=newnode;
	}
	
	void del(){
		if(head==NULL){
			return;
		}
		node*temp=head;
		head=head->next;
		delete temp;
	}
	
	void delatend(){
		if(head==NULL){
			return;
		}
		if(head->next==NULL){
			delete head;
			head=NULL;
			return;
		}
		node*temp=head;
		while(temp->next->next!=NULL){
			temp=temp->next;
		}
		delete temp->next;
		temp->next=NULL;
	
	}
	
	void printlist(){
		node*temp=head;
		while(temp!=NULL){
			cout<<temp->data<<"->";
			temp=temp->next;
		}
		cout<<"NULL"<<endl;
	}
};


int main(){
	linked list;
	for(int i=0;i<8;i++){
//			list.insertatbegin(i);
			list.inseratend(i);
	}
   cout<<"DISPLAY THE LINKED LIST"<<endl;
   list.printlist();
   cout<<"DELETE AT THE BIGINING"<<endl;
   list.del();
   cout<<"DISPLAY THE LINKED LIST"<<endl;
   list.printlist();
   return 0;
}

