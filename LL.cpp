#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
}*first = NULL;

int display(struct Node*first){
    struct Node*q;
    q=first;
while(q){
    cout<<q->data;
    q=q->next;
    
}

return 0;}

int create(int a[],int size){
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
return display(first);

}




//void insert(int num,struct Node *first,struct Node *p){

//}

int main()
{
int arr[]={5,6,7,8,9};
int size=sizeof(arr)/sizeof(arr[0]);
    cout<<create(arr,size);

    return 0;
}