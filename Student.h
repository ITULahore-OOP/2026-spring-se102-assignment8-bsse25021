#ifndef STUDENT_H
#define STUDENT_H

#include "UniversityMember.h"
#include<string>

class Student : virtual public UniversityMember {
private:
    double cgpa;

public:
    // Constructor
    Student(string name, int memberID, double cgpa);

    // Getter
    double getCGPA();

    // Setter / Updater
    void updateCGPA(double newCGPA);

    // Override function
    void displayRole() override;
};

#endif