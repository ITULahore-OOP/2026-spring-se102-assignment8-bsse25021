#include "TeachingAssistant.h"

// Constructor
TeachingAssistant::TeachingAssistant(string n,int mID,double Cgpa,double sal,AccessCard c,int wHours):UniversityMember(n,mID),Student(n,mID,Cgpa),Staff(n,mID,sal,c) 
{
    workingHours = wHours;
}

// Override displayRole
void TeachingAssistant::displayRole() {
    cout << "Role: Teaching Assistant" << endl;
}

void TeachingAssistant::gradeAssignment(int score) {
    cout << "numeric score: " << score <<"/100"<< endl;
}


void TeachingAssistant::gradeAssignment(string letterGrade) {
    cout << "letter grade: " << letterGrade << endl;
}