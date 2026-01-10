#include <iostream>
using namespace std;

int main() {
    char color;
    cout<<"Please enter the Color (O , B , Y , G) : ";
    cin>>color;
    if(color == 'O' || color == 'o'){
        cout<<"The Compressed Gas is Amonia"<<endl;
    }
    else if (color == 'B' || color == 'b'){
        cout<<"The Compressed Gas is Carbon Monoxide"<<endl;
    }
    else if (color == 'Y' || color == 'y'){
        cout<<"The Compressed Gas is Hydrogen"<<endl;
    }
    else if (color == 'G' || color == 'g'){
        cout<<"The Compressed Gas is Oxygen"<<endl;
    }
    else{
        cout<<"Invalid Color Code"<<endl;
    }

}
