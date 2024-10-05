//Sakshi Sonawane 
//PRN:24070123505
#include<iostream>
using namespace std;
class Area{
    public:
    float l,h,b,volume;
    void input(){
        cout<<"Enter the length: "<<endl;
        cin>>l;
        cout<<"Enter the breadth: "<<endl;
        cin>>b;
        cout<<"Enter the height: "<<endl;
        cin>>h ;
    }
    void calculate(){
        volume=l*b*h;
    }
    void output(){
        cout<<"Volume of the cuboid is: "<<volume<<endl;
    }
};
int main(){
    Area c;
    c.input();
    c.calculate();
    c.output();
}
