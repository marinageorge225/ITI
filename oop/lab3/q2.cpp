#include <iostream>
#include <cmath>
using namespace std;

double hypotenuse(double side1, double side2);

int main() {
    double side1, side2;
    cout << "Enter side1 of the triangle: ";
    cin>>side1;
    cout << "Enter side2 of the triangle: ";
    cin>>side2;

    if(side1 == 0 || side2 == 0){
        cout<<"Please enter valid lengths for the sides."<<endl;}
    else{
    double res = hypotenuse(side1, side2);
    
    if (side1 + side2 > res) {
            cout << "The length of the hypotenuse is: " << res << endl;
            cout << "This can form a valid right triangle." <<endl;
        } 
        else {
            cout << "Invalid triangle: the sum of the two sides is not greater than the hypotenuse." <<endl;
        }
    }    
    return 0;
}

double hypotenuse(double side1, double side2) {
    double result;
    result = sqrt(pow(side1,2)+pow(side2,2)); 
    return result;
}
