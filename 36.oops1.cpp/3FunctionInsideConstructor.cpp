#include<iostream>
using namespace std;
class car{
    public:
    string name;
    float power;
    float mileage;
    bool isE20compatible;
    void print(){
        cout<<name<<" "<<power<<" "<<mileage<<" "<<isE20compatible<<endl;
    }
};
int main(){
car c1;
c1.isE20compatible=true;
c1.name="sonet";
c1.power=453;
c1.mileage=6.3;
car c2={"fortuner",200,7.6,false};
c1.print();
c2.print();
}