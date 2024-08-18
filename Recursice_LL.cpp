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







int main(){
   
   int a[]={5,6,7,8,9,10,11,12};
   create (a,8);
   display(first);

   return 0;
}