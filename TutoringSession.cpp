#include "TutoringSession.h"

// Constructor
TutoringSession::TutoringSession() {
    sessionID = 0;
    durationMinutes = 0.0;
    ta = nullptr;   
    student = nullptr; 
}
TutoringSession::TutoringSession(int sID,double dMinut, TeachingAssistant* t, Student* s) {
    sessionID = sID;
    durationMinutes = dMinut;
    ta = t;
    student = s;
}

// Getter
double TutoringSession::getDuration() {
    return durationMinutes;
}

// Display session details
void TutoringSession::displaySession() {
    cout << "Session ID: " << sessionID << endl;
    cout << "Duration: " << durationMinutes << " minutes" << endl;
    if (ta != nullptr)
        cout << "TA: " << ta->getName() << endl;
    if (student != nullptr)
        cout << "Student: " << student->getName() << endl;
}

TutoringSession TutoringSession::operator+(const TutoringSession& other) {
    TutoringSession combinedSession;

    combinedSession.durationMinutes = 0; 
    combinedSession.durationMinutes = this->durationMinutes + other.durationMinutes;


    return combinedSession;
}

// Non-member operator > : compare two sessions
bool operator>(TutoringSession s1, TutoringSession s2) {
    if(s1.durationMinutes > s2.durationMinutes){
    return true;
    }
    else
    {
        return false;
    }
}