#ifndef UNIVERSITYMEMBER_H
#define UNIVERSITYMEMBER_H

#include <iostream>
using namespace std;

class UniversityMember {
private:
    string name;
    int memberID;

public:
    // Constructor
    UniversityMember(string name, int memberID);

    // Destructor
    virtual ~UniversityMember();

    // Getters
    string getName();
    int getMemberID();

    // Pure Virtual Function
    virtual void displayRole() = 0;
};

#endif