/*
Focus of this class is to define all types of users (AA, SS, BS & SS) and have
methods that ensures every user type meets the necessary requirements to
fulfill their actions.

@author Abhiram Sinnarajah & Jude AntonyRajan
@version 1.09
@since  2019-02-05                                                            */

#include <iostream>
#include <string>
#include "User.h"
#include "DailyTransactionData.h"

using namespace std;

//~~~~~~~~~~~~~~~~~Constructor methods for User class~~~~~~~~~~~~~~~~~~~~~~~~~~~

/*
A constructor that creates a user object. Needed to implement other important
user functions.
@param username First param that takes in a string username
@param userAccountType Second param that takes in a string specifying user type
@param getAvailableCredit Third param is a float for user's available credit  */
User::User(string username, string userAccountType, float availableCredit) {
  this->username = username;
  this->userAccountType = userAccountType;
  this->availableCredit = availableCredit;
}

//~~~~~~~~~~~~~~~~~Helper methods for User class~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

/*
Checks whether  user has outstanding tickets in the available tickets file.
@param uName    First param takes a string specifying the username
@return bool    A boolean that confirms whether this user does infact have
                oustanding tickets                                            */
bool checkOutstandingTickets(string uName) {
    // postponed  for phase 3
    return false;
}

/*
Takes the active user's username and finds the user type
@param uName    First param takes a string specifying the username
@return string  A string indicating what the user's actual account type is    */
string findUserType(string uName) {
  // needs implementing, temporarily returns SS
  return "SS";
}

/*
Takes the active user's username and finds the available credit
@param uName    First param takes a string specifying the username
@return string  A string indicating the user's actual available credit        */
string findUserCredit(string uName) {
  // needs implementing, temporarily returns 10000.00
  return "10000.00";
}

/*
Method which prepares getline(cin) method for execution. Results in bug when not
used with getline(), does not take in input values for subsequent input
statements.
@return void                                                                  */
void User::resetInput() {
  cin.clear();
  cin.sync();
}

//~~~~~~~~~~~~~~~~~Non-constructor methods for User class~~~~~~~~~~~~~~~~~~~~~~~

/*
Admin privileged method that creates a string that will be updated on the
Current User accounts file.
@param username   A string username of the new account to be added
@param userType   A string user type of the new account to be added
@param userCredit A float user credit of the new account to be added
@return void                                                                  */
void User::stringRepresentation(string username, string userType,
 float userCredit) {
  if (this->userAccountType == "AA") {
    string uName = username;
    string uType = userType;
    float uCredit = userCredit;
    // postponed for phase 3
    // pass in variables [uName , uType, uCredit] into user accounts file
  }
}

/*
A method that returns the currently active user's available credit
@return float   A float indicating the active user's available credit         */
float User::getAvailableCredit() {
  return this->availableCredit;
  // necessary for phase 3
}

/*
Sets the current active user's available credit with a new amount
@param amount   A float representing new available credit for the  user
@param void                                                                   */
void User::updateAvailableCredit(float amount) {
  this->availableCredit = amount;
}

/*
Ensures whether active user is an admin and creates a new user account.
@return string  A transaction code string that will be linked to the Daily
                Transaction File (DTF)                                        */
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
    cout << "Sorry not an admin, you don't have the " <<
    "privilege to create a new user" << endl;
  }
  return "NULL";
}

/*
Ensures whether active user is an admin and removes an existing user account
@return string  A transaction code string that is to be updated on the DTF    */
string User::deleteUser() {
 if (this->userAccountType == "AA") {
   string name, transactionCode;
   cout << "Enter the username you wish to remove: ";
   resetInput();
   getline(cin, name);
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
 return "NULL";
}

/*
Ensures that the currently active user is not a buy standard type and proceeds
with setting up tickets for sale
@return string  A transaction code string that is to be updated on the DTF    */
string User::sellTickets() {
  if (this->userAccountType != "BS") {
    string eventName, transactionCode, uName;
    unsigned int numTickets;
    float ticketPrice;
    transactionCode = "04";
    uName = this->username;

    cout << "Welcome to the Seller's Terminal!" << endl;
    cout << "What is the name of the Event: ";
    resetInput();
    getline(cin, eventName);

    cout << "Number of tickets you wish to sell: ";
    resetInput();
    cin >> numTickets;

    cout << "What is your preferred price for each ticket: ";
    resetInput();
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
  return "NULL";
}

/*
Ensures that the currently active user is not a sell standard type and proceeds
 with procedures for purchase of tickets
@return string  A transaction code string that is to be updated on the DTF    */
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
    resetInput();
    getline(cin, eventName);

    cout << "Number of tickets you wish to purchase: ";
    cin >> numTickets;

    cout << "Seller's name: ";
    resetInput();
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
  return "NULL";
}

/*
Ensures that the currently active user is an admin and proceeds with steps to
add credit to an existing user account
@return string  A transaction code string that is to be updated on the DTF    */
string User::addCreditAdminMode() {
  if (this->userAccountType == "AA") {
    float credit;
    string uName, transactionCode;
    cout << "Welcome to the Admin Credit Transfer Terminal!" << endl;
    cout << "Amount of credit to add: ";
    cin >> credit;

    cout << "Whom shall receive this amount: ";
    resetInput();
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
        return "NULL";
}

/*
Ensures that the currently active user is not an admin and proceeds with
with necessary steps to request extra credit
@return string  A transaction code string that is to be updated on the DTF    */
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
    return "NULL";
}

/*
Ensures that the currently active user is an admin and proceeds with necessary
steps in order to refund credit from seller's account to buyer's account
@return string  A transaction code string that is to be updated on the DTF    */
string User::refund() {
  if (this->userAccountType == "AA") {
    float credit;
    string buyerUName, sellerUName, transactionCode;
    transactionCode = "05";

    cout << "Welcome to the Refund Terminal!" << endl;
    cout << "Enter the buyer's username: ";
    resetInput();
    getline(cin, buyerUName);

    cout << "Enter the seller's username: ";
    resetInput();
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
    return "NULL";
}

/*
To terminate the session of the currently active user.
@return string  A transaction code string that is to be updated on the DTF    */
string User::terminateSession() {
  cout << "Logging out..." << endl;
  DailyTransactionData terminateSession =
    DailyTransactionData(DailyTransactionData::CategoryOne{},
    "00", this->username, this->userAccountType, this->availableCredit);
  return terminateSession.stringRepresentation();
}
