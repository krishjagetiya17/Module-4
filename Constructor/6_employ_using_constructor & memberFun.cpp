/*6. Write a C++ program to implement a class called Employee that has private member variables for name, employee ID,
and salary. Includemember functions to calculate and set salary based on employee performance. Using of constructor*/
#include <iostream>
#include <string>
using namespace std;

class Employee {

private:
    string e_name;
    int e_id;
    int sal;
    int perf;

public:
    Employee() {

        cout << "\n\n\t Enter employee name: ";
        getline(cin, e_name);
        cout << "\n\n\t Enter employee ID: ";
        cin >> e_id;
        cout << "\n\n\t Enter employee salary: ";
        cin >> sal;
        cout << "\n\n\t Enter employee performance (/10): ";
        cin >> perf;
    }

    void calculateSalary();
    void printInfo();

};

void Employee::calculateSalary() {

    if (perf == 10) {
        sal += 5000;
    } else if (perf == 9) {
        sal += 4500;
    } else if (perf == 8) {
        sal += 4000;
    } else if (perf == 7) {
        sal += 3500;
    } else if (perf == 6) {
        sal += 3000;
    } else if (perf == 5) {
        sal += 2500;
    } else if (perf == 4) {
        sal += 2000;
    } else if (perf == 3) {
        sal += 1500;
    } else if (perf == 2) {
        sal += 1000;
    } else if (perf == 1) {
        sal += 500;
    } else {
        cout << "\n\t Invalid performance rating. No salary change.";
    }

}

void Employee::printInfo() {

    cout << "\n\t Employee Name: " << e_name;
    cout << "\n\t Employee ID: " << e_id;
    cout << "\n\t Employee Salary: " << sal;

}

int main() {
    
    Employee e;
    e.calculateSalary();
    e.printInfo();

    return 0;

}
