#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
}*first = NULL;

void delete_node(struct Node *p,int pos){
    struct Node *q;
    int x;
    if(pos==1){
        x=first->data;
        p=first;
        first=first->next;
        delete p;
    }
    else{
        p=first;
        q=NULL;
        for(int i=0;i<pos-1 && p;i++){
            q=p;
            p=p->next;
        }
        if(p){
            q->next=p->next;
            x=p->data;
            delete p;
        }
    }
}

void display(struct Node*first){
    struct Node*q;
    q=first;
while(q){
    cout<<q->data;
    q=q->next;   
}
}

void create(int a[],int size){
struct Node *p=new Node;
for(int i=0;i<size;i++)
{
    if(i==0){
    struct Node *t=new Node;
    t->data=a[i];
    t->next=NULL;
    first=t;
    p=first;
    }
    else{
    struct Node *t=new Node;
    t->data=a[i];
    t->next=NULL;
    p->next=t;
    p=t;
    }
}}

int main(){

    int arr[]={5,6,7,8,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    create(arr,size);
    cout<<endl;
    display(first);
    delete_node(first,3);
    display(first);
    cout<<endl;

}