#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node *next;
}*first=NULL,*second=NULL,*third=NULL,*last=NULL;

void display(struct Node*p){
while(p){
    cout<<p->data;
    p=p->next;   
}
}

void create11(int a[],int size){
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

void create2(int a[],int size){
struct Node *p=new Node;
for(int i=0;i<size;i++)
{
    if(i==0){
    struct Node *t=new Node;
    t->data=a[i];
    t->next=NULL;
    second=t;
    p=second;
    }
    else{
    struct Node *t=new Node;
    t->data=a[i];
    t->next=NULL;
    p->next=t;
    p=t;
    }
}}

void concacte_LL(struct Node *p, struct Node *q){
    while(p->next){
        p=p->next;
    }
    p->next=q;
    second=NULL;
    delete second;
}

void merge_LL(struct Node *f,struct Node *s){

if(f->data<s->data){
    third=last=first;
    f=f->next;
    last->next=NULL;
}

else{
    third=last=second;
    s=s->next;
    last->next=NULL;
}

while(f && s){
if(f->data<s->data){
    last->next=f;
    last=f;
    f=f->next;
    last->next=NULL;

}

else{
    last->next=s;
    last=s;
    s=s->next;
    last->next=NULL;
}
}

if(s){
    last->next=s;
}
else last->next=f;


}






int main(){

    int arr1[]={77,79,81,83};
    int arr2[]={1,78,80,82,84,85};
    int size1=sizeof(arr1)/sizeof(arr1[0]);
    int size2=sizeof(arr2)/sizeof(arr2[0]);
    create11(arr1,size1);
    create2(arr2,size2);
    cout<<endl;
    display(first);
    cout<<endl;
    display(second);
    merge_LL(first,second);
    cout<<endl;
    display(third);

}