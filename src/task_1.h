/*
 * Author:
 * Date:
 * Name:
 */
#include <iostream>
using namespace std;
class Node{
    public:
        int data;
        Node * next;
        Node(int val){
            this->data = val;
            this->next = nullptr;
        }
};
class Stack{
    Node* head;
public:
    Stack(){
        this->head=nullptr;
    }
    void push(int val){
        Node* tmp = new Node(val);
        tmp->data = val;
        tmp->next = head;
        head = tmp;
    }
    void pop(){
        Node* top =head;
        if(top==nullptr)
            cout<<"Stack Underflow"<<endl;
        else {
            cout<<"The popped element is "<< top->data <<endl;
            head = top->next;
        }
    }
    int top(){
        if (isEmpty())
            return 0;
        else
            return (*head).data;
    }
    void print(){
        Node* tmp = head;
        if (!isEmpty()) {
            while (tmp != nullptr) {
                cout << tmp->data << endl;
                tmp = tmp->next;
            }
        }
    }
    bool isEmpty(){
        if (head == nullptr){
            return true;
        } else {
            return false;
        }
    }
};
