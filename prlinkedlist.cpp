#include<iostream>
using namespace std;

class node{
	public:
	string name;
	string pr_name;
	int hr;
	node*next;
	public:
		node(string name,string pr_name,int hr){
			this->name=name;
			this->pr_name=pr_name;
			this->hr=hr;
			this->next=NULL;
		}
};



class linked{
	public:
		
	node*head=NULL;
	linked(){
		this->head=NULL;
	}
	
	void insertatend(string name,string pr,int hr){
		node*newnode=new node(name,pr,hr);
		while(head==NULL){
			head=newnode;
			return;
		}
		node*temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=newnode;
		
	}
	
	
	void print(){
		node*temp=head;
		while(temp!=NULL){
			cout<<"||"<<temp->name<<"|"<<temp->pr_name<<"|"<<temp->hr<<"||"<<"-->";
			temp=temp->next;
		}
		cout<<"| NULL |"<<endl;
	}
	
	void cal(){
		node*temp=head;
		int amt1=0;
		int amt2=0;
		int amt3=0;
		while(temp!=NULL){
			if(temp->pr_name=="testing"){
				amt1+=temp->hr;
			}else if(temp->pr_name=="coding"){
				amt2+=temp->hr;
			}else{
				amt3+=temp->hr;
			}
			temp=temp->next;
		}
		cout<<"testing|"<<amt1<<"->"<<"coding|"<<amt2<<"->"<<"others|"<<amt3<<endl;
	}
	
	
};



int main(){
	linked list;
	list.insertatend("sudhagar","testing",20);
	list.insertatend("sudhagar svs","testing",20);
	list.insertatend("sundhar","coding",40);
	list.insertatend("sudha","coding",20);
	list.insertatend("sugan","testing",80);
	list.print();
	cout<<"FINAL REASULT OF OVERALL"<<endl;
	list.cal();
	return 0;
}
