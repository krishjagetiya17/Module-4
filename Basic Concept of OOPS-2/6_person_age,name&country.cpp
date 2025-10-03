/*6. Write a C++ program to create a class called Person that 
has private member variables for name, age and country. 
Implement member functions to set and get the values of 
these variables. 
*/

#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    string name;
    int age;
    string country;

public:
    // function to set the name
    void setName(string n) {
        name = n;
    }

    // function to get the name
    string getName() {
        return name;
    }

    // function to set the age
    void setAge(int a) {
        age = a;
    }

    // function to get the age
    int getAge() {
        return age;
    }

    // function to set the country
    void setCountry(string c) {
        country = c;
    }

    // function to get the country
    string getCountry() {
        return country;
    }
};

int main() {
    // Create an object of the Person class
    Person person;

    // Set the values of the member variables
    person.setName("Krish Jagetiya ");
    person.setAge(18);
    person.setCountry("INDIA ");

    // Get and display 
    cout << "Name: " << person.getName() << endl;
    cout << "Age: " << person.getAge() << endl;
    cout << "Country: " << person.getCountry() << endl;

    return 0;
}
