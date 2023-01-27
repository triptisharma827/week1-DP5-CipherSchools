#include <bits/stdc++.h> 
using namespace std;
class Queue {
    
public:
    int *arr;
    int size;
    int frontt;
    int rear;
    Queue() {
        // Implement the Constructor
        size = 1000;
        arr = new int[size];
        frontt = 0;
        rear = 0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        if(rear == frontt){
            return true;
        }
        return false;
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        if(rear == size-1){
            return;
        }
        else{
            arr[rear]=data;
            rear +=1;
        }
    }

    int dequeue() {
        // Implement the dequeue() function
        if(frontt == rear){
            return -1;
        }
        else{
            int temp = arr[frontt];
            arr[frontt] = -1;
            frontt+=1;
            if(frontt == rear){
                frontt = 0;
                rear = 0;
            }
            return temp;
        }
    }

    int front() {
        // Implement the front() function
        if(frontt == rear){
            return -1;
        }
        else{
            int temp = arr[frontt];
            return temp;
        }
    }
};

int main(){
    Queue q = Queue();
    q.enqueue(12);
    q.enqueue(22);
    q.enqueue(32);
    q.enqueue(42);
    int front = q.front();
    cout<<front<<"\n";
    int popped = q.dequeue();
    popped = q.dequeue();
    popped = q.dequeue();
    cout<<popped<<endl;
    front = q.front();
    popped = q.dequeue();
    popped = q.dequeue();
    cout<<front<<"\n";
    cout<<popped<<endl;
    return 0;
}