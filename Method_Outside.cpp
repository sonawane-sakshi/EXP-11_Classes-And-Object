//Sakshi Sonawane 
//PRN:24070123505
#include <iostream>
using namespace std;
class Student{
    public:
    void display();
};
void Student::display(){
    cout<<"I'm studying in second year.";
}
int main(){
    Student s1;
    s1.display();
}
/*
**OUTPUT**
I'm studying in second year.
  */
