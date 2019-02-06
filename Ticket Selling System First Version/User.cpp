// contains information for the users (admin, fs, bs, ss)

#include <iostream>
#include "User.h"
#include <string>

using namespace std;

//Initialize Daily Transaction Class
//DailyTransaction dt = new DailyTransaction();

//doing an example for this in sell tickets

User::User(string username, string userAccountType, float availableCredit) {
  this.username = username;
  this.userAccountType = userAccountType;
  this.availableCredit = availableCredit;
}
// reminder** to revise why this function is necessary when we already have create user function
// is this for login??
string User::stringRepresentation(string username, string userType, float userCredit) {
    string transactionCode;
    string credit = to_string(userCredit);
    code = username + " " + userType + " " + credit;
    return code;
}

float User::getAvailableCredit() {
  return this.availableCredit;
}

void User::updateAvailableCredit(float amount) {
  this.availableCredit = amount;
}

void User::createUser() {
  if (this.userAccountType == "AA") {
    float defaultCredit = 50000.00;
    string name, accountType, transactionCode, strCredit;
    cout << "Enter name of new user: " << endl;
    cin >>  name;

    cout << "What is this user's account type: " << endl;
    cin >>  accountType;
    strCredit = to_string(defaultCredit);
    transactionCode = "01 " + name + " " + accountType + " " + strCredit;
    // need to update this to include user info to dtf
  }
  else {
    cerr << "Sorry not an admin, you don't have the ""
    << "privilege to create a new user" << endl;
  }
}

void User::deleteUser() {
 if (this.userAccountType == "AA") {
   string name, transactionCode;
   cout << "Enter the username you wish to remove: " << endl;
   cin >>  name;

   // how to check where the outstanding ticket sales and purchase are for this user
   if (checkUserExists(name) == true)      // a check to see if this user has outstanding tickets
   {
     // invoke method that removes specified user's information
     // for a specified file, in this case ticket files for rthe outstanding tickets

     transactionCode = "02 " + name + " " + findUserType(name) + " " +findUserCredit(name);
     // call method to pass above transaction code into the dtf
   }
   else {
     transactionCode = "02 " + name + " " + findUserType(name) + " " +findUserCredit(name);
     // then apply lines of code to make change to the dtf
   }
 }
 else {
   cerr << "Sorry not an admin, you don't have the ""
   << "privilege to delete a current user" << endl;
 }
}

void User::sellTickets() {
  //ignore this, this is just a side note for Jude for later:
  //dt.transactioncode = 02; dt.username = username...etc;
  if (this.userAccountType != "BS") {
    string eventName, transactionCode, strNumTickets, strTicketPrice;
    uint numTickets;
    float ticketPrice;

    cout << "What is the name of the Event: " << endl;
    cin >> eventName;

    cout << "Number of tickets you wish to purchase: " << endl;
    cin >> numTickets;

    cout << "What is your preferred price for these tickets: " << endl;
    cin >> ticketPrice;

    // applied changes in credit for the seller should increase, question is
    // where does this increase go to, user accounts file? need to check **
    strNumTickets = to_string(numTickets);
    strTicketPrice = to_string(ticketPrice);
    transactionCode = "04 " + eventName + " " +this.username + " "
    + strNumTickets + " " + strTicketPrice;
    // then apply lines of code to make change to the dtf
  }
  else {
    cerr << "Sorry Buy standard (BS) users don't have the "
    << "privilege to sell tikets to users." << endl;
  }
  //return dt.stringRepresentation;
}

void User::buyTickets() {
  if (this.userAccountType != "SS") {
    string eventName, transactionCode, sellerName, strNumTickets, strTicketPrice;
    uint numTickets;
    // need to invode method to retreive price of seller's ticket
    // defaulted to 5 dollars for simplicity
    float ticketPrice = 5.00;

    cout << "Welcome to the Buyer's Terminal!"
    cout << "What is the name of the Event: " << endl;
    cin >> eventName;

    cout << "Number of tickets you wish to purchase: " << endl;
    cin >> numTickets;

    cout << "Seller's name: " << endl;
    cin >> sellerName;

    // need to display to terminal price per tickete, and total price of tickets

    // invoke method here to apply changes to user inventory
    strNumTickets = to_string(userCredit);
    strTicketPrice = to_string(ticketPrice);
    transactionCode = "04 " + eventName + " " + sellerName + " " + strNumTickets
    + " " + strTicketPrice;
    // then apply lines of code to make change to the dtf
  }
  else {
    cerr << "Sorry Sell standard (SS) users don't have the "
    << "privilege to buy tikets from users." << endl;
  }
}

void User::addCreditAdminMode() {

}

void User::addCreditStandardMode() {

}

void User::refund() {

}
// a function that checks in whether a user exists within a certain file (A.T or A.U)
bool checkUserExists(string uName) {
    // need to implement this function
    return false;
}

// a method that takes a username and finds the user type, since we know that the
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
