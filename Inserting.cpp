#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};

struct Node *first=NULL;

void create(int a[],int n){

struct Node *last,*t;
first = new Node;
first->data=a[0];
first->next= NULL;
last=first;

for(int i=1;i<n;i++){
    t=new Node;
    t->data=a[i];
    t->next= NULL;
    last->next=t;
    last=t;
}
}
void display(struct Node *p)
{
    while(p){
        cout<<p->data;
        p=p->next;
    }
}

int count(struct Node *p){
    int c=0;
    while(p){
        c++;
        p=p->next;
    }
    return c;
}

void insert(struct Node* p,int index, int x)
{
    if(index<0||index>count(p))
        return;
    struct Node *t;
    t=new Node;
    t->data=x;

    if(index==0){
        t->next=first;
        first=t;
    }
    else{
        for(int i=0;i<index-1;i++)
        {
            p=p->next;
        }
        t->next=p->next;
        p->next=t;
    }


}

int main(){
   
   int a[]={5,6,7,8,9};
   create (a,5);
   
   insert(first,3,1);
   display(first);

   return 0;
}