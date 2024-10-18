#include<iostream>
using namespace std;

struct node{
	int data;
	node*next;
}*head=NULL;

void insert( int data){
	
	struct node*newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=data;
	newnode->next=head;
	head=newnode;		    
}



int main(){
	
	
	return 0;
}
