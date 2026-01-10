// #include <iostream>
// using namespace std;
// class Base{
//     protected:
//     int x,y;
//     public:
//     Base(){
//         x=0;
//         y=0;
//     }
//     Base(int m){
//         x=m;
//         y=m;
//     }
//     Base(int m , int n){
//         x=m;
//         y=n;
//     }
//     void SetX(int m){
//         x=m;
//     }
//     void SetY(int m){
//         y=m;
//     }
//     int GetX(){
//         return x;
//     }
//     int GetY(){
//         return y;
//     }
//     virtual int Product(){ 
//         return x*y;
//     }
//      int Sum(){
//         return x+y;
//     }
// };

// class Derived1: public Base{
//     protected:
//     int a;
//     public:
//     Derived1(){
//         a=0;
//     }
//     Derived1(int l,int m , int n ):Base(l,m){
//         a=n;
//     }
//     void SetA(int m){
//         a=m;
//     }
//     int GetA(){
//         return a;
//     }
//     int Product(){
//         return (x*y*a);
//     }
// };
// class Derived2: public Derived1{
//     int b;
//     public:
//     Derived2(int l ,int m ,int n,int p):Derived1(l,m,n){
//         b=p;
//     }
//     void SetB(int m){
//         b=m;
//     }
//     int GetB(){
//         return b;
//     }
//     int Product(){
//         return (x*y*a*b);
//     }
// };


// int main(){
//     Derived2 obj(3,4,5,6);
//     // cout<<"Product: "<<obj.Product()<<endl;
 

//     // cout << obj.Derived1::Product() << endl;
//     // cout << obj.Base::Product() << endl;

//     // Derived2 *pobj;
//     // pobj=&obj; //pointer of Derived2 type
//     // cout<<"Product using pointer: "<<pobj->Product()<<endl;
//     // cout<<pobj->Derived1::Product()<<endl;
//     // cout<<pobj->Base::Product()<<endl;

//     // Derived1 *dptr;
//     // dptr=&obj; //pointer of Derived1 type
//     // cout<<"Product using Derived1 pointer: "<<dptr->Product()<<endl;
//     // cout<<dptr->Base::Product()<<endl;

//     // Base *bptr;
//     // bptr=&obj; //pointer of Base type
//     // cout<<"Product using Base pointer: "<<bptr->Product()<<endl;
    
// //     Base *pb;
// //     pb=&obj;
// //     cout<<"Product using Base pointer: "<<pb->Product()<<endl; //before virtual will call Base class Product
   
// // pb->Product();                   // Calls Derived2::Product()
// // pb->Derived1::Product();         // Calls Derived1::Product() (NO virtual)
// // pb->Base::Product();             // Calls Base::Product() (NO virtual)

// //    return 0;
// // }
//------------------------------------------------------------------------------
// #include <iostream>
// using namespace std;

// class Base {
// public:
//     virtual void show() {
//         cout << "Base version\n";
//     }
// };

// class Derived1 : public Base {
// public:
//     void show() override {
//         cout << "Derived1 version\n";
//     }
// };

// class Derived2 : public Derived1 {
// public:
//     void show() override {
//         cout << "Derived2 version\n";
//     }

//     void showAllVersions() {
//         cout << "--- Inside Derived2 object ---\n";
//         show();                // virtual → Derived2
//         Derived1::show();      // NOT virtual → Derived1
//         Base::show();          // NOT virtual → Base
//     }
// };

// int main() {
//     Derived2 obj;

//     cout << "=== Direct calls ===\n";
//     obj.show();               // Derived2 (virtual) // Derived2 version
//     obj.Derived1::show();     // Derived1 (explicit) // Derived1 version
//     obj.Base::show();         // Base (explicit) // Base version

//     cout << "\n=== Using Base pointer ===\n";
//     Base *bptr = &obj;
//     bptr->show();             // Derived2 (virtual dispatch) // Derived2 version
//     bptr->Base::show();       // Base (explicit, NOT virtual) // Base version
//     //bptr->Derived1::show();   // Derived1 (explicit, NOT virtual) // Error: cannot call derived class method from base pointer

//     cout << "\n=== Calling helper function inside object ===\n";
//     obj.showAllVersions(); // Calls all three versions

//     return 0;
// }
//-------------------------------------------------------------------------------
// #include <iostream>
// using namespace std;

// class Shape {
// protected:
//     int dim1, dim2;

// public:
//     Shape() { dim1 = dim2 = 0; }
//     Shape(int m) { dim1 = dim2 = m; }
//     Shape(int m, int n) { dim1 = m; dim2 = n; }

//     void SetDim1(int m) { dim1 = m; }
//     void SetDim2(int m) { dim2 = m; }

//     int GetDim1() { return dim1; }
//     int GetDim2() { return dim2; }

//     virtual float Area() = 0; // PURE virtual function
// };

// class Circle : public Shape {
// public:
//     Circle() {}
//     Circle(int r) : Shape(r) {}

//     float Area() {
//         return 3.14 * dim1 * dim1;
//     }
// };

// class Rectangle : public Shape {
// public:
//     Rectangle() {}
//     Rectangle(int l, int b) : Shape(l, b) {}

//     float Area() {
//         return dim1 * dim2;
//     }
// };

// class Triangle : public Shape {
// public:
//     Triangle() {}
//     Triangle(int h, int b) : Shape(h, b) {}

//     float Area() {
//         return 0.5 * dim1 * dim2;
//     }
// };

// class Square : public Rectangle {
// public:
//     Square() {}
//     Square(int s) : Rectangle(s, s) {}
// };

// // class GeoShape {
// //     Circle* c;
// //     Rectangle* r;
// //     Triangle* t;
// //     Square* s;

// // public:

// //     // FIXED CONSTRUCTOR NAME
// //     GeoShape(Circle* p1, Rectangle* p2, Triangle* p3, Square* p4) {
// //         c = p1;
// //         r = p2;
// //         t = p3;
// //         s = p4;
// //     }

// //     float TotalArea() {
// //         return c->Area() + r->Area() + t->Area() + s->Area();
// //     }
// // };
// class GeoShape {
//     Shape* ptr[4];
//     public :
//     GeoShape(Shape* p1, Shape* p2, Shape* p3, Shape* p4) { //Late binding 
//         ptr[0] = p1;
//         ptr[1] = p2;
//         ptr[2] = p3;
//         ptr[3] = p4;
//     }
//     float TotalArea() {
//         float total = 0;
//         for (int i = 0; i < 4; i++) {
//             total += ptr[i]->Area();
//         }
//         return total;
//     }

// };

// int main() {
//     Circle c1(5);
//     Circle c2(7);
//     Triangle t1(3, 4);
//     Square s1(4);

//     GeoShape gs(&c1, &c2, &t1, &s1);

//     cout << "Total Area: " << gs.TotalArea() << endl;

//     return 0;
// }
//--------------------------------------------------------------
// #include <iostream>
// using namespace std;

// class Animal {
// public:
//     virtual void sound() = 0;  // pure virtual
// };

// class Dog : public Animal {
// public:
//     void sound() { cout << "Bark"; }
// };
// int main() {
// // Dog d;
// // d.sound();  // Bark
// //or
// // Animal* a = new Dog();
// // a->sound();  // Bark
// return 0;
// }