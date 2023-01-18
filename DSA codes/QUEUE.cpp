#include <iostream>
#define MAX_SIZE 5
using namespace std;

class Queue {
private:
    int myqueue[MAX_SIZE], front, rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    bool isFull() {
        if (front == 0 && rear == MAX_SIZE - 1) {
            return true;
        }
        return false;
    }

    bool isEmpty() {
        if (front == -1) return true;
        else return false;
    }

    void enQueue(int value) {
        if (isFull()) {
            cout << endl << "Queue is full!!";
        }
        else {
            if (front == -1) 
                front = 0;
            rear++;
            myqueue[rear] = value;
            
        }
    }
    int deQueue() {
        int value;
        if (isEmpty()) {
            cout << "Queue is empty!!" << endl; 
            return -1;
        }
         
            else {
                front++;
            }
            return(value);
        }
    }

     
};
int main()
{
    Queue myq;
    myq.enQueue(10);
    myq.enQueue(20);
    myq.enQueue(30); 
    myq.enQueue(40);
    myq.enQueue(50);  
    myq.enQueue(60);

    


    

    return 0;
}
