#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollnumber;
    double marks;
    char grade;

public:
    Student(string n, int rn, double m) {
        name = n;
        rollnumber = rn;
        marks = m;
        grade = 'F';
    }
    void calculateGrade() {
        if (marks >= 90)
            grade = 'A';
        else if (marks >= 80)
            grade = 'B';
        else if (marks >= 70)
            grade = 'C';
        else
            grade = 'F';
    }
    void displayStudentInfo() {
        cout << "Name: " << name << endl;
        cout << "Roll number: " << rollnumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << grade << endl;
    }
};
int main() {
    Student s1("Manahil", 2020, 78.9);
    Student s2("Maria", 2435, 80.0);

    s1.calculateGrade();
    s2.calculateGrade();

    s1.displayStudentInfo();
    s2.displayStudentInfo();

    return 0;
}