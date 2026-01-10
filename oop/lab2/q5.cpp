#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a;
    double b;
    double c;
    double solution1;
    double solution2;
    cout<<"Please enter Coefficient a : ";
    cin>>a;
    cout<<"Please enter Coefficient b : ";
    cin>>b;
    cout<<"Please enter Coefficient c : ";
    cin>>c;

    double discriminant;
    discriminant=sqrt(b*b - 4*a*c);

    if (discriminant > 0){
        solution1=(-b+discriminant)/(2*a);
        solution2=(-b-discriminant)/(2*a);
        cout<<"There are 2 Solutions for this equation : " <<solution1<<" and "<<solution2<<endl;
    }
    else if (discriminant == 0){
        solution1=-b/(2*a);
        cout<<"There is 1 Solution for this equation : " <<solution1<<endl;
    }
    else{
        cout<<"There is Imaginary Solution ";
    }
    
    
}
