#include <iostream>
using namespace std;

int main() {
    double ScaleNumber;
    cout<<"Please enter the Richter Scale Number : ";
    cin>>ScaleNumber;

    if (ScaleNumber < 5.0) {
        cout<<"Little or No Damage"<<endl;
    } else if(ScaleNumber >= 5.0 && ScaleNumber < 5.5 ) {
        cout<<"Some damage"<<endl;
    }
    else if(ScaleNumber >= 5.5 && ScaleNumber < 6.5 ) {
        cout<<"Serious damage: walls may crack or fall"<<endl;
    }
    else if(ScaleNumber >= 6.5 && ScaleNumber < 7.5 ) {
        cout<<"Disaster: houses and buildings may collapse"<<endl;
    }
    else {
        cout<<"Catastrophe: most buildings destroyed"<<endl;
    }
}
