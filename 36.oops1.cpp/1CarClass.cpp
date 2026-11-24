#include<iostream>
using namespace std;
class car{
    public:
    string name;
    string color;
    float miles;
    int seats;
    int price;
};
int main(){
car c1;
c1.name="thor";
c1.color="black";
c1.miles=10;
c1.seats=6;
c1.price=250000000;
car c2={"toyota fortuner","white",200,7,1000000000};
cout<<c2.price<<endl;
}