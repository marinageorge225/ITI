#include <iostream>
#include <algorithm> 
using namespace std;

int IsRightTriangle(int side1, int side2, int side3) ;

int main() {
    int side1, side2, side3;
    while (true) {
        cout << "Enter side 1 of the triangle (0 to stop): ";
        cin>>side1;
        cout << "Enter side 2 of the triangle(0 to stop): ";
        cin>>side2;
        cout << "Enter side 3 of the triangle(0 to stop): ";
        cin>>side3;

        if (side1 == 0 || side2 == 0 || side3 == 0)
            break; 

        if (IsRightTriangle(side1, side2, side3))
            cout << "These sides form a right-angled triangle.";
        else
            cout << "These sides do NOT form a right-angled triangle.";
    }
    return 0;
}
int IsRightTriangle(int side1, int side2, int side3) {
    int sides[3] = {side1, side2, side3};
    std::sort(sides,sides+3);
    int a = sides[0];
    int b = sides[1];
    int c = sides[2];
    if (a*a+b*b ==c*c)
        return 1; 
    else
        return 0;      
}
