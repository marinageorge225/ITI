#include<iostream>
using namespace std;

class Base{
    protected:
    int x,y;
    public:
    Base(){
        x=0; y=0;
    }
    Base(int m){
        x=m; y=m;
    }
    Base(int m , int n){
        x=m; y=n;
    }
    void SetX(int m){
        x=m;
    }
    void SetY(int n){
        y=n;
    }
    int GetX(){
        return x;
    }
    int GetY(){
        return y;
    }
    int Product(){
        return x*y;
    }
    int Sum(){
        return x+y; 
    }

};
class Derived1 : public Base{
    protected:
    int a;
    public:
    Derived1(){
        a=0;
    }
    Derived1(int l , int m , int n) : Base ( l,m){
        a=n;
    }

    void SetA(int n){
        a=n;
    }
    int GetA(){
        return a;
    }
    int Product(){ // function overriding
        return x*y*a;
    }
};

class Derived2 : public Derived1{
    protected:
    int b;
    public:
    Derived2(){
        b=0;
    }
    Derived2(int l , int m , int n , int o) : Derived1 ( l,m,n){
        b=o;
    }
    void SetB(int n){
        b=n;
    }
    int GetB(){
        return b;
    }
    int Product(){ // function overriding
        return x*y*a*b;
    }

};

int main(){
    // Derived1 D1(2,3,4);
    // cout<<"Product from Derived1 class: "<<D1.Product()<<endl;
    // cout<<"Sum from Base class: "<<D1.Sum()<<endl;
    Derived2 D2(2,3,4,5);
    // cout<<"Product from Derived2 class: "<<D2.Product()<<endl;
    // cout<<"Sum from Base class: "<<D2.Sum()<<endl;

    cout<<D2.Product()<<endl; // calls Derived2's Product function 120
    cout<<D2.Derived1::Product()<<endl; // calls Derived1's Product function 24
    cout<<D2.Base::Product()<<endl; // calls Base's Product function 6
    return 0;
}