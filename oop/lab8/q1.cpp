#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

class Point{
    int x,y;

    public:
    Point(){
        x=y=0;
    }

    Point(int m){
        x=y=m;
    }
    Point(int m, int n){
        x=m;
        y=n;
    }

    void Setx(int m){
        x=m;
    }

    void Sety(int n){
        y=n;
    }
    int Getx(){
        return x;
    };
    int Gety(){
        return y;
    }
};

class Rectangle_C{
    Point Pt1,Pt2;
    int length,width;
    public:
    Rectangle_C(int x1,int y1,int x2,int y2):Pt1(x1,y1),Pt2(x2,y2){
        length=abs(x2 - x1);
        width=abs(y2 - y1);
    }
    void SetP1(int x,int y){
        Pt1.Setx(x);
        Pt1.Sety(y);
        length=abs(Pt2.Getx() - x);
        width=abs(Pt2.Gety() - y);
    }
    void SetP2(int x,int y){
        Pt2.Setx(x);
        Pt2.Sety(y);
        length=abs(x - Pt1.Getx());
        width=abs(y - Pt1.Gety());}

        int Area(){
            return (length*width);
        }
        int Parameter(){
            return(2*(length+width));
        };

        void Print() {
            cout << "Point 1: (" << Pt1.Getx() << ", " << Pt1.Gety() << ")"<<endl;
            cout << "Point 2: (" << Pt2.Getx() << ", " << Pt2.Gety() << ")"<<endl;
            cout << "Length: " << length << endl;
            cout << "Width: " << width << endl;
            cout << "Area: " << Area() << endl;
            cout << "Perimeter: " << Parameter() << endl;
};

};

class Circle_A{
     Point *P1,*P2;
     double radius;

     public:
     Circle_A(){
        P1=P2=nullptr;
        radius=0;
     }
     Circle_A(Point *Pa , Point *Pb){
        P1=Pa;
        P2=Pb;
        if(P1!=NULL && P2!=NULL){
            radius= sqrt(pow((P2->Getx() - P1->Getx()),2) + pow((P2->Gety() - P1->Gety()),2));}
        else{
            radius=0;}
        }

    void SetP1(Point *P){
        P1=P;
        if(P1!=NULL && P2!=NULL){
            radius= sqrt(pow((P2->Getx() - P1->Getx()),2) + pow((P2->Gety() - P1->Gety()),2));}
        else{
            radius=0;}
        }

    void SetP2(Point *P){
        P2=P;
        if(P1!=NULL && P2!=NULL){
            radius= sqrt(pow((P2->Getx() - P1->Getx()),2) + pow((P2->Gety() - P1->Gety()),2));}
        else{
            radius=0;}
    }
    double Area(){
        return (3.14*radius*radius);
    }
    double Circumference(){
        return (2*3.14*radius);
    } 
    void Print() {
        cout << "Circle"<<endl;
        if (P1 && P2) {
            cout << "P1 = (" << P1->Getx() << ", " << P1->Gety() << ")"<<endl;
            cout << "P2 = (" << P2->Getx() << ", " << P2->Gety() << ")"<<endl;
        } else {
            cout << "Points not set\n";
        }
        cout << "Radius = " << radius << endl;
        cout << "Area = " << Area() << endl;
        cout << "Circumference = " << Circumference() << endl;
    }    
};

int main() {
    // Rectangle_C R(0, 0, 5, 3);
    // R.Print();

    // cout << "After changing P1:"<<endl;
    // R.SetP1(2, 1);
    // R.Print();

    // cout << "After changing P2:"<<endl;
    // R.SetP2(8, 6);
    // R.Print();


    Point A(10, 10);
    Point B(20, 10);
    Circle_A C(&A, &B);
    C.Print();

    cout << "After changing P1:"<<endl;
    A.Setx(1);
    A.Sety(2);
    C.SetP1(&A);
    C.Print();

    cout << "After changing P2:"<<endl;
    B.Setx(6); B.Sety(8);
    C.SetP2(&B);
    C.Print();

    return 0;
}

