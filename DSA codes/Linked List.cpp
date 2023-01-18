#include<iostream>
using namespace std;
class Node
{  
    public:
    	
    int data ;
	Node* next;
	
	Node(int data )
	{
		this->data= data;
		this->next= NULL;
		}	
};
void InsertAtHead(Node* &head , int d)
{
	  Node* temp= new Node(d);
	  temp->next= head;
	   head= temp;
	   cout<<endl;
	  
}
void InseartAtTail(Node* &tail,int d)
{
	Node* temp= new Node(d);
	tail->next=temp;
	 temp=tail->next;
	 cout<<endl;
	  cout<<endl;

}
void InsertAtspasfic( Node* &head,int position,int d)
{
	if(position==1)
	{
	InsertAtHead(head,d);
		return;
	}
	Node* temp= head;
	int cnt=1;
	while(cnt<position-1)
	
	{
		temp=temp->next;
		cnt++;
		
	}
	Node* nodetoInsert=new Node(d);
	nodetoInsert->next=temp->next;
 temp-> next =nodetoInsert;
		 cout<<endl;

}
void Display( Node* &head)
{
	Node*temp=head;
	while(temp!=NULL)
	{
		cout<< temp->data ;
		temp=temp->next;
	}
}
int main()
{
	Node* node1= new Node(10);
	  
	cout<< node1->data;
    cout<< node1->next<<endl;;
   Node* head= node1;
   Node* tail= node1;
  Display(head); 
	InsertAtHead(head,12);
	  Display(head); 
	
	   InseartAtTail(tail,13);
	   Display(head);
	   InsertAtspasfic(head,2,19);
	   	Display(head);

}
