#include <iostream>
using namespace std;
#include <conio.h>
#include<cstring>
#include<string.h>

// int main(){
//     int num;
//     int rem;
//     cout<<"Enter a number"<<endl;
//     cin>>num;
//     rem = num %2;
//     if(rem !=0){
//         num *=2;
//     }
//     cout<<num;
//     return 0;
    
// }
//---------------------------------------------
// int main(){
//     int grade;
//     cout<<"Enter your grade "<<endl;
//     cin>>grade;
//     if(grade>=90){
//         cout<<"A";
//     }
//     if(grade >=80 && grade<90){
//         cout<<"B";
//     }
//     if(grade>=60 && grade<80){
//         cout<<"C";
//     }
//     // else{
//     //     cout<<"Fail";
//     // }
//     if(grade<60){
//         cout<<"Fail";
//     }
// }
//-------------------------------------------
// int main(){
//     int num;
//     cout<<"Enter a number ";
//     cin>>num;
//     if (num == 1){
//         cout<<"One";
//     }
//     else if(num ==2){
//         cout<<"TWO";
//     }
//     else if (num ==3)
//     {
//         cout<<"Three";
//     }
//     else{
//         cout<<"Out of range";
//     }
    
// }
//----------------------------------
// int main(){
//     int num;
//     cout<<"Enter a number ";
//      cin>>num;
//      switch(num){
//         case 1:
//         cout<<"One";
//         break;
//         case 2:
//         cout<<"Two";
//         break;
//         case 3:
//         cout<<"Three";
//         break;
//         default:
//         cout<<"Out of Range";
//         break;
//      }
// }
//------------------------------------------
// int main() {
//     char c = 'A';
//     cout << sizeof(c) << endl;  // Output: 1
//     int n =c;
//     cout<<sizeof(n) <<endl;
//     cout<<n;
// }
//--------------------------------------------
// void printMsg(); //prototype
// int main(){
//     printMsg();

// }
// void printMsg(){
//     cout<<"Welcome to c++";
// };
//--------------------------------------------
// int printSum(int x , int y);
// int main(){
// int a = 10;
// int b =20;
// cout<<printSum(a,b);
// };

// int printSum(int x , int y){
//     int z;
//     z=x+y;
//     return z;
// }
//--------------------------------------------

//Factorial:
// int fact(int m);
// int main(){
//     int a = 5;
//     cout<<fact(3);

// }
// int fact(int m){
//     int result = 1;
//     for(int i=m;i>=1;i--){
//         result *=i; 
//     }
//     return result;

// }
// int fact(int m){
//     int result ;
//     if(m>1){
//         result = m*fact(m-1);
//     }
//     else{
//         result =1;
//     }
//     return result;
// }
//----------------------------------------
//Sum 
// int Sum(int n);
// int main(){
//     int a=5;
//     cout<<Sum(a);

// }
// int Sum(int n){
//     int sum=0;
//     if(n>=1){
//         sum =n+Sum(n-1);
//     }
//     else{
//         return 0;
//     }
//     return sum;
// }
//------------------------------------
//Power
// int Power(int x ,int n);
// int main(){
//     int a =2;
//     int b =5;
//     cout<<Power(a,b);

// }
// int Power(int x,int n){
//     if(n==0){
//         return 1;
//     }
//     else {
//         return  x * Power(x,n-1);
//     }
    
// }
//-----------------------------
// int fib(int n) {
//     if (n == 0) return 0;
//     if (n == 1) return 1;
//     return fib(n - 1) + fib(n - 2);
// }
//--------------------------------------
// Reverse String
// void reverseString(string &s, int start, int end) {
//     if (start >= end) return;         // Base case
//     swap(s[start], s[end]);
//     reverseString(s, start + 1, end - 1); // Recursive call
// }

// int main() {
//     string str;
//     cin >> str;
//     reverseString(str, 0, str.length() - 1);
//     cout << str << endl;
// }
//------------------------------------------
// int sumDigits(int n) {
//     if (n == 0) return 0;                // Base case
//     return (n % 10) + sumDigits(n / 10); // Recursive call
// }
// int main(){
//     int a =1023;
//     cout<<sumDigits(a);
// }
//-------------------------------------------
//Sum of Array:
// int sumArray(int arr[], int n) {
//     if (n == 0) return 0;
//     return arr[n-1] + sumArray(arr, n-1);
// }
//arr[] → the array
// n → how many elements we consider
// If n = 5, it means:
// we want the sum of arr[0] + arr[1] + arr[2] + arr[3] + arr[4].
//-------------------------------------------
// max of array
// int maxArray(int arr[], int n) {
//     if (n == 1) return arr[0]; //If the array has one element, that element is the maximum.
//     int maxRest = maxArray(arr, n-1);
//     return (arr[n-1] > maxRest) ? arr[n-1] : maxRest;
// }
//-------------------------------------------
//int ar[5]; //declaration
// int main(){
//     int arr[5]={1,2,3};
//     int len= sizeof(arr) /sizeof(arr[0]);
//     int sum=0;
//     for(int i=0;i<len;i++){
//          sum+=arr[i];
//     }
//     cout<<sum;
//     for(int i=0;i<len;i++){
//          cout<<arr[i];
//     }
// }
//-----------------------------------
// int arr[3][4];
// int main(){
//     int ar[3][4];
//     int col,count,row;
//     count=1;
    // for(col=0;col<4;col++){
    //     ar[0][col]=count;
    //     cout<<ar[0][col];
    //     count++;
    // }

    //  for(col=0;col<4;col++){
    //     ar[1][col]=count;
    //     cout<<ar[1][col];
    //     count++;
    // }
    //  for(col=0;col<4;col++){
    //     ar[2][col]=count;
    //     cout<<ar[2][col];
    //     count++;
    // }
    //orrrrrrrrrrrr
//     for(row=0;row<3;row++){
//         for(col=0;col<4;col++){
//             ar[row][col]=count;
//             count++;
//         }
//     }

//     for(row=0;row<3;row++){
//         for(col=0;col<4;col++){
//             cout<<ar[row][col]<<" ";
//         }
//         cout<<endl;
//     }
// char letter ='a';
// int result = isalnum(letter);
// cout << result; 
// int result = isalpha(letter);
// cout << result; 
// char letter1='9';
// int result = isdigit(letter1); //0
// cout << result; 

// int result = isxdigit(letter);
// cout << result; 

// int result = isprint(letter);
// cout << result;
// int result = toupper(letter);
// cout << result;
//}
//---------------------------------------------------
// int main(){
    // char c1;
    // char c2;
    // char c3;
    // cin>>c1;
    // cin>>c2;
    // cin>>c3;

    // c1=getche();
    // c2=getche();

    // char str[]="abc";
    // str[0]='a';
    // str[1]='b';
    // str[2]='c';
    // for(int i =0;i<3;i++){
    //     cout<<str[i];
    // }
    // cout<<str<<endl;
    // cout<<sizeof(str);//4 

    //element by element:
    // int str[4]; //int str[4]={'i','t','i'};
    // str[0]='i';
    // str[1]='t';
    // str[2]='i';
    // str[3]='\0';

    // cout<<str<<endl; //unsafe garbage
    // cout<<sizeof(str); //16
    //-----------------
    // char str[]="ali";
    // cout<<str<<endl; 
    // cout<<sizeof(str); //4
    //-----------------
    // char str1[]="Hello";
    // char str2[]="World";
    //strcpy(str1,str2); //str1=str2;
    // strcat(str1,str2); //str1 = helloworld str2=world
    // cout<<str1<<endl;
    // cout<<str2<<endl;
    // cout<<strlen(str1);
//}
//--------------------------------------------------------------

// int main(){
//     int x =42;
//     int* p =&x;
//     cout<<&x<<endl;
//     cout<<p<<endl;
//     cout<<*p<<endl;
//     p++;
//     cout<<p<<endl;
//     p+=4;
//     cout<<p<<endl;
    
// }
//------------------------------------------------------------
// void swap(int &a ,int &b); //call by refrence
// void swap (int *a , int *b);
// int main(){
//     int x = 10;
//     int y=5;
//     swap(&x,&y);
//     cout<<x<<endl;
//     cout<<y<<endl;

// }
// void swap(int &a ,int &b){ //call by refrence
//     int temp;
//     temp=a;
//     a=b;
//     b=temp;
// }
// void swap(int *x, int *y){
//     int temp = *x;
//     *x=*y;
//     *y=temp;
// }
// ---------------------------------
// int main(){
//     int arr[3] = {10, 20, 30};
//     int *p = arr;

//     cout << *p << " ";
//     cout << *(p + 1) << " ";
//     cout << *(p + 2);


// }
//------------------------------
// void increment(int *arr, int size) {
//     for(int i=0; i<size; i++) {
//         arr[i] += 1;
//     }
//      for(int i=0; i<size; i++) {
//         cout<<arr[i] ;
//     }
// }
// int main() {
//     int a[3] = {1, 2, 3};
//     increment(a, 3);
// }
//-----------------------------------
// int increase(int &a) {
//     a += 10;
//     return a * 2;
// }

// int main() {
//     int x = 5;
//     int result = increase(x);
//     cout << x << " " << result; //15 30
// }
//------------------------------------------
// int main(){
//     int ar[10];
//     int* ptr;
//     int sum =0,i;
//     ptr=ar;
//     for(i=0;i<10;i++){
//         cin>>*(ptr+i);
//     }
//      for(i=0;i<10;i++){
//         sum+=*(ptr+i);
//     }
//     cout<<sum;
// }
//-------------------------------------
// int main() {
//     int *p = new int;   // allocate memory
//     *p = 50;            // store 50 in it

//     cout << *p;         // prints 50

//     delete p;           // free memory
// }
//-----------------------------------
// int main(){
//     int n;
// cin >> n;

// int *arr = new int[n];   // size chosen at runtime!

// for (int i = 0; i < n; i++)
//     arr[i] = i + 1;

// for (int i = 0; i < n; i++)
//     cout << arr[i] << " "; 

// }
//-----------------------------------




