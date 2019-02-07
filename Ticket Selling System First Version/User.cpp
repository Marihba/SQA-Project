// contains information for the users (admin, fs, bs, ss)
#include <iostream>
#include "User.h"
#include <string>

using namespace std;

//Initialize Daily Transaction Class
//DailyTransaction dt = new DailyTransaction();

//doing an example for this in sell tickets

// constructors
User::User(string username, string userAccountType, float availableCredit) {
  this->username = username;
  this->userAccountType = userAccountType;
  this->availableCredit = availableCredit;
}

// helper methods for User class methods
// a function that checks in whether a user exists within a certain file (A.T or A.U)
bool checkOutstandingTickets(string uName) {
    // need to implement this function
    return false;
}

// takes a username and finds the user type, since we know that the
// user type is two digits and the posistion is fixed
string findUserType(string uName) {
  // needs implementing, temporarily returns SS
  return "SS";
}

// a method that takes a username and finds the user's available credit
string findUserCredit(string uName) {
  // needs implementing, temporarily returns SS
  return "10000.00";
}

// User class methods

// reminder** to revise why this function is necessary when its passing data
// to the user accounts file
void User::stringRepresentation(string username, string userType, float userCredit) {
  string uName = username;
  string uType = userType;
  float uCredit = userCredit;
  // pass in variables [uName , uType, uCredit] into
  // user accounts file (dtd) constructor
}

float User::getAvailableCredit() {
  return this->availableCredit;
}

void User::updateAvailableCredit(float amount) {
  this->availableCredit = amount;
}

void User::createUser() {
  if (this->userAccountType == "AA") {
    float defaultCredit = 50000.00;
    string name, accountType, transactionCode, strCredit;
    cout << "Enter name of new user: " << endl;
    cin >>  name;

    cout << "What account type should this user have: " << endl;
    cin >>  accountType;

    transactionCode = "01";

    // pass in variables [transactionCode, name and defaultCredit] into
    // daily transaction data (dtd) constructor
  }
  else {
    cerr << "Sorry not an admin, you don't have the " <<
    "privilege to create a new user" << endl;
  }
}

void User::deleteUser() {
 if (this->userAccountType == "AA") {
   string name, transactionCode;
   cout << "Enter the username you wish to remove: " << endl;
   cin >>  name;
   transactionCode = "02";

   // a check to see if this user has outstanding tickets
   if (checkOutstandingTickets(name) == true)
   {
     // invoke method that removes specified user's information, in this case
     // tickets file for the outstanding tickets -- not needed for phase 2

     // assuming the outstanding tickets are now cancelled

     // pass in variables [transactionCode, name , findUserType(name),
     // findUserCredit] into daily transaction data (dtd) constructor
   }
   else {
     // means no outstanding tickets

     // pass in variables [transactionCode, name , findUserType(name), defaultCredit] into
     // daily transaction data (dtd) constructor
   }
 }
 else {
   cerr << "Sorry not an admin, you don't have the " <<
   "privilege to delete a current user" << endl;
 }
}

void User::sellTickets() {
  //ignore this, this is just a side note for Jude for later:
  //dt.transactioncode = 02; dt.username = username...etc;
  if (this->userAccountType != "BS") {
    string eventName, transactionCode, uName;
    unsigned int numTickets;
    float ticketPrice;
    transactionCode = "04";
    uName = this->username;

    cout << "Welcome to the Seller's Terminal!" << endl;
    cout << "What is the name of the Event: " << endl;
    cin >> eventName;

    cout << "Number of tickets you wish to sell: " << endl;
    cin >> numTickets;

    cout << "What is your preferred price for each ticket: " << endl;
    cin >> ticketPrice;

    // pass in variables [transactionCode, eventName, uName, numTickets, ticketPrice]
    // into daily transaction data (dtd) constructor
  }
  else {
    cerr << "Sorry Buy standard (BS) users don't have the "
    << "privilege to sell tikets to users." << endl;
  }
  //return dt.stringRepresentation;
}

void User::buyTickets() {
  if (this->userAccountType != "SS") {
    string eventName, transactionCode, sellerName;
    unsigned int numTickets;
    // need to invoke method to retreive price of seller's ticket
    // defaulted to 5 dollars for simplicity
    float ticketPrice = 5.00;
    transactionCode = "03";

    cout << "Welcome to the Buyer's Terminal!" << endl;
    cout << "What is the name of the Event: " << endl;
    cin >> eventName;

    cout << "Number of tickets you wish to purchase: " << endl;
    cin >> numTickets;

    cout << "Seller's name: " << endl;
    cin >> sellerName;

    float totalP = ticketPrice * numTickets;
    // need to display to terminal price per ticket, and total price of tickets
    cout << "Price per ticket: $" << ticketPrice << endl;
    cout << "Total Price: $" << totalP << endl;

    // invoke method here to apply changes to user inventory, not needed for phase 2

    // pass in variables [transactionCode, eventName, sellerName, numTickets, ticketPrice]
    // into daily transaction data (dtd) constructor
  }
  else {
    cerr << "Sorry Sell standard (SS) users don't have the "
    << "privilege to buy tikets from users." << endl;
  }
}

void User::addCreditAdminMode() {
  if (this->userAccountType == "AA") {
    float credit;
    string uName, transactionCode;
    cout << "Welcome to the Admin Credit Transfer Terminal!" << endl;
    cout << "Amount of credit to add: " << endl;
    cin >> credit;

    cout << "Whom shall receive this amount: "  << endl;
    cin >> uName;

    cout << "User: " << uName << " will receive an increase in  funds of " <<
    credit << endl;

    transactionCode = "06";

    // pass in variables [transactionCode, uName, this.userAccountType, credit]
    // into daily transaction data (dtd) constructor

    // NOTE** for the above acount type, need to check whether its for the Admin
    // doing the addcredit action, or for the user receiving the credit
    }
    else {
      cerr << "Sorry only Admins can assign additional funds to other users."
      << endl;
    }
}

void User::addCreditStandardMode() {
  if (this->userAccountType != "AA") {
    float credit;
    string transactionCode = "06";

    cout << "Welcome to the Credit Assistance Terminal!" << endl;
    cout << "Enter the amount of credit you wish to request: " << endl;
    cin >> credit;

    cout << "User: " << this->username << " is requesting an increase of funds "
    << " in the amount of " << credit << endl;

    // must udpate changes accordingly, not necessary for phase 2

    // pass in variables [transactionCode, this.username, this.userAccountType, credit]
    // into daily transaction data (dtd) constructor
    }
    else {
      cerr << "Sorry only Admins can assign additional funds to other users."
      << endl;
    }
}

void User::refund() {
  if (this->userAccountType == "AA") {
    float credit;
    string buyerUName, sellerUName, transactionCode;
    transactionCode = "05";

    cout << "Welcome to the Refund Terminal!" << endl;
    cout << "Enter the buyer's username: " << endl;
    cin >> buyerUName;

    cout << "Enter the seller's username: " << endl;
    cin >> sellerUName;

    cout << "Amount to be refund to " << sellerUName << ": " << endl;
    cin >> credit;

    cout << "Amount to be credited to " << sellerUName << " is $" << credit
    << endl;
    cout << "Amount to be deducted from " << buyerUName << " is $" << credit
    << endl;

    // invoke method to update buyer's/seller's available cred.[not for phase 2]

    // pass in variables [transactionCode, buyerUName, sellerUName, credit]
    // into daily transaction data (dtd) constructor
    }
    else {
      cerr << "Sorry only Admins can make refunds to user accounts." << endl;
    }
}
