#include "UniversityMember.h"

// Constructor
UniversityMember::UniversityMember(string n, int mID) {
    name = n;
    memberID = mID;
}

// Destructor
UniversityMember::~UniversityMember() {}

// Getters
string UniversityMember::getName() {
    return name;
}

int UniversityMember::getMemberID() {
    return memberID;
}