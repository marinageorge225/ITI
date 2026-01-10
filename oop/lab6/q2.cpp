#include <iostream>
#include <limits>
#include <cstring>
using namespace std;
class Student {
    private:
    int Id;
    char* Name;
    float* Grades;
    int gradeCount;
    public:
    Student() {
        Id = 0;
        gradeCount = 5;
        Name = new char[50];
        strcpy(Name, "no name yet");
        Grades = new float[gradeCount];
        for (int i = 0; i<gradeCount; i++)
            Grades[i] = 0;}
    Student(int id,char* name, float* grades, int count = 5) {
        Id = id;
        gradeCount = count;
        Name = new char[strlen(name) + 1];
        strcpy(Name, name);
        Grades = new float[gradeCount];
        for (int i = 0; i < gradeCount; i++)
            Grades[i] = grades[i];}

    Student(Student& s) {
        Id = s.Id;
        gradeCount = s.gradeCount;
        Name = new char[strlen(s.Name) + 1];
        strcpy(Name, s.Name);
        Grades = new float[gradeCount];
        for (int i = 0; i < gradeCount; i++)
            Grades[i] = s.Grades[i];}
    ~Student() {
        delete[] Name;
        delete[] Grades;
    }
    void setId(int id) {
        Id = id;
    };
    void setName(const char* name) {
        delete[] Name;
        Name = new char[strlen(name) + 1];
        strcpy(Name, name);}
    void setGrade(int index, float value) {
        if (index >= 0 && index < gradeCount){
            Grades[index] = value;}
        };
    int getId() {
        return Id; };

    char* getName() {
        return Name;
    };
    float getGrade(int index){ 
        return (index >= 0 && index < gradeCount) ? Grades[index] : -1; };
    int getGradeCount(){ 
        return gradeCount; };

        void fillStudent() {
        cout << "Enter Student ID: ";
        cin >> Id;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        char temp[50];
        cout << "Enter Student Name: ";
        cin.getline(temp, 50);
        setName(temp);
        cout << "Enter 5 Grades:\n";
        for (int i = 0; i < gradeCount; i++) {
            cout << "Grade " << i + 1 << ": ";
            cin >> Grades[i];
        }};
    void printStudent() {
        cout << "Student ID: " << Id << endl;
        cout << "Student Name: " << Name << endl;
        cout << "Grades: ";
        for (int i = 0; i < gradeCount; i++)
            cout << Grades[i] << " ";
        cout << endl;
    }
    float sumGrades() {
        float sum = 0;
        for (int i = 0; i < gradeCount; i++)
            sum += Grades[i];
        return sum;
    }
};
int main() {
    cout << "1 Student: " << endl;
    Student s1;
    s1.fillStudent();
    s1.printStudent();
    cout << "Sum of Grades: " << s1.sumGrades() << endl;

    cout << "5 Students: " << endl;
    Student s5[5];
    for (int i = 0; i < 5; i++) {
        cout << "Enter Student " << i + 1 << " :" << endl;
        s5[i].fillStudent();}
    for (int i = 0; i < 5; i++) {
        cout << "Student " << i + 1 << ":" << endl;
        s5[i].printStudent();
        cout << "Sum of Grades: " << s5[i].sumGrades() << endl;}
    cout << "\nN Students" << endl;
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student* students = new Student[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter Student " << i + 1 << " :" << endl;
        students[i].fillStudent();
    }
    for (int i = 0; i < n; i++) {
        cout << "Student " << i + 1 << ":" << endl;
        students[i].printStudent();
        cout << "Sum of Grades: " << students[i].sumGrades() << endl;
    }
    delete[] students;
    return 0;
}
