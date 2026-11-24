#include <iostream>
using namespace std;
class cricketer{
    private:         //can only be accessed within the class.........
 int runs;
    public:
    string name;
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
   int getruns(){//getter(value private hai tabh bhi use kar sakte hai..)
    return runs;
   }
   void setruns(int runs) {//setter
    this->runs = runs;
}
};
int main (){
    cricketer*c=new cricketer("virat kohli",14000,58.1);
    cout<<c->name<<endl;
    //cout<<c->runs<<endl;//private ko class ke bahar use nahi kar sakte hai..
    cout<<c->average<<endl;
    c->print();//runs private me hai but print public me hai to it can access run..
    cout<<c->getruns()<<endl;
    c->setruns(15000);
    cout<<c->getruns()<<endl;
}