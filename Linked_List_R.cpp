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

int maxx(struct Node *p)
{
    int max=INT_MIN;
int x=0;
    if(p==0){
       return 0;
    }
    else{
        
        x=maxx(p->next);
        if(x>p->data)
        {
            return x;
        }
        return p->data;
    }
    
    
} 



int main(){
   
   int a[]={5,6,7,8,10};
   create (a,5);
   cout<<maxx(first);
   return 0;
}