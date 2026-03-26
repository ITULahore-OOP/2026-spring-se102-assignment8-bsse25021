#ifndef TUTORINGSESSION_H
#define TUTORINGSESSION_H

#include <iostream>
#include "TeachingAssistant.h"
#include "Student.h"

using namespace std;

class TutoringSession {
private:
    int sessionID;
    double durationMinutes;
    TeachingAssistant* ta;
    Student* student;       

public:
    // Constructor
    TutoringSession();
    TutoringSession(int sID, double dMinut, TeachingAssistant* t, Student* s);

    // Getter
    double getDuration();

    // Display Session Info
    void displaySession();

    TutoringSession operator+(const TutoringSession& other);
    friend bool operator>(TutoringSession s1, TutoringSession s2);
};

#endif