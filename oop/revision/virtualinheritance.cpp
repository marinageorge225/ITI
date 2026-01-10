#include <iostream>
using namespace std;
class Base{
    protected:
    int z;
    public:
    Base(){
        z=0;
    }
    Base(int m){
        z=m;
    }
    void SetZ(int m){
        z=m;
    }
    int GetZ(){
        return z;
    }

};

class Bas1 :virtual public Base{
    protected:
    int x;
    public:
    Bas1(){
        x=0;
    }
    Bas1(int m) : Base(m){
        x=m;
    }
    void SetX(int m){
        x=m;
    }
    int GetX(){
        return x;
    }

};
class Base2 : virtual public Base{
    protected:
    int y;
    public:
    Base2(){
        y=0;
    }
    Base2(int m) : Base(m){
        y=m;
    }
    void SetY(int m){
        y=m;
    }
    int GetY(){
        return y;
    }
};
class Derived : public Bas1, public Base2{
    public:
    Derived(int m , int n) : Base2(m) , Bas1(n){}
    int Product(){
        return (x *y * z);
    }
    int Sum(){
        return (x + y+ z);
    }
};
int main(){
    Derived D(2,3);
    D.SetZ(4);
    cout<<"Product: "<<D.Product()<<endl;
    cout<<"Sum: "<<D.Sum()<<endl;
    return 0;

}