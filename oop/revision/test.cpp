#include <iostream>
using namespace std;

// class Complex {
//     int Real, Imag;
//     static int Count;
// public:
//     Complex() { Real = Imag = 0; Count++; }
//     Complex(int m) { Real = Imag = m; Count++; }
//     Complex(int m, int n) { Real = m; Imag = n; Count++; }
//     ~Complex() { Count--; }
//     void SetReal(int r) { Real = r; }
//     void SetImag(int i) { Imag = i; }
//     int GetReal() { return Real; }
//     int GetImag() { return Imag; }
//     static int GetCount() { return Count; }
// };

// int Complex::Count = 0;

// int main() { 
//     cout << "Initial Count: " << Complex::GetCount() << endl; //call by class name
    
//     Complex C1;
//     Complex C2(7);
//     Complex C3(4, 9);
    
//     cout << "After creating 3 objects: " << Complex::GetCount() << endl;
    
//     Complex* ptr = new Complex(2, 3);
//     cout << "After dynamic allocation: " << Complex::GetCount() << endl;
    
//     delete ptr;
//     cout << "After delete: " << Complex::GetCount() << endl;
    
//     return 0;
// }
//-------------------------------------------------------------
        // void swap1(int x ,int y){ // pass by value
        //     int temp;
        //     temp = x;
        //     x = y;
        //     y = temp;
        // };

        // void swap2(int &x ,int &y){ // pass by reference
        //     int temp;
        //     temp = x;
        //     x = y;
        //     y = temp;
        // };  

        // void swap3(int *x ,int *y){// pass by address
        //     int temp;
        //     temp = *x;
        //     *x = *y;
        //     *y = temp;
        // };

        // int main(){
        //     int a = 10;
        //     int b = 20;

        //     cout<<"Before swap1: a = "<<a<<", b = "<<b<<endl;
        //     swap1(a,b);
        //     cout<<"After swap1: a = "<<a<<", b = "<<b<<endl;
        //     a = 10;
        //     b = 20;
        //     cout<<"Before swap2: a = "<<a<<", b = "<<b<<endl;
        //     swap2(a,b); // pass by reference the actual variables will be swapped
        //     cout<<"After swap2: a = "<<a<<", b = "<<b<<endl;
        //     a = 10;
        //     b = 20;
        //     cout<<"Before swap3: a = "<<a<<", b = "<<b<<endl;
        //     swap3(&a,&b); // pass by address the actual variables will be swapped
        //     cout<<"After swap3: a = "<<a<<", b = "<<b<<endl;

        //     return 0;
        // }
        //-------------------------------------------------------------
        // void fun(int x) {
        //  x = x + 5;
        //     }
        //     int main() {
        //     int a = 10;
        //     fun(a);
        //     cout << a; // Output will be 10 because 'a' is passed by value
        //     return 0;
        //     }
        //-------------------------------------------------------------
        //         void fun(int &x) {
        //     x = x + 5;
        // }
        // int main() {
        //     int a = 10;
        //     fun(a);
        //     cout << a;
        // }
        //-------------------------------------------------------------
        // void fun(int *p) {
        //     *p = *p + 5;
        // }
        // int main() {
        //     int a = 10;
        //     fun(&a);
        //     cout << a;
        // }
        //-------------------------------------------------------------
        // void modify(int *p) {
        //     int b = 20;
        //     p = &b;
        // }

        // int main() {
        //     int a = 10;
        //     int *ptr = &a;
        //     modify(ptr);
        //     cout << *ptr; // Output will be 10 because the pointer 'ptr' in main still points to 'a' it is call by value
        // }
        // void modify(int *&p) { // pass by reference
        //     int b = 20;
        //     p = &b;
        // }

        // int main() {
        //     int a = 10;
        //     int *ptr = &a;
        //     modify(ptr);
        //     cout << *ptr;
        // }
        //     int main() {
        //     int a = 5;
        //     int *p = &a;
        //     int *q = p;
        //     *q = 15;
        //     cout << a; // Output will be 15 because both pointers point to the same memory location
        // }

        // int* fun() { // returning address of local variable
        //     int a = 50;
        //     return &a; 
        // }
        //**** a is a local variable
        // It is stored on the stack
        // When the function ends → ALL local variables are destroyed
        // So a no longer exists*****
        /*
        Correct ways to fix it
            1. Make the variable static
            int* fun() {
                static int a = 50;  // stays in memory after function ends
                return &a;
            }

            2. Allocate dynamically
            int* fun() {
                int* a = new int(50); // allocated on heap
                return a;
            }*/
                

        // int main() {
        //     int *ptr = fun(); // ptr points to destroyed memory
        //     cout << *ptr;
        // }

        // void change(int *p) {
        //     (*p)++;
        //     p++;
        // }

        // int main() {
        //     int arr[3] = {10, 20, 30};
        //     int *ptr = arr;
        //     change(ptr);
        //     cout << arr[0] << " " << arr[1]; // Output will be 11 20
        // }

        // void shift(int*& p) {
        //     p++;
        // }

        // int main() {
        //     int arr[] = {3, 6, 9};
        //     int *ptr = arr;
        //     shift(ptr);
        //     cout << *ptr; // Output will be 6
        // }

            //   void fun(int *p, int *q) {
            //     *p = *q;
            //     p = q;
            //     *p = 50;
            // }

            // int main() {
            //     int a = 10, b = 20;
            //     fun(&a, &b);
            //     cout << a << " " << b; // Output will be 20 50
            // }

            // void update(int *p, int &x) {
            //     *p = *p + 10;
            //     x = x + 20;
            // }

            // int main() {
            //     int a = 5, b = 7;
            //     update(&a, b);
            //     cout << a << " " << b; // Output will be 15 27
            // }


            //     void test(int arr[]) {
            //     arr[0] = 50;
            //     arr = arr + 1; 
            //     arr[0] = 100;
            // }

            // int main() {
            //     int arr[3] = {1, 2, 3};
            //     test(arr);
            //     cout << arr[0] << " " << arr[1]; // Output will be 50 100
            // }

            // void foo(int *&p) {
            //     *p = 99;
            //     p++;
            //     *p = 77;
            // }

            // int main() {
            //     int arr[3] = {1, 2, 3};
            //     int *ptr = arr;
            //     foo(ptr);
            //     cout << arr[0] << " " << arr[1] << " " << arr[2]; // Output will be 99 77 3
            // }



