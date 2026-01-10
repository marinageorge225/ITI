#include <iostream>
#include <limits>
using namespace std;

struct Student {
    int Id;
    char Name[50];
    float Grades[5];};

void fillStudent(Student &s);
void PrintStudent(Student &s);
float SumGrades(Student &s);

int main() {
    cout << "1 Student: " << endl;
    Student s1;
    fillStudent(s1);
    PrintStudent(s1);
    cout << "Sum of Grades: " << SumGrades(s1) << endl;

    cout << " 5 Students: " << endl;
    Student s5[5];
    for (int i = 0; i < 5; i++) {
        cout << "\nEnter Student" << i + 1 << " :" << endl;
        fillStudent(s5[i]);}
    for (int i = 0; i < 5; i++) {
        cout << "\nStudent" << i + 1 << ":" << endl;
        PrintStudent(s5[i]);
        cout << "Sum of Grades: "<< SumGrades(s5[i]) << endl;}
    cout << "N Students" << endl;
    int n;
    cout << "Enter number of students: ";
    cin>>n;
    Student *students = new Student[n];
    for (int i = 0; i < n; i++) {
        cout << "\nEnter Student " << i + 1 << " :" << endl;
        fillStudent(students[i]);}
    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << ":" << endl;
        PrintStudent(students[i]);
        cout << "Sum of Grades: " << SumGrades(students[i]) << endl;}
    delete[] students;
    return 0;
}

void fillStudent(Student &s) {
    cout << "Enter Student ID: ";
    cin >> s.Id;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Enter Student Name: ";
    cin.getline(s.Name, 50);
    cout << "Enter 5 Grades:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Grade " << (i + 1) << ": ";
        cin >> s.Grades[i];
    }}

void PrintStudent(Student &s) {
    cout << "Student ID: " << s.Id << endl;
    cout << "Student Name: " << s.Name << endl;
    cout << "Grades: ";
    for (int i = 0; i < 5; i++) cout << s.Grades[i] << " ";
    cout << endl;}

float SumGrades(Student &s) {
    float sum = 0;
    for (int i = 0; i < 5; i++) 
    {sum += s.Grades[i];
    }
    return sum;
}
