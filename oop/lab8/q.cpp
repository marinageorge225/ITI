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

    static char schoolName[];
    static int count;

    public:
    Student() {
        Id = 0;
        gradeCount = 5;
        Name = new char[50];
        strcpy(Name, "no name yet");
        Grades = new float[gradeCount];
        for (int i = 0; i<gradeCount; i++)
            Grades[i] = 0;
        count++;}

    Student(int id,const char* name, float* grades, int count = 5) {
        Id = id;
        gradeCount = count;
        Name = new char[strlen(name) + 1];
        strcpy(Name, name);
        Grades = new float[gradeCount];
        for (int i = 0; i < gradeCount; i++){
            Grades[i] = grades[i];}
        count++;
    }

    Student(const Student& s) {
    Id = s.Id;
    gradeCount = s.gradeCount;
    Name = new char[strlen(s.Name) + 1];
    strcpy(Name, s.Name);
    Grades = new float[gradeCount];
    for (int i = 0; i < gradeCount; i++){
        Grades[i] = s.Grades[i];}
        count++;
}

    Student& operator=(const Student& s){
        if(this != &s){
            Id = s.Id;
            gradeCount= s.gradeCount;
            delete[] Name;
            Name = new char[strlen(s.Name)+1];
            strcpy(Name, s.Name);
            delete[] Grades;
            Grades = new float[gradeCount];
            for(int i=0; i<gradeCount;i++){
                Grades[i]=s.Grades[i];
            }
        }
        return*this;
    };

    Student operator+(const Student& s){
        Student temp(*this);
        for(int i=0; i <gradeCount;i++){
            temp.Grades[i] += s.Grades[i];
        }
        return temp;
    };

    Student operator+(int Value){
        Student temp(*this);
        for(int i=0; i <gradeCount;i++){
            temp.Grades[i] += Value;
        }
        return temp;

    };

    friend Student operator+(int value, const Student& s);

    
    Student operator+(const char* str) {
        Student temp(*this); 
        char* newName = new char[strlen(temp.Name) + strlen(str) + 1];
        strcpy(newName, temp.Name); 
        strcat(newName, str);       
        delete[] temp.Name;         
        temp.Name = newName;        
        return temp;
    }

    friend Student operator+(const char* str, const Student& s);

   
    Student operator++ (int d) { //s++
    Student temp(*this);    
    this->Id++;            
    return temp;          
}

   Student& operator++() { //++s
    this->Id++;    
    return *this;   
}

    int operator== (const Student& s){
        return (Id == s.Id) ? 1 : 0;
}

    operator int() {
        return Id; }

    operator char*()  {
        return Name;
}

    ~Student() {
        delete[] Name;
        delete[] Grades;
        count--;
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
        cout << "School Name: " << schoolName << endl;
        for (int i = 0; i < gradeCount; i++){
            cout << Grades[i] << " ";}
        cout << endl;
    };


    float sumGrades() {
        float sum = 0;
        for (int i = 0; i < gradeCount; i++)
            sum += Grades[i];
        return sum;
    }
    
    
    static void printInfo() {
        cout << "School Name: " << schoolName << endl;
        cout << "Number of Student Objects: " << count << endl;
}

};

Student operator+(int value, const Student& s) {
    Student temp(s);       
    for (int i = 0; i < temp.getGradeCount(); i++)
        temp.setGrade(i, temp.getGrade(i) + value); 
    return temp;           
}

Student operator+(const char* str, const Student& s) {
    Student temp(s);                       
    char* newName = new char[strlen(str) + strlen(temp.getName()) + 1];
    strcpy(newName, str);                  
    strcat(newName, temp.getName());       
    delete[] temp.Name;                    
    temp.Name = newName;                   
    return temp;                           
};

    char Student::schoolName[] = "ITI";
    int Student::count = 0;

int main() {
   Student s1, s2;

    cout << "Fill s1:\n";
    s1.fillStudent();
    cout << "\nFill s2:\n";
    s2.fillStudent();
    // cout << "\nBefore assignment:\n";
    // cout << "s1:\n"; 
    s1.printStudent();
    // cout << "s2:\n"; 
    s2.printStudent();

    // s2 = s1;
    // cout << "\nAfter s2 = s1:\n";
    // cout << "s1:\n"; 
    // s1.printStudent();
    // cout << "s2:\n"; 
    // s2.printStudent();

    // cout << "\n--- Grades After Adding s1 + s2 ---\n";
    // Student s3 = s1 + s2; 
    // s3.printStudent();

    // s2 = s1 + 100; 
    // cout << "\nAfter s1 + 100:\n";
    // s2.printStudent();

    // Student s4 = 100 + s1;
    // cout << "\nAfter 100 + s1:\n";
    // s4.printStudent();

    // s2 = s1 + " Mohamed";
    // cout << "\nAfter s1 + \"Mohamed\":\n";
    // s2.printStudent();

    // s2 = "Mohamed " + s1;
    // cout << "\nAfter \"Mohamed\" + s1:\n";
    // s2.printStudent();


    // cout << "Before: " << s1.getId() << endl;
    // s1++;
    // cout << "After s1++: " << s1.getId() << endl;


    // cout << "Before: " << s1.getId() << endl;
    // s2 = ++s1;
    // cout << "After ++s1: " << s1.getId() << endl;
    // cout << "Returned object ID: " << s2.getId() << endl;

    // int result = (s1 == s2);   
    // if (result == 1)
    //     cout << "IDs are equal";
    // else
    //     cout << "IDs are NOT equal";

    
    // int studentId = (int)s1;       
    // char* studentName = (char*)s1; 

    // cout << "ID: " << studentId << endl;
    // cout << "Name: " << studentName << endl;

    
    Student::printInfo();

    return 0;
}
