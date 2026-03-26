#include "AccessCard.h"

// Constructor
AccessCard::AccessCard(string cID, int aLevel) {
    cardID = cID;
    accessLevel = aLevel;
}

// Getter for cardID
string AccessCard::getCardID() {
    return cardID;
}

// Getter for accessLevel
int AccessCard::getAccessLevel() {
    return accessLevel;
}

// Display function
void AccessCard::displayCardInfo() {
    cout << "Card ID: " << cardID << endl;
    cout << "Access Level: " << accessLevel << endl;
}