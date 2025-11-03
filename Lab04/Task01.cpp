#include <iostream>
#include <string>
using namespace std;

class User {
    static int nextId;
public:
    int id;
    string name, password, role;

    User(string name, string password, string role = "Guest") {
        id = ++nextId;
        this->name = name;
        this->password = isValid(password) ? password : "default@123";
        this->role = role;
    }

    static bool isValid(string pass) {
        if (pass.length() < 6) return false;
        for (char c : pass) if (!isalnum(c)) return true;
        return false;
    }

    void display() const {
        cout << "ID: " << id << " | Name: " << name << " | Role: " << role << endl;
    }
};
int User::nextId = 0;

class Admin {
    User* users[100];
    int count = 0;

public:
    ~Admin() {
        for (int i = 0; i < count; i++) delete users[i];
    }

    void addUser(string name, string pass, string role = "Guest") {
        users[count++] = new User(name, pass, role);
        cout << "User added.\n";
    }

    void removeUser(int id) {
        for (int i = 0; i < count; i++) {
            if (users[i]->id == id) {
                delete users[i];
                for (int j = i; j < count - 1; j++) users[j] = users[j + 1];
                count--;
                cout << "User removed.\n";
                return;
            }
        }
        cout << "User not found.\n";
    }

    void displayAll() const {
        if (count == 0) cout << "No users.\n";
        for (int i = 0; i < count; i++) users[i]->display();
    }

    void searchUser(int id) const {
        for (int i = 0; i < count; i++)
            if (users[i]->id == id) { users[i]->display(); return; }
        cout << "User not found.\n";
    }

    void changeRole(int id, string role) {
        for (int i = 0; i < count; i++)
            if (users[i]->id == id) { users[i]->role = role; cout << "Role updated.\n"; return; }
        cout << "User not found.\n";
    }
};
