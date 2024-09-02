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

int is_loop(struct Node *f){
    struct Node *p,*q;
    p=q=f;
    do{
        p=p->next;
        q=q->next;
        q=q?q->next:q;
    }while(p && q && p!=q);

    if(p==q){
return true;
    }
    else return false;
}

int main(){
    struct Node *t1,*t2;
    int arr[]={5,6,7,8,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    create(arr,size);
    cout<<endl;
    display(first);
    t1=first->next->next->next;
    t2=first->next->next->next->next;
    t2->next=t1;
    cout<<endl;
    cout<<is_loop(first);

    return 0;


}