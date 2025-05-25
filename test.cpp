#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Person {
public:
    string name;
    string identical_num;
    string field;

    Person(string name, string id, string field) {
        this->name = name;
        this->identical_num = id;
        this->field = field;
    }

    static bool checkAndPrintDuplicate(string id, vector<Person*>& people) {
        for (int i = 0; i < people.size(); i++) {
            if (people[i]->identical_num == id) {
                cout << "this identical number previously registered" << endl;
                return true;
            }
        }
        cout << "welcome to golestan" << endl;
        return false;
    }
};

class Student : public Person {
public:
    int entering_year;

    Student(string name, string id, int year, string field)
        : Person(name, id, field) {
        entering_year = year;
    }
};

class Professor : public Person {
public:
    Professor(string name, string id, string field)
        : Person(name, id, field) {}
};

int main() {
    vector<Person*> people;

    if (!Person::checkAndPrintDuplicate("1234567890", people)) {
        people.push_back(new Student("ali", "1234567890", 1401, "computer"));
    }

    if (!Person::checkAndPrintDuplicate("1122334455", people)) {
        people.push_back(new Professor("drmohammadi", "1122334455", "computer"));
    }

    if (!Person::checkAndPrintDuplicate("1234567890", people)) {
        people.push_back(new Professor("duplicate", "1234567890", "math"));
    }

    for (int i = 0; i < people.size(); i++) {
        delete people[i];
    }

    return 0;
}
