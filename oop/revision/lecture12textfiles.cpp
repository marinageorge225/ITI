//Read and Write in Text Files 
#include <iostream>
#include <fstream>
using namespace std;
int main(){
    fstream obj;
    // ios::out - write mode with truncation and pointer at beginning
    obj.open("lecture12.txt", ios::out); 
    if(!obj){
        cout <<"Error in creating file." << endl;
        return 0;
    }

    // //Writing data to file
    cout <<"File created successfully." << endl;
    obj << "Line 1: This is Lecture 12. \n";
    obj << "Line 2: Text File handling in C++ .\nLet's Staty with ios::out \n";
    obj.close(); 


    // //ios::app - append mode with pointer forced at end -does not truncate
    // obj.open("lecture12.txt", ios::out | ios::app);
    // if (!obj) {
    //     cout << "Error in opening file for appending" << endl;
    //     return 0;
    // }
    // obj << "Line 3: Appending this line.\n";
    // obj << "Line 4: Appending another line.\n";
    // obj.close();



    //ios::ate - write mode with pointer at end and truncation
    // obj.open("lecture12.txt", ios::out | ios::ate);
    // if (!obj) {
    //     cout << "Error in opening file with ios::ate" << endl;
    //     return 0;
    // }
    // obj << "Line 5: Written with ios::ate.\n";
    // obj.close();

    obj.open("lecture12.txt", ios::out); 
    if(!obj){
        cout <<"Error in creating file." << endl;
        return 0;
    }
    //Writing data to file
    obj << "Line 6 : Last Line "<< endl;
    obj.close(); 


    //Reading data from file
    obj.open("lecture12.txt", ios::in); 
    if(!obj){
        cout <<"Error in opening file." << endl;
        return 0;
    }
    string line;
    cout <<"File content is : " << endl;
    while(getline(obj, line)){
        cout << line << endl;
    }
    obj.close();
    return 0;
    

}