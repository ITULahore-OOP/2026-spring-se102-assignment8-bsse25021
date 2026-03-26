#include "Department.h"

// Constructor
Department::Department(string departName) {
    departmentName = departName;
    memberCount = 0;
}

// Add a member to the array
void Department::addMember(UniversityMember* member) {
    if(memberCount < 50) {
        members[memberCount++] = member;
    } else {
        cout << "Department is full!" << endl;
    }
}

// Display roles of all members
void Department::displayAllRoles() {
    cout << "Department: " << departmentName << endl;
    for(int i = 0; i < memberCount; i++) {
        cout << members[i]->getName();
        cout << members[i]->getMemberID();
        members[i]->displayRole();  
        cout << endl;
    }
}