#include <iostream>
#include <string>
using namespace std;

class Complex {
    int Real;
    int Imag;
    static int count;
    public:
    Complex(){
        Real = 0;
        Imag = 0;
        count++;
    }
    Complex(int m){
        Real = Imag = m;
        count++;
    }
    Complex(int r, int i){
        Real = r;
        Imag = i;
        count++;
    }
    void SetR(int r){
        Real = r;
    }
    void SetI(int i){
        Imag = i;
    }
    int GetR() {
        return Real;
    }
    int GetI() {
        return Imag;
    }
    void Print(){
        cout << Real << " + " << Imag << "i" << endl;
    }
    ~Complex(){
        count--;
    }

    Complex operator+(Complex c);
    Complex operator+(int m);
    Complex operator++();
    Complex operator++(int);
    int operator==(Complex c);
    Complex operator=(Complex c);
    friend Complex operator+(int m, Complex c);

     static int getCount(){
        return count;
    }

};
int Complex::count = 0; //initialize static data member

int main(){
    Complex c1(3,4), c2(5,6), c3;
    // c3 = c1 + c2;
    // c3.Print();
    // c3= c1 + 10;
    // c3.Print();
    // ++c1;
    // c1.Print();
    // c1++;
    // c1.Print();
    // if(c1 == c2){
    //     cout << "c1 and c2 are equal" << endl;
    // }
    // else{
    //     cout << "c1 and c2 are not equal" << endl;
    // }
    // c3 = c1;
    // c3.Print();
    cout<<c3.getCount();
    


    return 0;
}

Complex Complex::operator+(Complex c){
    Complex temp;
    temp.Real=Real+ c.Real;
    temp.Imag=Imag + c.Imag;
    return temp;
}
Complex Complex::operator+(int m){
    Complex temp;
    temp.Real=Real + m;
    temp.Imag=Imag;
    return temp;
}
Complex Complex::operator++(){ // prefix increment ++c
    Real++;
    Imag++;
    return *this; //will return the updated object after increment 
}
Complex Complex::operator++(int){  // postfix c++
    Complex temp = *this;
    Real++;
    Imag++;
    return temp;
}
int Complex::operator==(Complex c){
    int Equals=0;
    if(Real == c.Real && Imag == c.Imag){
        Equals=1;
    }
    return Equals;   
}

Complex Complex::operator=(Complex c){
    Real = c.Real;
    Imag = c.Imag;
    return *this;
}
Complex operator+(int m, Complex c){
    Complex temp;
    temp.SetR(m + c.Real);
    temp.SetI(c.Imag);
    return temp;
}
