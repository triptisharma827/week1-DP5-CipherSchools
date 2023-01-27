#include<iostream>
#include<vector>
using namespace std;
 
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

class Stack{
    public:
    Node* head;
    Node* top;
    Stack(){
        head = NULL;
        top = NULL;
    }

    void push(int element){
        Node* temp = new Node(element);

        if(!temp){
            cout<<"Overflow!!"<<endl;
            return ;
        }
        temp->data = element;
        temp->prev = top;
        temp->next = NULL;
        top = temp;
    }

    void peek(){
        if(top == NULL){
            cout<<"Empty Stack!!"<<endl;
            return;
        }
        else{
            cout<<top->data<<endl;
        }
    }

    void pop(){
        if(top == NULL){
            cout<<"Underflow!!"<<endl;
            return;
        }
        else{
            Node * temp = top;
            top = top->prev;
            free(temp);
        }
    }

    bool isEmpty(){
        if(top == NULL){
            return true;
        }
        else{
            return false;
        }
    }
};



int main(){
    Stack s = Stack();
    s.pop();
    s.push(1);
    s.push(13);
    s.push(23);
    s.pop();
    s.peek();
    if(s.isEmpty()){
        cout<<"true"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
    return 0;
}