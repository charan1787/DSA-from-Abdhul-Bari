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

int count_nodes(struct Node *first){
    int count=0;
    struct Node *p = first;
    while(p){
        count++;
        p=p->next;
    }
    //cout<<count;
    return count;
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
}


}

void insert_x (struct Node * p, int x, int pos){
    if(pos<0 || pos>count_nodes(p)){
        cout<<"Error";
        cout<<endl;
        return;
    }
    struct Node * t=new Node;
    t->data = x;
    if(pos==0){
        t->next=p;
        first=t;
    }
    else{
        for(int i=0;i<pos-1;i++){
            p=p->next;
        }
        t->next=p->next;
        p->next=t;
    }
}

void insert_last(struct Node *p,int x){
    struct Node *t= new Node;
    struct Node *last= new Node;
    t->data=x;
    t->next=NULL;
    last=p;
    if(first==NULL){
        first=last=t;
    }
    {
        for(int i=0;i<count_nodes(p)-1;i++){
            last=last->next;
        }   
        last->next=t;
        last=t;
    }
}


void insert_sorted(struct Node *p,int x){
    struct Node *t=new Node;
    struct Node *q=new Node;
    t->data=x;
    q=NULL;
    if(first->data>x){
        t->next=p;
        first=t;
        return;
    }
    while(p && p->data<x){
        q=p;
        p=p->next;
    }
    t->next=q->next;
    q->next=t;
}

int main()
{
int arr[]={5,6,7,8,9};
int size=sizeof(arr)/sizeof(arr[0]);
    create(arr,size);
    int c=count_nodes(first);
    cout<<"Number of Nodes : "<<c;
    cout<<endl;
    display(first);
    cout<<endl;
    //insert_x(first,2,3);
    //display(first);cout<<endl;
    //insert_sorted(first,10);display(first);
    return 0;
}