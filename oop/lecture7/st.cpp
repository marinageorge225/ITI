#include <iostream>
#include <string>
using namespace std;

struct Complex{
    int Real;
    int Imag;
};

Complex Add(Complex c1,Complex c2);
void Print(Complex c);
void setComplex(Complex *pc ,int r,int i);


int main(){
    Complex cpl1,cpl2,cpl3;
    cpl1.Real=3;
    cpl1.Imag=7;

    cpl2.Real=14;
    cpl2.Imag=5;

    cpl3=Add(cpl1,cpl2);
    Print(cpl3);
    setComplex(&cpl1,10,20);
    Print(cpl1);

    return 0;
}


Complex Add(Complex c1,Complex c2){
    Complex temp;
    temp.Real=c1.Real+c2.Real;
    temp.Imag=c1.Imag+c2.Imag;
    return temp;
};

void Print(Complex c){
    cout<<"Real: "<<c.Real<<endl;
    cout<<"Imaginary: "<<c.Imag<<endl;
};
void setComplex(Complex *pc ,int r,int i){
    pc->Real=r;
    pc->Imag=i;
}