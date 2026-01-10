#include <iostream>
using namespace std;

int main() {
    double AutomobileSpeed;
    cout<<"Please enter the speed of the automobile : ";
    cin>>AutomobileSpeed;

    if (AutomobileSpeed > 65) {
        cout<<"You are speeding! Slow down!"<<endl;
    } else {
        cout<<"You are within the speed limit."<<endl;
    }
}
