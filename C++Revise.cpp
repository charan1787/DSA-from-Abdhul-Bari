#include<iostream>
using namespace std;

class rectangle{
    private :
        int length;
        int breadth;
    public :
        rectangle()
        {
            length=breadth=1;
        }
        rectangle(int l,int b){
            length=l;
            breadth=b;
        }
        int area()
        {
            return length*breadth;
        }
        void setlength(int l){
            length=l;
        }
        int getlength(){
            return length;
        }
        void setbreadth(int b){
            breadth=b;
        }

};

int main(){
    rectangle r;
    r.setlength(5);
    r.setbreadth(10);
    cout<<r.area();


    return 0;

}