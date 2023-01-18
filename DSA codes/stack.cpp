#include <iostream>

using namespace std;
struct Node{
    int data;
    Node*left;
    Node* right;
    Node(int a){
        data = a;
        left = NULL;
        right=NULL;
        
    }
};
Node * iterativeSearch(Node* root ,int v) {
    if (root == NULL) {
      return root;
    } else {
      Node * temp = root;
      while (temp != NULL) {
        if (v == temp -> data) {
          return temp;
        } else if (v < temp -> data) {
          temp = temp -> left;
        } else {
          temp = temp -> right;
        }
      }
      return NULL;
    }
  }

int main()
  {
    Node* root =new Node(3);
   root->left= new Node(2);
       root->right= new Node(5);

    if(iterativeSearch(root,3)==NULL){
        cout<<"root Does not exist "<<endl;
    }
          else{
              cout<<"root  exist "<<endl;
          } 

    return 0;
}
