#include<iostream>
using namespace std;
class Shape{
    protected:
    int dim1,dim2;
    public:
    Shape(){
        dim1=dim2=0;
    }
    Shape(int m){
        dim1=dim2=m;
    }
    Shape(int m ,int n){
        dim1=m;
        dim2=n;
    }
    void SetD1(int m){
        dim1=m;
    }
    void setD2(int m){
        dim2=m;
    }
    int  GetD1(){
        return dim1;
    }
    int  GetD2(){
        return dim2;
    }
    virtual float Area()=0;
};
class Circle:public Shape{
    public:
    Circle(){}
    Circle(int r):Shape(r){}
    float Area(){
        return (3.14*dim1*dim2);
    }
};
class Rectangle :public Shape{
    public:
    Rectangle(){}
    Rectangle(int l,int w):Shape(l,w){}
    float Area(){
        return (1*dim1*dim2);
    }
};
class Triangle : public Shape{
    public:
    Triangle(){}
    Triangle(int b , int h):Shape(b,h){}
    float Area(){
        return (3.14*dim1*dim2);
    }
};

class Square : public Rectangle{
    public :
    Square(){}
    Square(int s): Rectangle(s,s){}
};
class GeoShape{
    Shape* ptr[4];
    public:
    GeoShape(Shape* p1,Shape* p2,Shape* p3,Shape *p4){
        ptr[0]=p1;
        ptr[1]=p2;
        ptr[2]=p3;
        ptr[3]=p4;
    }
    float TotalArea(){
        float sum =0;
        for (int i =0;i<4;i++){
            sum+=ptr[i]->Area();
        }
        return sum;
    }
};


int main(){
    Circle C(7) ;
    Rectangle R(5,20);
    Triangle T(20,10);
    Square S(6);
    GeoShape g(&C,&R,&T,&S);
    float sum;
    sum=g.TotalArea();
    cout<<"Total Sum of Area= "<<sum<<endl;
    return 0;
}