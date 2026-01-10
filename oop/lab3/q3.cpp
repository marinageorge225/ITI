#include <iostream>
#include <cmath>
using namespace std;

double Area(double side1, double side2 , double side3);

int main() {
    double side1, side2 , side3;
    cout << "Enter side 1 of the triangle: ";
    cin>>side1;
    cout << "Enter side 2 of the triangle: ";
    cin>>side2;
    cout << "Enter side 3 of the triangle: ";
    cin>>side3;

    if(side1 == 0 || side2 == 0 || side3 == 0){
        cout<<"Please enter valid lengths for the sides."<<endl;
    }
    else{
    double res = Area(side1, side2,side3);
    
    if (side1 + side2 <= side3 || side1 + side3 <= side2 || side2 + side3 <= side1) {
        cout << "Invalid triangle." << endl;
    }
    else{
        cout << "The area of the triangle is: " << res << endl;
    }
    }    
    return 0;
}

double Area(double side1, double side2 , double side3) {
    double s;
    s = (side1 + side2 + side3)/2;
    double area;
    area = sqrt(s*(s-side1)*(s-side2)*(s-side3));
    return area;
}
