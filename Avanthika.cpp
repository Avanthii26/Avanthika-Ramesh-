#include<iostream>
using namespace std;

class Person {
private:
    string lastName;
    string firstName;
    string zipCode;

public:
    
    Person() : lastName("X"), firstName("X"), zipCode("X") {}


    Person(const string& ln, const string& fn, const string& zip)
        : lastName(ln), firstName(fn), zipCode(zip) {}


    void display() const {
        cout << "Last Name: " << lastName << endl;
        cout << "First Name: " << firstName << endl;
        cout << "Zip Code: " << zipCode << endl;
    }
};

int main() {
    Person p1;
    Person p2("joe", "dev", "67890");

    p1.display();
    p2.display();

    return 0;
}
