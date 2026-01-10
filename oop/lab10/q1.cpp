#include <iostream>
#include <string>
#include <cstring>
using namespace std;
class Person{
    int Id;
    char Name[50];
    public:
    Person(){
        Id=0;
        strcpy(Name,"Unknown");
    }

    Person(int id, const char* name){
        Id=id;
        strcpy(Name,name);
    }
    void SetId(int id){
        Id=id;
    }
    void SetName(const char* name){
        strcpy(Name,name);
    }
    int GetId(){
        return Id;
    }
    const char* GetName(){
        return Name;
    }

    void Print(){
        cout<<"Id: "<<Id<<endl;
        cout<<"Name: "<<Name<<endl;
    }

};

class Employee : public Person{
    float Salary;
    public:
    Employee() :Person(){
        Salary = 0;
    }
    Employee(int id,const char* name ,float salary) : Person(id,name){
        Salary = salary;
    }

    void SetSalary(float salary){
        Salary = salary;
    }
    float GetSalary(){
        return Salary;
    }
    void Print(){
        Person::Print();
        cout<<"Salary: "<<Salary<<endl;
    }

};

class Customer :public Person{
    char ProductName[50];
    public:
    Customer():Person(){
        strcpy(ProductName,"Unknown");
    }

    Customer(int id,const char* name,const char* productName) : Person(id,name){
        strcpy(ProductName,productName);
    }
    void setProductName(const char* productname){
        strcpy(ProductName,productname);
    }
    char* getProductName(){
        return ProductName;
    }
    void Print(){
        Person::Print();
        cout<<"Product Name: "<<ProductName<<endl;
    };

};

int main(){
    Person p1(1,"Marina");
    p1.Print();
    cout<<"----------------------"<<endl;

    Employee e1(2,"Rama",50000);
    e1.Print();
    cout<<"----------------------"<<endl;

    Customer c1(3,"Nada","Iphone");
    c1.Print();
}