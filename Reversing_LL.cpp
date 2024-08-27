#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node *next;
}*first=NULL;

void display(struct Node*p){
while(p){
    cout<<p->data;
    p=p->next;   
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

void reverse_LL_array(struct Node *p){

    int ss[count_nodes(p)];
    int i=0;
    while(p){
        ss[i]=p->data;
        p=p->next;
        i++;
    }
    i--;
    p=first;
    while(p){
        p->data=ss[i];
        i--;
        p=p->next;
    }

}

void reverse_LL_sliding_pointer(struct Node *p){
    struct Node *q=NULL;
    struct Node *r=NULL;
    while(p){
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    first=q;
}

void reverse_LL_Recursive(struct Node *p,struct Node *q){
    if(p){
        
        reverse_LL_Recursive(p->next,p);
        p->next=q;
    }
    else{
        first=q;
    }
}

int main(){

    int arr[]={5,6,7,8,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    create(arr,size);
    cout<<endl;
    display(first);
    reverse_LL_Recursive(first,NULL);
    cout<<endl;
    display(first);

}