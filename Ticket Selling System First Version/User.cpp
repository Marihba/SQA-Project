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

string User::stringRepresentation(string username, string userType, float userCredit) {
    string code;
    string credit = (float) userCredit;
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
    string name, accountType;
    cout << "Enter name of new user: " << endl;
    cin >>  name;

    cout << "What is this user's account type: " << endl;
    cin >>  accountType;

    // need to update this to include user info to dtf
  }
  else {
    cout << "Sorry not an admin, you don't have the ""
    << "privilege to create a new user" << endl;
  }
}

void User::deleteUser() {
 if (this.userAccountType == "AA") {
   string name;
   cout << "Enter the username you wish to remove: " << endl;
   cin >>  name;

   // how to check where the outstanding ticket sales and purchase are for this user
   if ()      // a check to see if this user has zero outsanding tickets
   {
        // add line of code to update change to the dtf
   }

   // if user does have outstanding tickets
   else {
     // cancel them

     // then apply lines of code to make change to the dtf

   }
 }
 else {
   cout << "Sorry not an admin, you don't have the ""
   << "privilege to delete a current user" << endl;
 }
}

void User::sellTickets() {
  //ignore this, this is just a side note for Jude for later:
  //dt.transactioncode = 02; dt.username = username...etc;


  if (this.userAccountType != "BS") {



  }
  else {
    cout << "Sorry not a semi-privileged user, you don't have the ""
    << "privilege to delete a current user" << endl;
  }
  //return dt.stringRepresentation;
}
