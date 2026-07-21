#include<iostream>
using namespace std;
class Node{
      public:
	 long long data;
	 Node* next;

	public:
	    Node(long long data){
		   data=data;
		   next=NULL;
	         }
};
class LinkedList{

	public:
	  static void display(Node* head){
		  Node* temp=head;
		  while(temp!=NULL){
			cout<<temp->data<<"->";
			temp=temp->next;
		   }
	    }
};
int main(){

	Node* newNode1=new Node(1);
	LinkedList::display(newNode1);
        Node* newNode2=new Node(1);
	LinkedList::display(newNode2);
}
