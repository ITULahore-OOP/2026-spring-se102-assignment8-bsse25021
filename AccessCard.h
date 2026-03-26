#ifndef ACCESSCARD_H
#define ACCESSCARD_H
#include<string>
#include <iostream>
using namespace std;

class AccessCard {
private:
    string cardID;
    int accessLevel;

public:
    // Constructor
    AccessCard(string cardID, int accessLevel);

    // Getters
    string getCardID();
    int getAccessLevel();

    // Display Function
    void displayCardInfo();
};

#endif