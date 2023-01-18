// Linked list implementation in C++

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// Creating a node
class Node {
   public:
  int value;
  Node* next;
};

int main() {
  Node* head;
  Node* one = NULL;
  Node* two = NULL;
  Node* three = NULL;
  Node* four = NULL;
  Node* five = NULL;
  Node* six = NULL;
  Node* seven = NULL;
  Node* eight = NULL;
  Node* nine = NULL;
  Node* ten = NULL;
   Node* el = NULL;
  Node* tw = NULL;
  Node* thr = NULL;
  Node* fourt = NULL;
  Node* fivef = NULL;
  Node* sixt = NULL;
  Node* sevent = NULL;
  Node* eighte = NULL;
  Node* ninet = NULL;
  Node* tenw = NULL;
  Node* el1 = NULL;
  Node* tw2 = NULL;
  Node* thr3 = NULL;
  Node* fourt4 = NULL;
  Node* fivef5 = NULL;
  Node* sixt6 = NULL;
  Node* sevent7 = NULL;
  Node* eighte8 = NULL;
  Node* ninet9 = NULL;
  Node* thierty = NULL;

  // allocate 3 nodes in the heap
  one = new Node();
  two = new Node();
  three = new Node();
   four = new Node();
  five = new Node();
  six = new Node();
   seven = new Node();
  eight = new Node();
  nine = new Node();
    ten = new Node();
     el = new Node();
  tw = new Node();
  thr = new Node();
   fourt = new Node();
  fivef = new Node();
  sixt = new Node();
   sevent = new Node();
  eighte = new Node();
  ninet = new Node();
    tenw = new Node();
    el1 = new Node();
  tw2 = new Node();
  thr3 = new Node();
   fourt4 = new Node();
  fivef5 = new Node();
  sixt6 = new Node();
   sevent7 = new Node();
  eighte8 = new Node();
  ninet9 = new Node();
    thierty = new Node();


  // Assign value values
  one->value = 1;
  two->value = 2;
  three->value = 3;
   four->value = 4;
  five->value = 5;
  six->value = 6;
   seven->value = 7;
  eight->value = 8;
  nine->value = 9;
   ten->value = 10;
   el->value = 11;
  tw->value = 12;
  thr->value = 13;
   fourt->value = 14;
  fivef->value = 15;
  sixt->value = 16;
   sevent->value = 17;
  eighte->value = 18;
  ninet->value = 19;
   tenw->value = 20;
   el1->value = 21;
  tw2->value = 22;
  thr3->value = 23;
   fourt4->value = 24;
  fivef5->value = 25;
  sixt6->value = 26;
   sevent7->value = 27;
  eighte8->value = 28;
  ninet9->value = 29;
   thierty->value = 30;
   
  // Connect nodes
  one->next = two;
  two->next = three;
  three->next = four;
  four->next = five;
  five->next = six;
  six->next = seven;
  seven->next = eight;
  eight->next = nine;
  nine->next = ten;
  ten->next = el;
  el->next = tw;
  tw->next = thr;
  thr->next = fourt;
  fourt->next = fivef;
  fivef->next = sixt;
  sixt->next = sevent;
  sevent->next = eighte;
  eighte->next = ninet;
    ninet->next = tenw;
    tenw->next = el1;
    el1->next = tw2;
  tw2->next = thr3;
  thr3->next = fourt4;
  fourt4->next = fivef5;
  fivef5->next = sixt6;
  sixt6->next = sevent7;
  sevent7->next = eighte8;
  eighte8->next = ninet9;
    ninet9->next = thierty;
    thierty->next = NULL;
    
  
   
    
  // print the linked list value
  head = one;
  while (head != NULL) {
    cout << head->value;
    head = head->next;
  } 
  cout<<"NULL"<<endl;
}
