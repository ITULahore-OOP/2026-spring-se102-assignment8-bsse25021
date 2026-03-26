#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include <iostream>
#include "UniversityMember.h"
using namespace std;

class Department {
private:
    string departmentName;
    UniversityMember* members[50]; 
    int memberCount;               

public:
    // Constructor
    Department(string departName);

    // Add a member
    void addMember(UniversityMember* member);

    // Display all roles
    void displayAllRoles();
};

#endif