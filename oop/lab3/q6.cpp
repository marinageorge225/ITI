#include <iostream>
using namespace std;
int sumOfDigits(int number) ;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    int result = sumOfDigits(num);
    cout << "The sum of digits of " << num << " is:" << result << endl;
    return 0;
}
int sumOfDigits(int number) {
    int sum = 0;
    if (number < 0)
        number = -number;
    while (number > 0) {
        int digit = number%10; 
        sum += digit;           
        number = number / 10; 
    }

    return sum;
}