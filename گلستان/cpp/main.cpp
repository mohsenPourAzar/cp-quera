#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <map>
#include <iomanip>

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

    virtual ~Person() {}

    static bool checkAndPrintDuplicate(string id, vector<Person*>& people) {
        for (auto p : people) {
            if (p->identical_num == id) {
                cout << "this identical number previously registered" << endl;
                return true;
            }
        }
        cout << "welcome to golestan" << endl;
        return false;
    }

    static class Student* findStudentByID(string id, const vector<Person*>& people);
    static class Professor* findProfessorByID(string id, const vector<Person*>& people);
};

class Student : public Person {
public:
    string entering_year;

    Student(string name, string id, string year, string field)
        : Person(name, id, field) {
        entering_year = year;
    }
};

class Professor : public Person {
public:
    Professor(string name, string id, string field)
        : Person(name, id, field) {}
};

class Class {
public:
    string name;
    string class_id;
    string field;
    Professor professor;
    vector<Student> students;
    map<string, int> final_marks;

    Class(string name, string id, string field, Professor prof)
        : name(name), class_id(id), field(field), professor(prof) {}

    static bool checkAndPrintDuplicate(string id, vector<Class*>& classes) {
        for (auto c : classes) {
            if (c->class_id == id) {
                cout << "this class id previously used" << endl;
                return true;
            }
        }
        cout << "class added successfully" << endl;
        return false;
    }

    static Class* findClassByID(string id, const vector<Class*>& classes) {
        for (auto c : classes) {
            if (c->class_id == id) {
                return c;
            }
        }
        return nullptr;
    }

    bool isStudentRegistered(string student_id) {
        for (auto& s : students) {
            if (s.identical_num == student_id) {
                return true;
            }
        }
        return false;
    }

    bool hasProfessor() {
        return professor.identical_num != "0000000000";
    }

    bool addStudent(Student* student) {
        if (student->field != field) {
            cout << "student field is not match" << endl;
            return false;
        }
        if (isStudentRegistered(student->identical_num)) {
            cout << "student is already registered" << endl;
            return false;
        }
        students.push_back(*student);
        cout << "student added successfully to the class" << endl;
        return true;
    }

    bool addProfessor(Professor* prof) {
        if (prof->field != field) {
            cout << "professor field is not match" << endl;
            return false;
        }
        if (hasProfessor()) {
            cout << "this class has a professor" << endl;
            return false;
        }
        professor = *prof;
        cout << "professor added successfully to the class" << endl;
        return true;
    }

    bool setFinalMark(Professor* prof, Student* student, int mark) {
        if (professor.identical_num != prof->identical_num) {
            cout << "professor class is not match" << endl;
            return false;
        }
        if (!isStudentRegistered(student->identical_num)) {
            cout << "student did not registered" << endl;
            return false;
        }
        final_marks[student->identical_num] = mark;
        cout << "student final mark added or changed" << endl;
        return true;
    }

    void printStudentMark(const string& student_id) {
        if (!isStudentRegistered(student_id)) {
            cout << "student did not registered" << endl;
            return;
        }
        if (final_marks.find(student_id) == final_marks.end()) {
            cout << "None" << endl;
            return;
        }
        cout << final_marks[student_id] << endl;
    }

    void printMarkList() {
        if (!hasProfessor()) {
            cout << "no professor" << endl;
            return;
        }
        if (students.empty()) {
            cout << "no student" << endl;
            return;
        }
        for (auto& student : students) {

            if (final_marks.find(student.identical_num) != final_marks.end()) {
                cout << final_marks[student.identical_num] << " ";
            } else {
                cout << "None" << endl;
            }
        }
        cout << endl;
    }

    void collectMarksByProfessor(const string& prof_id, vector<int>& marks) {
        if (professor.identical_num != prof_id) return;
        for (auto& entry : final_marks) {
            marks.push_back(entry.second);
        }
    }

    void collectMarksOfStudent(const string& student_id, vector<int>& marks) {
        if (final_marks.find(student_id) != final_marks.end()) {
            marks.push_back(final_marks[student_id]);
        }
    }
};

Student* Person::findStudentByID(string id, const vector<Person*>& people) {
    for (auto p : people) {
        Student* s = dynamic_cast<Student*>(p);
        if (s && s->identical_num == id) return s;
    }
    return nullptr;
}

Professor* Person::findProfessorByID(string id, const vector<Person*>& people) {
    for (auto p : people) {
        Professor* prof = dynamic_cast<Professor*>(p);
        if (prof && prof->identical_num == id) return prof;
    }
    return nullptr;
}

int main() {
    vector<Person*> people;
    vector<Class*> classes;

    while (true) {
        string order;
        getline(cin, order);

        istringstream iss(order);
        vector<string> tokens;
        string word;
        while (iss >> word) tokens.push_back(word);
        if (tokens.empty()) continue;

        if (tokens[0] == "register_student") {
            if (!Person::checkAndPrintDuplicate(tokens[2], people))
                people.push_back(new Student(tokens[1], tokens[2], tokens[3], tokens[4]));
        }
        else if (tokens[0] == "register_professor") {
            if (!Person::checkAndPrintDuplicate(tokens[2], people))
                people.push_back(new Professor(tokens[1], tokens[2], tokens[3]));
        }
        else if (tokens[0] == "make_class") {
            if (!Class::checkAndPrintDuplicate(tokens[2], classes)) {
                Professor dummy("none", "0000000000", "dummy");
                classes.push_back(new Class(tokens[1], tokens[2], tokens[3], dummy));
            }
        }
        else if (tokens[0] == "add_student") {
            Student* student = Person::findStudentByID(tokens[1], people);
            Class* class_obj = Class::findClassByID(tokens[2], classes);
            if (!student) { cout << "invalid student" << endl; continue; }
            if (!class_obj) { cout << "invalid class" << endl; continue; }
            class_obj->addStudent(student);
        }
        else if (tokens[0] == "add_professor") {
            Professor* prof = Person::findProfessorByID(tokens[1], people);
            Class* class_obj = Class::findClassByID(tokens[2], classes);
            if (!prof) { cout << "invalid professor" << endl; continue; }
            if (!class_obj) { cout << "invalid class" << endl; continue; }
            class_obj->addProfessor(prof);
        }
        else if (tokens[0] == "student_status") {
            Student* student = Person::findStudentByID(tokens[1], people);
            if (!student) { cout << "invalid student" << endl; continue; }
            cout << student->name << " " << student->entering_year << " " << student->field;
            for (auto c : classes)
                if (c->isStudentRegistered(tokens[1]))
                    cout << " " << c->name;
            cout << endl;
        }
        else if (tokens[0] == "professor_status") {
            Professor* prof = Person::findProfessorByID(tokens[1], people);
            if (!prof) { cout << "invalid professor" << endl; continue; }
            cout << prof->name << " " << prof->field;
            for (auto c : classes)
                if (c->professor.identical_num == prof->identical_num)
                    cout << " " << c->name;
            cout << endl;
        }
        else if (tokens[0] == "class_status") {
            Class* class_obj = Class::findClassByID(tokens[1], classes);
            if (!class_obj) { cout << "invalid class" << endl; continue; }
            cout << (class_obj->hasProfessor() ? class_obj->professor.name : "None") << " ";
            for (size_t i = 0; i < class_obj->students.size(); ++i) {
                cout << class_obj->students[i].name;
                if (i + 1 < class_obj->students.size()) cout << " ";
            }
            if (!class_obj->students.empty()) cout << endl;
        }
        else if (tokens[0] == "set_final_mark") {
            Professor* prof = Person::findProfessorByID(tokens[1], people);
            Student* student = Person::findStudentByID(tokens[2], people);
            Class* class_obj = Class::findClassByID(tokens[3], classes);
            int mark = stoi(tokens[4]);
            if (!prof) { cout << "invalid professor" << endl; continue; }
            if (!student) { cout << "invalid student" << endl; continue; }
            if (!class_obj) { cout << "invalid class" << endl; continue; }
            class_obj->setFinalMark(prof, student, mark);
        }
        else if (tokens[0] == "mark_student") {
            Student* student = Person::findStudentByID(tokens[1], people);
            Class* class_obj = Class::findClassByID(tokens[2], classes);
            if (!student) { cout << "invalid student" << endl; continue; }
            if (!class_obj) { cout << "invalid class" << endl; continue; }
            class_obj->printStudentMark(tokens[1]);
        }
        else if (tokens[0] == "mark_list") {
            Class* class_obj = Class::findClassByID(tokens[1], classes);
            if (!class_obj) { cout << "invalid class" << endl; continue; }
            class_obj->printMarkList();
        }
        else if (tokens[0] == "average_mark_professor") {
            Professor* prof = Person::findProfessorByID(tokens[1], people);
            if (!prof) { cout << "invalid professor" << endl; continue; }
            vector<int> marks;
            for (auto c : classes) {
                c->collectMarksByProfessor(prof->identical_num, marks);
            }
            if (marks.empty()) {
                cout << "None" << endl;
            } else {
                double sum = 0;
                for (int m : marks) sum += m;
                cout << fixed << setprecision(2) << (sum / marks.size()) << endl;
            }
        }
        else if (tokens[0] == "average_mark_student") {
            Student* student = Person::findStudentByID(tokens[1], people);
            if (!student) { cout << "invalid student" << endl; continue; }
            vector<int> marks;
            for (auto c : classes) {
                c->collectMarksOfStudent(student->identical_num, marks);
            }
            if (marks.empty()) {
                cout << "None" << endl;
            } else {
                double sum = 0;
                for (int m : marks) sum += m;
                cout << fixed << setprecision(2) << (sum / marks.size()) << endl;
            }
        }
        else if (tokens[0] == "top_student") {
            string target_field = tokens[1];
            string target_year = tokens[2];

            string best_name = "None";
            double best_avg = -1.0;

            for (auto p : people) {
                Student* s = dynamic_cast<Student*>(p);
                if (!s) continue;
                if (s->field != target_field || s->entering_year != target_year) continue;

                vector<int> marks;
                for (auto c : classes) {
                    c->collectMarksOfStudent(s->identical_num, marks);
                }
                if (marks.empty()) continue;

                double sum = 0;
                for (int m : marks) sum += m;
                double avg = sum / marks.size();

                if (avg > best_avg) {
                    best_avg = avg;
                    best_name = s->name;
                }
            }
            cout << best_name << endl;
        }
        else if (tokens[0] == "top_mark") {
            Class* class_obj = Class::findClassByID(tokens[1], classes);
            if (!class_obj) {
                cout << "invalid class" << endl;
                continue;
            }
            if (class_obj->final_marks.empty()) {
                cout << "None" << endl;
            } else {
                int top = -1;
                for (auto& [_, m] : class_obj->final_marks) {
                    if (m > top) top = m;
                }
                cout << top << endl;
            }
        }
        else {
            break;
        }
    }

    return 0;
}
