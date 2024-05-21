#include <iostream>
#include <string>

using namespace std;

class person {
protected:
    string name;
    int age;
public:
    void initialize(string n, int a) {
        name = n;
        age = a;
    }
    void read() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class student : public person {
private:
    float percentage;
public:
    void initialize(string n, int a, float p) {
        person::initialize(n, a);
        percentage = p;
    }
    void read() {
        person::read();
        cout << "Enter percentage: ";
        cin >> percentage;
    }
    void display() {
        person::display();
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

// Derived class teacher
class teacher : public person {
private:
    float salary;
public:
    void initialize(string n, int a, float s) {
        person::initialize(n, a);
        salary = s;
    }
    void read() {
        person::read();
        cout << "Enter salary: ";
        cin >> salary;
    }
    void display() {
        person::display();
        cout << "Salary: $" << salary << endl;
    }
};

int main() {
    student s;
    teacher t;

    cout << "Enter student data:\n";
    s.read();

    cout << "\nEnter teacher data:\n";
    t.read();

    cout << "\nStudent Information:\n";
    s.display();

    cout << "\nTeacher Information:\n";
    t.display();

    return 0;
}
