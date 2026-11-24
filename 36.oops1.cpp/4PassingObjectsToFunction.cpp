#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int rno;
    float cgpa;
    void print(){
        cout<<name<<" "<<rno<<" "<<cgpa<<endl;
    }
};
void change(Student& s){//pass by reference
   // void change(Student& s) not working because of pass by value.......
        s.name="tarak";
    }
int main(){
    Student x("Subhasis",39,6.23);
    change(x);
    x.print();
}