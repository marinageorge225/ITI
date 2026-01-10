#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int students = 3;
    int subjects = 4;
    int grade[students][subjects];

    for(int i =0;i<students;i++){
        cout<<"Enter marks for students number"<<i+1<<endl;
        for(int j=0;j<subjects;j++){
            cout<<"Subject number "<<j+1<<": ";
            cin>>grade[i][j];}}

    int Sum[students] = {0};
    for(int i =0;i<students; i++) {
        for(int j=0;j<subjects; j++) {
            Sum[i]+=grade[i][j];}
    }
    double Avg[subjects] = {0};
    double sum = 0;
    for(int j = 0; j<subjects; j++) {
        for(int i = 0;i<students; i++) {
        sum += grade[i][j];}
        Avg[j] = sum / students; }

    int max = 0;
    for(int i = 1; i < students; i++) {
        if(Sum[i] > Sum[max]) {
            max = i;}}

    cout << "\nSum of each student:\n";
    for(int i = 0; i < students; i++) {
        cout << "Student " << i+1 << ": " << Sum[i] << endl;}

    cout << "\nAverage of each subject:\n";
    for(int j = 0; j < subjects; j++) {
        cout << "Subject " << j+1 <<Avg[j] << endl;}
    cout << "\nStudent ranked 1st in class: Student " << max+1 << "with total marks " <<Sum[max] << endl;

    return 0;
}
