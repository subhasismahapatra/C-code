#include <iostream>
using namespace std;
class MyVector{
    public:
    int length;
    int *arr;
    int cap;
   MyVector(int capacity,int default_value){
    length=cap=capacity;
     arr=new int[capacity];
     for(int i=0;i<capacity;i++){
        arr[i]=default_value;
     }
   }
   void pop_back(){
    length--;
   }
   void push_back(int val){
   arr[length++]=val;}
   void display(){
    for(int i=0;i<length;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
   }

};
int main(){
   MyVector v(5,-1) ;
   v.display();
   v.pop_back();
v.display();
v.push_back(10);
v.display();
//    //int arr[5];
//    int*arr=new int[5];
//    arr[0]=10;arr[1]=20;
   
//    int b[]={67,21};
//    arr=b;

//    cout<<arr[0]<<endl;
}