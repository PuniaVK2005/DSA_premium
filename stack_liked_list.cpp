#include <iostream>
using namespace std;
 struct node{
    int data;
    node *next;
 } *top = NULL;

void push(int x){
    node *t = new node;
    if(t == NULL){
        cout<<"stack overflow"<<endl;

    }

    else{
        t ->data = x;
        t->next = top;
        top = t;
    }
}

int pop(){
    int x = -1;
    if(top == NULL){
        cout<<"stack underflow"<<endl;

    }
else{
    node *p = top;
    top = top->next;
    x = p->data;
 delete p;

}
return x;

}
  
  void display(){
      node *t = top;
      while(t!= NULL){
        cout<<t->data<<endl;
        t = t->next;
      }
  }

int main(){

    push(10);
    push(12);
    push(13);
    push(14);

    display();

    cout<< "deleted number" <<" "<<pop()<<endl;
    return 0;

}