// focus of this class is to define all types of users (Admin = AA,
// Full Standard = SS, Buy Standard = BS & Sell Standard = SS) and have methods
// that ensures every user type meets the necessary requirements to fulfill their
// actions. Every action is supplied with a DailyTransactionData (dtd) constructor

// necessary libraries
#include <iostream>
#include <string>
#include "User.h"
#include "DailyTransactionData.h"

using namespace std;

//Initialize Daily Transaction Class
//DailyTransaction dt = new DailyTransaction();

//doing an example for this in sell tickets

// constructor
User::User(string username, string userAccountType, float availableCredit) {
  this->username = username;
  this->userAccountType = userAccountType;
  this->availableCredit = availableCredit;
}
// Support methods for some User class methods

// checks whether a user has outstanding tickets in the available tickets file
bool checkOutstandingTickets(string uName) {
    // postponed  for phase 3
    return false;
}

// takes a username and finds the user type
string findUserType(string uName) {
  // needs implementing, temporarily returns SS
  return "SS";
}

// a method that takes a username and finds the user's available credit
string findUserCredit(string uName) {
  // needs implementing, temporarily returns 10000.00
  return "10000.00";
}

// Non-constructor methods for User class

// function is important when creating new user (priviledged; admin)
void User::stringRepresentation(string username, string userType, float userCredit) {
  string uName = username;
  string uType = userType;
  float uCredit = userCredit;
  // postponed for phase 3
  // pass in variables [uName , uType, uCredit] into
  // user accounts file
}

// returns the current logged in users available credit
float User::getAvailableCredit() {
  return this->availableCredit;
  // necessary for phase 3
}

// sets the current active user's available credit with a new amount
void User::updateAvailableCredit(float amount) {
  this->availableCredit = amount;
}

// confirms whether active user is an admin and produces a new user account
string User::createUser() {
  if (this->userAccountType == "AA") {
    float defaultCredit = 50000.00;
    string name, accountType, transactionCode, strCredit;
    cout << "Enter name of new user: ";
    cin >>  name;

    cout << "What account type should this user have: ";
    cin >>  accountType;

    transactionCode = "01";

    DailyTransactionData createUser =
      DailyTransactionData(DailyTransactionData::CategoryOne{},
      transactionCode, name, accountType, defaultCredit);
    return createUser.stringRepresentation();
  }
  else {
    cerr << "Sorry not an admin, you don't have the " <<
    "privilege to create a new user" << endl;
  }
}

// confirms whether currently active user is an admin and removes an existing
// user account
string User::deleteUser() {
 if (this->userAccountType == "AA") {
   string name, transactionCode;
   cout << "Enter the username you wish to remove: ";
   cin >>  name;
   transactionCode = "02";

   // let account type be "BS" for now, we are not accessing user accounts yet
   string accountType = "BS";
   float noCredits = 0.00;

   // a check to see if this user has outstanding tickets
   if (checkOutstandingTickets(name) == true)
   {
     // invoke method that removes specified user's information, in this case
     // tickets file for the outstanding tickets -- not needed for phase 2

     // assuming the outstanding tickets are now cancelled

     DailyTransactionData deleteUser =
      DailyTransactionData(DailyTransactionData::CategoryOne{},
       transactionCode, name, accountType, noCredits);
       return deleteUser.stringRepresentation();
   }
   else {
     // means no outstanding tickets
     DailyTransactionData deleteUser =
      DailyTransactionData(DailyTransactionData::CategoryOne{},
       transactionCode, name, accountType, noCredits);
       return deleteUser.stringRepresentation();
   }
 }
 else {
   cerr << "Sorry not an admin, you don't have the " <<
   "privilege to delete a current user" << endl;
 }
}

// ensure's that the currently active user is not a buy standard and proceeds
// with setting up tickets for sale
string User::sellTickets() {
  if (this->userAccountType != "BS") {
    string eventName, transactionCode, uName;
    unsigned int numTickets;
    float ticketPrice;
    transactionCode = "04";
    uName = this->username;

    cout << "Welcome to the Seller's Terminal!" << endl;
    cout << "What is the name of the Event: ";
    getline(cin, eventName);

    cout << "Number of tickets you wish to sell: ";
    cin >> numTickets;

    cout << "What is your preferred price for each ticket: ";
    cin >> ticketPrice;

    DailyTransactionData sellTickets =
      DailyTransactionData(transactionCode, eventName,
      uName, numTickets, ticketPrice);
    return sellTickets.stringRepresentation();

  }
  else {
    cerr << "Sorry Buy standard (BS) users don't have the "
    << "privilege to sell tikets to users." << endl;
  }
}

// ensure's that the currently active user is not a sell standard and proceeds
// with procedures for purchase of tickets
string User::buyTickets() {
  if (this->userAccountType != "SS") {
    string eventName, transactionCode, sellerName;
    unsigned int numTickets;
    // need to invoke method to retreive price of seller's ticket
    // defaulted to 5.99 dollars for simplicity
    float ticketPrice = 5.99;
    transactionCode = "03";

    cout << "Welcome to the Buyer's Terminal!" << endl;
    cout << "What is the name of the Event: ";
    getline(cin, eventName);

    cout << "Number of tickets you wish to purchase: ";
    cin >> numTickets;
    cin.ignore();

    cout << "Seller's name: ";
    getline(cin, sellerName);

    float totalP = ticketPrice * numTickets;
    // need to display to terminal price per ticket, and total price of tickets
    cout << "Price per ticket: $" << ticketPrice << endl;
    cout << "Total Price: $" << totalP << endl;

    // invoke method here to apply changes to user inventory, not needed for phase 2

    DailyTransactionData buyTickets =
      DailyTransactionData(transactionCode, eventName,
      sellerName, numTickets, ticketPrice);
    return buyTickets.stringRepresentation();

  }
  else {
    cerr << "Sorry Sell standard (SS) users don't have the "
    << "privilege to buy tikets from users." << endl;
  }
}

// ensure's that the currently active user is an admin and proceeds
// with steps to add credit to an existing user account
string User::addCreditAdminMode() {
  if (this->userAccountType == "AA") {
    float credit;
    string uName, transactionCode;
    cout << "Welcome to the Admin Credit Transfer Terminal!" << endl;
    cout << "Amount of credit to add: ";
    cin >> credit;
    cin.ignore();

    cout << "Whom shall receive this amount: ";
    getline(cin, uName);

    cout << "User: " << uName << " will receive an increase in funds of " <<
    credit << endl;

    transactionCode = "06";

    //for now assume user type is "SS"
    string tempUserType = "SS";

    DailyTransactionData addCreditAdminMode =
      DailyTransactionData(DailyTransactionData::CategoryOne{},
      transactionCode, uName, tempUserType, credit);
    return addCreditAdminMode.stringRepresentation();
    }
    else {
      cerr << "Sorry only Admins can assign additional funds to other users."
      << endl;
    }
}

// ensure's that the currently active user is not an admin and proceeds
// with necessary steps to request extra credit
string User::addCreditStandardMode() {
  if (this->userAccountType != "AA") {
    float credit;
    string transactionCode = "06";

    cout << "Welcome to the Credit Assistance Terminal!" << endl;
    cout << "Enter the amount of credit you wish to request: ";
    cin >> credit;

    cout << "User: " << this->username << " is requesting an increase of funds "
    << " in the amount of " << credit << endl;

    // must udpate changes accordingly, not necessary for phase 2

    DailyTransactionData addCreditStandardMode =
      DailyTransactionData(DailyTransactionData::CategoryOne{},
      transactionCode, this->username, this->userAccountType, credit);

    return addCreditStandardMode.stringRepresentation();
    }
    else {
      cerr << "Sorry only Admins can assign additional funds to other users."
      << endl;
    }
}

// ensure's that the currently active user is an admin and proceeds
// with necessary steps in order to refund credit from seller's account to
// buyer's account
string User::refund() {
  if (this->userAccountType == "AA") {
    float credit;
    string buyerUName, sellerUName, transactionCode;
    transactionCode = "05";

    cout << "Welcome to the Refund Terminal!" << endl;
    cout << "Enter the buyer's username: ";
    cin.clear(); cin.sync();
    getline(cin, buyerUName);

    cout << "Enter the seller's username: ";
    cin.clear(); cin.sync();
    getline(cin, sellerUName);

    cout << "Amount to be refund to " << sellerUName << ": ";
    cin >> credit;

    cout << "Amount to be credited to " << sellerUName << " is $" << credit
    << endl;
    cout << "Amount to be deducted from " << buyerUName << " is $" << credit
    << endl;

    // invoke method to update buyer's/seller's available cred.[not for phase 2]

    DailyTransactionData refund =
      DailyTransactionData(DailyTransactionData::CategoryTwo{},
      transactionCode, buyerUName, sellerUName, credit);
    return refund.stringRepresentation();
    }
    else {
      cerr << "Sorry only Admins can make refunds to user accounts." << endl;
    }
}


int main() {
  User u("Jude", "AA", 567.45);
  cout << u.createUser() << endl;
  //cout << u.deleteUser() << endl;
  cout << u.sellTickets() << endl;
  //cout << u.buyTickets() << endl;
  //cout << u.addCreditAdminMode() << endl;
  //cout << u.addCreditStandardMode() << endl;
  //cout << u.refund() << endl;
  return 0;
}
