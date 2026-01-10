#include <iostream>
using namespace std;

class Point{
    int x,y;
    public:
    Point(){
        x=0; y=0;
    }
    Point(int m){
        x=y=m;
    }
    Point(int m ,int n){
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
    friend istream& operator>>(istream &in, Point &p);
    friend ostream& operator<<(ostream &out, Point p);


};
istream& operator>>(istream &in, Point &p){
    cout <<"Enter x : " <<endl;
    in >> p.x ;
    cout <<"Enter y : " <<endl;
    in >> p.y ;
    return in;};

ostream& operator<<(ostream &out, Point p){
    out <<"Point coordinates are : (" << p.x << "," << p.y << ")" << endl;
    return out;};

int main(){
    Point p1;
    // int a ,b ;
    // cout <<"Enter x : " <<endl;
    // cin >> a ;
    // cout <<"Enter y : " <<endl;
    // cin >> b ;
    // p1.SetX(a);
    // p1.SetY(b);
    cin >> p1; // Using overloaded >> operator

    // cout <<"Point p1 coordinates are : (" << p1.GetX() << "," << p1.GetY() << ")" << endl;
    cout << p1; // Using overloaded << operator
    return 0;
}