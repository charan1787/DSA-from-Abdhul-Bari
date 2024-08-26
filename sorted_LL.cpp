#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
}*first = NULL;


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

void check_sorted(struct Node *p){
int x=INT_MIN;
    while(p!=NULL){
        if(p->data<x){
            cout<<"False";
            return;
        }
        x=p->data;
        p=p->next;
    }
    cout<<"True";
}

void remove_duplicates(struct Node *p){
    struct Node *q=new Node;
    q=first->next;
    while(q!=NULL){
        if(p->data!=q->data){
            p=q;
            q=q->next;
        }
        else{
            p->next=q->next;
            delete q;
            q=p->next;
        }
    }
}

int main(){

    int arr[]={5,6,7,7,8,8,8,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    create(arr,size);
    cout<<endl;
    display(first);
    cout<<endl;
    remove_duplicates(first);
    display(first);

}