#include <iostream>
#include "Student.h"
#include "Staff.h"
#include "TeachingAssistant.h"
#include "AccessCard.h"
#include "TutoringSession.h"
#include "Department.h"

using namespace std;

int main() {
    Student s1("Ali", 101, 3.8);
    AccessCard staffCard("AC001", 2);
    Staff st1("Dr. Khan", 201, 5000, staffCard);
    AccessCard taCard("TA001", 2);
    TeachingAssistant ta1("Sara", 301, 3.9, 2000, taCard, 20);
    TutoringSession session1(1, 60, &ta1, &s1);
    TutoringSession session2(2, 45, &ta1, &s1);
    cout << "\n--- Session 1 ---" << endl;
    session1.displaySession();
    cout << "\n--- Session 2 ---" << endl;
    session2.displaySession();
    cout<<endl;
    TutoringSession session3 = session1 + session2;
    session3.displaySession();
    Department cs("Computer Science");
    cs.addMember(&s1);
    cs.addMember(&st1);
    cs.addMember(&ta1);
    cout << "\n--- Department Members ---" << endl;
    cs.displayAllRoles();
    cout << "\n--- Staff Card ---" << endl;
    st1.displayCard();
    cout << "\n--- TA Card ---" << endl;
    ta1.displayCard();
    cout << "\n--- Grading ---" << endl;
    ta1.gradeAssignment(90);
    ta1.gradeAssignment("A");

    return 0;
}