#include "Staff.h"

// Constructor
Staff::Staff(string n, int mID, double sal, AccessCard c) : UniversityMember(n,mID),card(c) {
    salary = sal;
}

// Getter
double Staff::getSalary() {
    return salary;
}

// Override displayRole
void Staff::displayRole() {
    cout << "Role: Staff" << endl;
}

// Display AccessCard info
void Staff::displayCard() {
    card.displayCardInfo(); 
}