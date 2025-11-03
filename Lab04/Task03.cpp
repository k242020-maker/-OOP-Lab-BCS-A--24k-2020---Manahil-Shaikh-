#include <iostream>
using namespace std;
struct Doctor {
    string name;
    string department;
};

class Patient {
    static int nextId;
public:
    int id;
    string name;
    int age;
    string disease;
    Doctor doctorAssigned;

    Patient(string name, int age, string disease, Doctor doc = {"Not Assigned", "None"})
        : name(name), age(age), disease(disease), doctorAssigned(doc) {
        id = ++nextId;
    }

    void display() const {
        cout << "ID: " << id << " | Name: " << name << " | Disease: " << disease
             << " | Doctor: " << doctorAssigned.name << " (" << doctorAssigned.department << ")\n";
    }
};
int Patient::nextId = 0;

class Hospital {
    Patient* patients[100];
    int count = 0;

public:
    ~Hospital() {
        for (int i = 0; i < count; i++) delete patients[i];
    }

    void addPatient(string name, int age, string disease, Doctor doc = {"Not Assigned", "None"}) {
        patients[count++] = new Patient(name, age, disease, doc);
        cout << "Patient added.\n";
    }

    void removePatient(int id) {
        for (int i = 0; i < count; i++) {
            if (patients[i]->id == id) {
                delete patients[i];
                for (int j = i; j < count - 1; j++) patients[j] = patients[j + 1];
                count--;
                cout << "Patient removed.\n";
                return;
            }
        }
        cout << "Patient not found.\n";
    }

    void displayAll() const {
        for (int i = 0; i < count; i++) patients[i]->display();
    }

    void searchPatient(int id) const {
        for (int i = 0; i < count; i++)
            if (patients[i]->id == id) { patients[i]->display(); return; }
        cout << "Patient not found.\n";
    }
};
