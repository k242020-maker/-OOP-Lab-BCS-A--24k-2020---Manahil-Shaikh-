#include<iostream>
using namespace std;
class Employee {
    static int nextId;
public:
    int id;
    string name, designation;
    int hoursWorked;
    float salary;

    Employee(string name, string designation, int hours = 0)
        : name(name), designation(designation), hoursWorked(hours), salary(0) {
        id = ++nextId;
    }

    void display() const {
        cout << "ID: " << id << " | Name: " << name << " | Designation: " << designation
             << " | Hours: " << hoursWorked << " | Salary: " << salary << endl;
    }
};
int Employee::nextId = 0;

class AdminPanel {
    Employee* employees[100];
    int count = 0;

public:
    ~AdminPanel() {
        for (int i = 0; i < count; i++) delete employees[i];
    }

    void addEmployee(string name, string designation, int hours = 0) {
        employees[count++] = new Employee(name, designation, hours);
        cout << "Employee added.\n";
    }

    void markAttendance(int id, int hours) {
        for (int i = 0; i < count; i++)
            if (employees[i]->id == id) {
                employees[i]->hoursWorked += hours;
                cout << "Attendance marked.\n";
                return;
            }
        cout << "Employee not found.\n";
    }

    void calculateSalary(int id, float rate) {
        for (int i = 0; i < count; i++)
            if (employees[i]->id == id) {
                employees[i]->salary = employees[i]->hoursWorked * rate;
                cout << "Salary calculated.\n";
                return;
            }
        cout << "Employee not found.\n";
    }

    void displayAll() const {
        for (int i = 0; i < count; i++) employees[i]->display();
    }
};
