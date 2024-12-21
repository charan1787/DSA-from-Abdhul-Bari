#include<iostream>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

int main(){
   struct Rectangle r={4,5};
   struct Rectangle *p;
   p->length=10;
   cout<<p->length;


    return 0;

}