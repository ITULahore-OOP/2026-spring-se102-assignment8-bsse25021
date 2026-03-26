#ifndef STAFF_H
#define STAFF_H

#include "UniversityMember.h"
#include "AccessCard.h"
#include <iostream>
using namespace std;

class Staff : virtual public UniversityMember {
private:
    double salary;
    AccessCard card;  // Composition: Staff HAS-A AccessCard

public:
    // Constructor
    Staff(string n, int mID, double sal, AccessCard c);

    // Getter for salary
    double getSalary();

    // Override displayRole
    void displayRole() override;

    // Display AccessCard info
    void displayCard();
};

#endif