#include "Student.h"

// Constructor
Student::Student(string n, int mID, double Cgpa)
    : UniversityMember(n,mID) {
    cgpa = Cgpa;
}

// Getter
double Student::getCGPA() {
    return cgpa;
}

// Update CGPA
void Student::updateCGPA(double newCGPA) {
    cgpa = newCGPA;
}

// Override displayRole
void Student::displayRole() {
    cout << "Role: Student" << endl;
}