#include<iostream>
using namespace std;
int main(){
    double X_Axis;
    double Y_Axis;
    cout<<"Please enter the X coordinate : ";
    cin>>X_Axis;
    cout<<"Please enter the Y coordinate : ";
    cin>>Y_Axis;
    if(X_Axis==0){
        cout<<"The point is on the Y axis."<<endl;
    }
    else if(Y_Axis==0){
        cout<<"The point is on the X axis."<<endl;
    }
    else if(X_Axis>0 && Y_Axis>0){
        cout<<"The point is in the First quadrant."<<endl;
    }
    
    else if(X_Axis<0 && Y_Axis>0){
        cout<<"The point is in the Second quadrant."<<endl;
    }
    else if(X_Axis<0 && Y_Axis<0){
        cout<<"The point is in the Third quadrant."<<endl;
    }
    else if (X_Axis>0 && Y_Axis<0){
        cout<<"The point is in the Fourth quadrant."<<endl; 
    }
    else{
        cout<<"The point is at the Origin."<<endl;
    }
   
    

}