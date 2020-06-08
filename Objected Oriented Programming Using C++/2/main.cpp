#include <string>
#include <iostream>
#include <cmath>
#include <vector>
#include <sstream>
#include <fstream>
#include <iomanip>

using namespace std;

class Student {
public:
    Student();
    Student(const string &code, const string &name);
    void setGrades(double shortExam, double project, double exam);
    string getCode() const;
    string getName() const;
    int getFinalGrade() const; // other get and set methods
    bool isApproved() const; // is the student approved or not ?
    static int weightShortExam, weightProject, weightExam; // weights in percentage (ex:20,30,50)
private:
    string code; // student code
    string name; // student complete name
    double shortExam, project, exam; // grades obtained by the student in the different components
    int finalGrade;
};

// a)
int Student::weightShortExam = 20;
int Student::weightProject = 30;
int Student::weightExam = 50;

void Student::setGrades(double shortExam, double project, double exam) {
    this->shortExam = shortExam;
    this->project = project;
    this->exam = exam;

    finalGrade = round((shortExam * weightExam + project * weightProject + exam * weightExam) / 100);
}

// b)
Student::Student() = default;

Student::Student(const string &code, const string &name) {
    this->code = code;
    this->name = name;
}

string Student::getCode() const {
    return code;
}

string Student::getName() const {
    return name;
}

int Student::getFinalGrade() const {
    return finalGrade;
}

bool Student::isApproved() const {
    return (finalGrade >= 9.5);
}

// c)
Student readStudentData() {
    string code, name;
    double shortExam, project, exam;
    cout << "Studente code? ";
    cin >> code;
    cout << "Student name? ";
    cin >> name;

    Student student(code, name);

    cout << "Short exam grade? ";
    cin >> shortExam;
    cout << "Project grade? ";
    cin >> project;
    cout << "Exam grade? ";
    cin >> exam;

    student.setGrades(shortExam, project, exam);

    return student;
}

// d)
void showAboveAverageStudents(std::ostream & os, const std::vector<Student> & students) {
    os << "Above average students\n";

    double average{};

    for (const auto& i : students) {
        average += i.getFinalGrade();
    }

    average /= students.size();
    vector<Student> above{};

    for (const auto& i : students) {
        if (i.getFinalGrade() > average) {
            above.push_back(i);
        }
    }

    os << left << setw(15) << "CODE" << setw(20) << "NAME" << setw(30) << right << "GRADE" << "\n";

    for (const auto& i : above) {
        os << left << setw(15) << i.getCode() << setw(20) << i.getName() << setw(30) << right << i.getFinalGrade() << "\n";
    }
}

// e)
vector<Student> readStudentsFile(ifstream &fs) {
    char sep{};
    string code{}, name{};
    double shortExam{}, project{}, exam{};
    vector<Student> students{};
    string temp{};
    getline(fs, temp, '\n');

    while (!fs.eof()) {

        stringstream iss(temp);
        getline(iss, code, ';');  // these two attributes are strings so the method bellow would not work
        getline(iss, name, ';');
        iss >> shortExam >> sep >> project >> sep >> exam;  // these are ints so the above method would not work
        Student st(code, name);
        st.setGrades(shortExam, project, exam);
        students.push_back(st);
        getline(fs, temp, '\n');
    }
    return students;
}

int main() {
    // b)
//    Student st("up201808907", "Tiago Pinto");
//    st.setGrades(7, 1, 3);
//
//    std::cout << st.getName() << " " << st.getCode() << "\n";
//    std::cout << st.isApproved() << " " << st.getFinalGrade() << "\n";
}