#include <iostream>
#include<cstring>
using namespace std;
// int main(){
//     int arr[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}}; 
// cout << *(*(arr+1)+2);
// }
// struct Test 
// {     int a;     int b; }; 
// int main(){
//     Test t ;
// t.a = 10;
// t.b = 20;
// Test *arr[2] = {&t, &t}; 
// arr[0]->a = 30; 
// cout << arr[1]->a;

// }
// class Test 
// { 
//        public: 
//           Test() { cout << "1"; } 
//           Test(const Test &t) { cout << "2"; } 
//           ~Test() { cout << "3"; } 
// };
// int main()
// {
//     Test t1; 
//     Test t2(t1);
//     return 0;
// }
// class Person
// {
// public:
//         Person()
//         { cout << "Default constructor of Person"<<endl; }
//         Person(Person& p)
//         { cout << "Copy constructor of Person" << endl; }
//         ~Person()
//         { cout << "Destructor of Person" << endl; }
//         Person operator = (Person &per)
//         { cout << "Overloading of Person Equal Operator"<<endl;
//            return *this;
//         }
// };
// class Employee : public Person
// {
// public:
//         Employee ()
//         { cout << "Default Constructor of Employee" << endl; }
//         Employee(Employee& e)
//         { cout << "Copy Constructor of Employee" << endl; }
//         ~Employee()
//         { cout << "Destructor of Employee" << endl; }
//         Employee operator = (Employee e)
//         { cout << "Overloading of Employee Equal Operator"<<endl;
//            return (*this);
//         }
// };
// Employee FillEmp()
// {
//         Employee emp;
//         cout << "This call of Fill Employee" << endl;
//         return emp;
// }
// void PrintEmp(Employee e)
// { cout << "This call of Print Employee" << endl; }
// int main()
// {
//         Employee Emp;
//         Emp = FillEmp();
//         PrintEmp(Emp);
//         return 0;
// }
int func(int n) 
{     
      if (n <= 1) 
              return n;     
      return func(n-1) + func(n-2); 
} 
int main() 
{ 
       cout << func(6);     
       return 0; 
}