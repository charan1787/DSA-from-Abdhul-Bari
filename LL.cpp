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
}


}

void Rdisplay(struct Node *first){

    struct Node *p=first;
    if(p->next==NULL){
        cout<<p->data;
        return;
    }
    else{
        cout<<p->data;
        Rdisplay(p->next);
        return;
    }
}
void count_nodes(struct Node *first){
    int count=0;
    struct Node *p = first;
    while(p){
        count++;
        p=p->next;
    }
    cout<<"Number of Nodes : "<<count;
}

void sum_nodes(struct Node *first){
    int sum=0;
    struct Node *p = first;
    while(p){
        sum=sum+p->data;
        p=p->next;
    }
    cout<<"Sum of Nodes : "<<sum;
}

void max_node(struct Node *first){
    struct Node *p=first;
    int max=INT_MIN;

    while(p){
        if(p->data>max){
            max=p->data;
            p=p->next;
        }
        else p=p->next;
    }

    cout<<"Max Element : "<<max;
}

void search(struct Node *p, int key){
while(p){
    if(key==p->data){
        cout<<"Key Address : "<<p;
        return;
    }
    p=p->next;
}
}

void isearch(struct Node *p,int key){

    struct Node *q=new Node;
    while(p!=NULL){
        if(key==p->data){
            if(p==first){
                cout<<p;
                break;
            }
        q->next=p->next;
        p->next=first;
        first=p;
        cout<<p;
        break;
        }
        else {
            q=p;
            p=p->next;
        }
    }
}



int main()
{
int arr[]={5,6,7,8,9};
int size=sizeof(arr)/sizeof(arr[0]);
    create(arr,size);
    Rdisplay(first);
    cout<<endl;
    count_nodes(first);
    cout<<endl;
    sum_nodes(first);
    cout<<endl;
    max_node(first);
    cout<<endl;
    isearch(first,5);
    cout<<endl;
    display(first);
    return 0;
}