#include<iostream>
using namespace std;
class Node {
    public:
    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(int d ) {
        this-> data = d;
        this->pre = NULL;
        this->next = NULL;
    }
};
 
 void insertAttail(Node* head,int d)
 {
 	Node* temp=new Node(d);
 	temp->next= head;
 	head->pre=temp;
 	head=temp;
 }
 void insertattail(Node* head,int d)
 {
 	Node* temp=new Node(d);
 	tail->next=temp;
 	temp->pre = tail;
 	tail=temp;
 }
 void Display(Node* head)
 {
 	Node* temp= head;
 	while(temp != NULL)
 	{
 		cout<<temp->data<<" ";
 		temp=temp->next;
	 }
 }
 int main()
 {
 	 Node* node1=new Node(10);
 	 Node* head= node1;
 	 Node* tail= node1; 
 //	 Node*pre=node1;
 	 insertAttail(head,13);
 	 Display(head);
 	 insertattail(tail,14);
 	 Display(head);
 	 
 	 
 }
