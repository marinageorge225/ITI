#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class Employee{
    char* Name;
    int Id;
    float Salary;

    public:
    Employee(){ //constructor to initialize data members
        Name = new char[7]; //for marina + null character
        strcpy(Name,"Marina");
        Id=1;
        Salary=0.0;
    }
    Employee(char n[], int id, float sal){ //parameterized constructor
        Name = new char[strlen(n)+1]; //+1 for null character
        strcpy(Name,n);
        Id=id;
        Salary=sal;
    }
    void setName(char n[]){
        delete[] Name; //free previously allocated memory
        Name = new char[strlen(n)+1];
        strcpy(Name,n);
    }
    void setId(int id){
        Id=id;
    }
    void setSalary(float sal){
        Salary=sal;
    }

    char* getName(){
        return Name;
    }
    int getId(){
        return Id;
    }
    float getSalary(){
        return Salary;
    }
    //used to initialize instead of garbage values but instead make a constructor later
    // void Initialize(){
    //     strcpy(Name,"Marina");
    //     Id=1;
    //     Salary=0.0;
    // }

    ~Employee() { //destructor
        delete[] Name;  // free dynamic memory
    }
 
    void printInfo(){
        cout<<"Name: "<<Name<<endl;
        cout<<"ID: "<<Id<<endl;
        cout<<"Salary: "<<Salary<<endl;
    }

    Employee(const Employee &other){ //copy constructor
        Name = new char[strlen(other.Name)+1];
        strcpy(Name, other.Name);
        Id = other.Id;
        Salary = other.Salary;
    }
};

//Non Member functions:
Employee FillEmployee(); //function prototype to fill employee details
void PrintEmployee(Employee e); //function prototype to print employee details

int main(){
    Employee emp; //will call the constructor automatically
    //emp.Initialize(); //initialize to avoid garbage values
   // emp.printInfo(); // with no initialization or setters this will print garbage values.
    // emp.setName("John Doe");
    // emp.setId(101);
    // emp.setSalary(55000.50);
    // emp.printInfo();

    // Employee emp2("Alice Smith", 102, 60000.75); //parameterized constructor
    // emp2.printInfo();
    // emp2.setName("Marina George Zarif");
    // emp2.setId(103);
    // emp2.setSalary(65000.85);
    // emp2.printInfo();

    Employee emp3 = FillEmployee();
    PrintEmployee(emp3); 
   
    return 0;
}

Employee FillEmployee(){
    Employee e;
    e.setName("Remon Ehab");
    e.setId(104);
    e.setSalary(70000.95);
    return e; //here a bitwise copy of the object is made to return it. emp3.Name = e.Name  (SAME pointer)

}

void PrintEmployee(Employee e){ //here also a bitwise copy of the object is made to pass it.
    cout<<"Name: "<<e.getName()<<endl;
    cout<<"ID: "<<e.getId()<<endl;
    cout<<"Salary: "<<e.getSalary()<<endl;
}