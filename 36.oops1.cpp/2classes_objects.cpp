//use of constructor.................
#include<iostream>
using namespace std;
class Student{//user defined data type
    public:
    string name;
    int rno;
    float cgpa;
    //constructor overloading....
    Student(string n,int r,float c){
        name=n;
        rno=r;
        cgpa=c;
    }
     Student(int r,string n,float c){
        name=n;
        rno=r;
        cgpa=c;
    }
    Student(){//default constructor..
    }
};
int main(){
    Student x("Subhasis",39,6.23);
    Student y(46,"tarak",7.5);
    Student alpha;
/*Student x;
x.name="Subhasis";
x.rno=154;
x.cgpa=7.64;
Student y;
y.name="tarak";
y.rno=6;
y.cgpa=7.640;*/
cout<<y.name<<" "<<y.rno<<" "<<y.cgpa<<endl;
cout<<x.name<<" "<<x.rno<<" "<<x.cgpa<<endl;
}
