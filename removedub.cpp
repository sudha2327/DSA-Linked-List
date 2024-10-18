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
	node*head=NULL;
	
	linked(){
		
		this->head=NULL;
	}
	
	
	void insert(int data){
		node*newnode=new node(data);
		
		if(head==NULL){
		    head=newnode;
			return;
		}
		node*temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=newnode;
	}
	
	void printt(){
		node*temp=head;
		while(temp!=NULL){
			cout<<temp->data<<"->";
			temp=temp->next;
		}
		cout<<"NULL"<<endl;
	}
	
	void find(){
		node*temp=NULL;
		node*temp1=NULL;
		temp=head;
		while(temp!=NULL && temp->next!=NULL){
		    temp1=temp;
		    while(temp1->next!=NULL){
		    	if(temp->data==temp1->next->data){ //dulicate find ,delete it
		    		temp1->next=temp1->next->next;
		    		
				}else{
					temp1=temp1->next;	
				}
			}
			temp=temp->next;
		}
		
	}
	
};


int main(){
	linked list;
    list.insert(10);
    list.insert(1);  
    
    
    list.insert(12);
    list.insert(1);
    list.insert(5);
    list.insert(8);
    for(int i=0;i<5;i++){
    	list.insert(i);
	}
	cout<<"INSERTED SUCCESSFULLY...."<<endl;
	list.printt();
    cout<<"REMOVE DUBLICATE...."<<endl;
    list.find();
    cout<<"AFTER REMOVED...."<<endl;
    list.printt();
	return 0;
}
