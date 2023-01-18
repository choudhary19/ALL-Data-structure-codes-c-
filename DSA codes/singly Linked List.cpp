#include<iostream>
using namespace std;

class Node {
    
    public:
    int data;
    Node* next;
  


   // constructor
   Node(int data) {
    this -> data = data;
   this -> next = NULL;
    }
    



void insertAtFirst(Node* &head, int d) {

    // new node create
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void insertAtLast(Node* &tail, int d) {
     // new node create
    Node* temp = new Node(d);
    tail -> next = temp;
    tail  = temp;
}

void Display(Node* &head) {
    Node* temp = head;

    while(temp != NULL ) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

void InsertSpecific(Node* &tail, Node* & head, int position, int d) {


    //insert at Start
    if(position == 1) {
        insertAtFirst(head, d);
        return;
    }

    Node* temp  = head;
    int cnt = 1;

    while(cnt < position-1) {
        temp = temp->next;
        cnt++;
    }

    //inserting at Last Position
    if(temp -> next == NULL) {
        insertAtLast(tail,d);
        return ;
    }

    //creating a node for d
    Node* nodeToInsert = new Node(d);

    nodeToInsert -> next = temp -> next;

    temp -> next = nodeToInsert;
}

int getCount(Node* head)
{
 
    int count = 0;
    Node* current = head;
    while (current != NULL)
    {
        count++;
        current = current->next;
    }
    return count;
}
};

 int main()
 {  
   
   //  Node* head =new Node;
  //  Node* node1= new Node(10);
   //  Node* head = new Node(10); 
     Node*head= new Node(10);
    //  Node*tail;
  //  Node* Tail = node1;
   // Display(head);

    
    head->insertAtFirst(head,12);
     head->insertAtFirst(head,13);
      head->insertAtFirst(head,14);
    //insertAtFirst(head,13);
    head->Display(head);
 //  cout<<"Length is "<< head->getCount(head);
   cout<<endl;
  Node*tail=new Node(1);
   tail->insertAtLast(head,10);
   tail->insertAtLast(head,9);
    head->Display(head);

   //head->insertAtLast(tail,6);
   
  //  insertAtLast(Tail, 13);
  //  Display(head);


//n->InsertSpecific( tail,head, 3,15);
//n->Display(head);
 	

 
 	
}
