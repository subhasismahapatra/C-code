#include <iostream>
using namespace std;
class cricketer{
    public:
    string name;
    int runs;
    float average;
    cricketer(string name,int runs,float average){
        this->name=name;
        this->runs=runs;
        this->average=average;
    }
    void print(){
        cout<<name<<endl;
        cout<<runs<<endl;
        cout<<average<<endl;
    }
};
int main (){
cricketer c1("virat kohli",14000,58.1);
cricketer c2("rohit sharna",11000,49.2);
cricketer c3("ms dhoni",11000,52.3);

cricketer* p=new cricketer("abd",100000,36.3);//object pointer
p->print();


cricketer*ptr=&c1;
ptr->average==59.3;//(*ptr).average==59.3;//(*ptr).average==ptr->average
cout<<c1.average<<endl;
// cout<<ptr->name<<endl;
// cout<<ptr->runs<<endl;
// cout<<ptr->average<<endl;
    // int x=10;
    // int*ptr=&x;//output = 10
    // *ptr=20;//output change to 20
    // cout<<*ptr<<endl;


    int x=10;
    int* y = new int(10);//see 24 & 25
    
}