#include <iostream>
#include <string>
using namespace std;

// class Complex{
//     //private by default
//     int Real;
//     int Imag;

//     public:
//     Complex Add(Complex c1,Complex c2);
//     void Print();
//     void setComplex(int r,int i);

// };



// int main(){
//     Complex cpl1,cpl2,cpl3;
//     // cpl1.Real=3;
//     // cpl1.Imag=7;

//     // cpl2.Real=14;
//     // cpl2.Imag=5;

//     // cpl3=Add(cpl1,cpl2);
//     // Print(cpl3);
//     // setComplex(&cpl1,10,20);
//     // Print(cpl1);

//     cpl1.setComplex(3, 7);
//     cpl2.setComplex(14, 5);
//     cpl3 = cpl3.Add(cpl1, cpl2);
//     cpl3.Print();


//     return 0;
// }


// Complex Complex::Add(Complex c1,Complex c2){
//     Complex temp;
//     temp.Real=c1.Real+c2.Real;
//     temp.Imag=c1.Imag+c2.Imag;
//     return temp;
// };

// void  Complex::Print(){
//     cout<<"Real: "<<Real<<endl;
//     cout<<"Imaginary: "<<Imag<<endl;
// };

// void  Complex::setComplex(int r,int i){ //This is a setter to assign values to the object.
//     Real=r;
//     Imag=i;
// }
//------------------------------------------------------------
class Complex{
    //private by default
    int Real;
    int Imag;

    public:
    Complex Add(Complex c2);
    void Print();
    void setComplex(int r,int i);

};



int main(){
    Complex cpl1,cpl2,cpl3;
    // cpl1.Real=3;
    // cpl1.Imag=7;

    // cpl2.Real=14;
    // cpl2.Imag=5;

    // cpl3=Add(cpl1,cpl2);
    // Print(cpl3);
    // setComplex(&cpl1,10,20);
    // Print(cpl1);

    cpl1.setComplex(3, 7);
    cpl2.setComplex(14, 5);
    cpl3 = cpl1.Add(cpl2);
    cpl3.Print();


    return 0;
}


Complex Complex::Add(Complex c2){
    Complex temp;
    temp.Real=this->Real+c2.Real;
    temp.Imag=this->Imag+c2.Imag;
    return temp;
};

void  Complex::Print(){
    cout<<"Real: "<<this->Real<<endl;
    cout<<"Imaginary: "<<this->Imag<<endl;
};

void  Complex::setComplex(int r,int i){ //This is a setter to assign values to the object.
    this->Real=r;
    this->Imag=i;
}