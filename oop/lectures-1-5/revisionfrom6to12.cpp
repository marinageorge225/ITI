#include<iostream>
using namespace std;
#include<cstring>
//---------------------------------------
// struct Employee{ //public by default
//     char Name[20];
//     int id;
//     float salary;
// };
// Employee fillEmployee();
// void PrintEmployee(Employee e);
// int main(){
    // Employee e;
    // e=fillEmployee();
    // PrintEmployee(e);

    // Employee emp[3];
    // for(int i=0;i<3;i++){
    //     emp[i]=fillEmployee();
    // }
    // for(int i=0;i<3;i++){
    //    PrintEmployee(emp[i]);
    // }

    // Employee *pe; //pointer
    // Employee emp;
    // pe=&emp;
    // // pe->id=6;
    // // cin>>pe->salary;
    // *pe=fillEmployee();
    // PrintEmployee(*pe);

//     Employee *pe; //dynamic allocation
//     pe=new Employee;
//     if(pe){
//         *pe=fillEmployee();
//         PrintEmployee(*pe);
//         delete pe;
//     }

// }
// Employee fillEmployee(){
//     Employee e;
//     cout<<"Please enter employee id"<<endl;
//     cin>>e.id;
//     cout<<"Please enter employee Name"<<endl;
//     cin>>e.Name;
//     cout<<"Please enter employee salary"<<endl;
//     cin>>e.salary;
//     return e;
// }
// void PrintEmployee(Employee emp){
//     cout<<emp.id;
//     cout<<emp.Name;
//     cout<<emp.salary;
// }
//-------------------------------------------------------
// int x = 20;   

// int main() {
//     int x = 5;   // local variable

//     cout << x << endl;      // prints 5  (local)
//     cout << ::x << endl;    // prints 20 (global) //scoope operator
// }
//-----------------------------------------------
// class Test {
// public:
//     void show();
// };

// void Test::show() {   // using scope resolution operator
//     cout << "Hello";
// }
// int main(){
//     Test t;
//     t.show(); //hello
// }
//--------------------------------------------------
// class A {
// public:
//     static int count;
// };

// int A::count = 0;   // define static member outside class

// int main() {
//     cout << A::count;
// }
//------------------------------------------------------------
// struct 
// class Complex{
//     int Real; //private 
//     int Imag;
//     public:
//     Complex Add(Complex c2);//(Complex c1,Complex c2);
//     void print();//(Complex c);
//     void setComplex(int r, int i);//(Complex*  pc , int r ,int i);
// };
// int main(){
//     Complex cpl1, cpl2, cpl3;

//     cpl1.setComplex( 3, 7); 
//     cpl2.setComplex( 14, 20);

//     cpl3 = cpl1.Add( cpl2);

//     cpl3.print();

//     return 0;

    // cpl1.Real=3; //for struct can access because they are public by default
    // cpl1.Imag=7;

    // cpl2.Real=14;
    // cpl2.Imag=20;

// }
// Complex Complex::Add( Complex c2){
//     Complex temp;
//     temp.Real=this->Real+c2.Real;
//     temp.Imag=this->Imag+c2.Imag;
//     return temp;
// }

// void Complex::print(){
//     cout<<"Real : " <<this->Real; //the caller
//     cout<<"Imag : "<<this->Imag;
// }

// void Complex::setComplex(int r ,int i){
//     this->Real=r;
//     this->Imag=i;
// }
//--------------------------------------------------------
// class Employee{
//     //char Name[20];
//     char *Name; 
//     int id;
//     float salary;

//     public:
//     Employee(){
//         id=1;
//         salary=2000;
//         Name=new char[7];
//         strcpy(Name,"Marina");
//     };

//     Employee(char n[],int i , int s){
//         id=i;
//         salary=s;
//         Name=new char[strlen(n)+1];
//         strcpy(Name,n);
//     }
//     Employee(Employee &re){
//         Name = new char[strlen(re.Name)+1];
//         strcpy(Name,re.Name);
//         id=re.id;
//         salary=re.salary;
//     }
//     void setName(char n[]){
//         //strcpy(Name,n);
//         delete[] Name;
//         Name=new char[strlen(n)+1]; //for null
//         strcpy(Name,n);
//     }
//     void setId(int i){
//         id=i;
//     }
//     void setSalary(float s){
//         salary=s;
//     }
//     char* GetName(){
//         return Name;
//     }
//     int getId(){
//         return id;
//     }
//     float getSalary(){
//         return salary;
//     }
//     // Destructor
//     ~Employee() {
//         delete[] Name;
//     }
// };
// int main(){
//     Employee e;
    
//     cout<<e.getId()<<endl;//without constructor will be garbage
//     cout<<e.GetName()<<endl;
//     cout<<e.getSalary()<<endl;

//     e.setName("Mina");
//     cout<<e.GetName();
// }
//------------------------------------------------
// class Complex{
//     int Real,Imag;
//     static int count;
//     public:
//     Complex(){
//         Real=Imag=0;
//         count++;
//     }
//     Complex(int m ){
//         Real=Imag=m;
//         count++;
//     }
//     Complex(int m,int n){
//         Real=m;
//         Imag=n;
//         count++;
//     }
//     void SetR(int m){
//         Real=m;
//     }
//     void SetI(int n){
//         Imag=n;
//     }
//     int GetR(){
//         return Real;
//     }
//     int GetI(){
//         return Imag;
//     }
//     ~Complex(){
//         count--;
//     }
//     static int GetCount(){
//         return count;
//     }
// };
// int Complex::count=0;//done with static members only
// int main(){
//     Complex c1,c2,c3;
//     //cout<<c1.GetCount(); //same as:
//     cout<<Complex::GetCount();
// }
//------------------------------------------------------------------------------

// class Complex{
//     int real;
//     int imag;
//     public:
//     Complex(){
//         real=imag=0;
//     }
//     Complex(int m){
//         real=imag=m;
//     }
//     Complex(int m , int n){
//         real=m;
//         imag=n;
//     }
//     void setR(int m){
//         real=m;
//     }
//     void setI(int n){
//         imag=n;
//     }
//     int getR(){
//         return real;
//     }
//     int getI(){
//         return imag;
//     }

//     Complex operator+(Complex c); //c+c ->Binary
//     Complex operator+(int m);    //c+m ->Binary
//     Complex operator++();      //++c ->unary true
//     Complex operator++(int d); //c++ ->unary the caller before the operator and this is totally wrong so put a dumy value
//     int operator==(Complex c); //c1==c
//     Complex& operator=(Complex& c); //c1=c
//     friend Complex operator+(int m ,Complex c);
                                  

// };
// int main(){
//     Complex c3,c4;
//     Complex c1(20,5);
//     Complex c2(10,20);
    // c3=c1+c2;
    // cout<<c3.getR();
    // cout<<c3.getI();
    // c3=c1+10;
    //c3=++c1; //will increment and return the incremented value
    // c3=c1++;
    // cout<<c3.getR();
    // cout<<c3.getI();
    // int result=(c1==c2);
    // if(result){
    //     cout<<"they are equals";
    // }
    // else{
    //     cout<<"They are different";
    // }
    // c1=c2;
    // cout<<c3.getR();
    // cout<<c3.getI();

    
// }
//  Complex Complex::operator+ (Complex c){
//     Complex temp;
//     temp.real=real+ c.real;
//     temp.imag=imag+c.imag;
//     return temp;
//  }
//  Complex Complex::operator+ (int m){
//     Complex temp;
//     temp.real=real+ m;
//     temp.imag=imag;
//     return temp;
//  }
//  Complex Complex::operator++(){
//     real++;
//     imag++;
//     return *this; //return the caller after ++
//  }
//   Complex Complex::operator++(int d){ //return the old value then increment
//    Complex old;
//    old=*this;
//    real++;
//    imag++;
//    return old;
//  }
//  int Complex::operator==(Complex c){
//     int equal=0;
//     if(real==c.real && imag==c.imag){
//         equal=1;
//     }
//     return equal;
//  }
//  Complex& Complex::operator=(Complex& c){
//     real=c.real;
//     imag=c.imag;
//     return *this;
//  }
//    //m+c
//    Complex operator+(int m ,Complex c){
//     Complex temp;
//     // temp.setR(m+c.getR());
//     // temp.setI(c.getI());
//     temp.real=m+c.real;
//     temp.imag=m+c.imag;
//     return temp;

//    } 
//----------------------------------------------------
//class Base{
//     protected:
//     int x,y;
//     public :
//     Base(){
//         x=y=0;
//     }
//     Base(int m){
//         x=y=m;
//     }
//     Base(int m,int n){
//         x=m;
//         y=n;
//     }
//     void setx(int m){
//         x=m;
//     }
//     void sety(int n){
//         y=n;
//     }
//     int getx(){
//         return x;
//     }
//     int gety(){
//         return y;
//     }
//     int product(){
//         return x*y;
//     }
//     int sum(){
//         return x+y;
//     }
// };
// class Derived1 : public Base{
//     protected:
//     int a;
//     public:
//     Derived1(){
//         a=0;
//     }
//     Derived1(int l ,int m ,int n):Base(l,m){
//         a=n;
//     }
//     void seta(int n){
//         a=n;
//     }
//     int geta(){
//         return a;
//     }
//     int product(){
//         return x*y*a;
//     }

// };

// class Derived2:public Derived1{
//     int b;
//     public:
//     Derived2(){
//         b=0;
//     }
//     Derived2(int l ,int m ,int n ,int p):Derived1(l,m,n){
//         b=p;
//     }
//     void setb(int m){
//         b=m;
//     }
//     int getb(){
//         return b;
//     }
//     int product(){
//         return x*y*a*b;
//     }
// };

// int main(){
//     // Derived1 drv(3,4,5);
//     // cout<<drv.product()<<endl; //60
//     Derived2 obj(3,4,5,6);
//     cout<<obj.product()<<endl;
//     cout<<obj.Derived1::product()<<endl;
//     cout<<obj.Base::product()<<endl;
// }
//--------------------------------------------
// class Base{
//     protected:
//     int z;
//     public:
//     Base(){z=0;}
//     Base(int m){z=m;}
//     void setz(int m){z=m;}
//     int getz(){return z;}
// };

// class Base1:virtual public Base{
//     protected:
//     int x;
//     public:
//     Base1(){x=0;}
//     Base1(int m):Base(m){
//         x=m;
//     }
//     void setx(int m){
//         x=m;
//     }
//     int getx(){
//         return x;
//     }
// };
// class Base2:virtual public Base{
//     protected:
//     int y;
//     public:
//     Base2(){y=0;}
//     Base2(int m):Base(m){
//         y=m;
//     }
//     void sety(int m){
//         y=m;
//     }
//     int gety(){
//         return y;
//     }
// };
// class Derived:public Base1,public Base2{
//     public:
//     Derived(int m , int n):Base1(n),Base2(m){}
//     int product(){
//         return x*y*z; //compiler does not know which z  will call the defaukt constructor of z which will be zero 
//     }
//     int sum(){
//         return x+y;
//     }

// };
// int main(){
//     Derived drv(3,4);
//     cout<<drv.product()<<endl;
//     cout<<drv.sum()<<endl;
// }
//------------------------------------------
//lecture 11:
class Base{
    protected:
    int x,y;
    public :
    Base(){
        x=y=0;
    }
    Base(int m){
        x=y=m;
    }
    Base(int m,int n){
        x=m;
        y=n;
    }
    void setx(int m){
        x=m;
    }
    void sety(int n){
        y=n;
    }
    int getx(){
        return x;
    }
    int gety(){
        return y;
    }
    virtual int product(){
        return x*y;
    }
    int sum(){
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
    Derived1(int l ,int m ,int n):Base(l,m){
        a=n;
    }
    void seta(int n){
        a=n;
    }
    int geta(){
        return a;
    }
    int product(){
        return x*y*a;
    }

};

class Derived2:public Derived1{
    int b;
    public:
    Derived2(){
        b=0;
    }
    Derived2(int l ,int m ,int n ,int p):Derived1(l,m,n){
        b=p;
    }
    void setb(int m){
        b=m;
    }
    int getb(){
        return b;
    }
    int product(){
        return x*y*a*b;
    }
};
int main(){
    Derived2 obj(3,4,5,6);
    // cout<<obj.product()<<endl;
    // cout<<obj.Derived1::product()<<endl;
    // cout<<obj.Base::product()<<endl;

    // Derived2* pobj;
    // pobj=&obj;
    // cout<<pobj->product()<<endl;
    // cout<<pobj->Derived1::product()<<endl;
    // cout<<pobj->Base::product()<<endl;

    // Derived1* pd;
    // pd=&obj;
    // cout<<pd->product()<<endl;
    // cout<<pd->Base::product()<<endl;

    // Base *pb;
    // pb=&obj;
    // cout<<pb->product()<<endl;




    
}

