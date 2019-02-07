// this file contains information regarding user login
#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
#include "LoginInterface.h"


using namespace std;

LoginInterface::LoginInterface() {
  this->userAccountsFilePath = "user_accounts_file.txt";
  this->userExist = false;
}

void LoginInterface::accessUserFile() {

  // open user accounts file and call user check method
  ifstream userAccountsFile(this->userAccountsFilePath, ios::in);
  string dataLine;
  // keep looking until user is found // && this->userExist == false
  while (getline(userAccountsFile, dataLine)) {
    scanForExistingUser(dataLine);
  }

}

void LoginInterface::scanForExistingUser(string userDataString) {
  // get first 15 characters of the raw string
  string usernameSubString = userDataString.substr(0, 15);
  if (isExistingUser(usernameSubString)) {
    this->userExist = true;
    this->currentUserData = userDataString;
  }
}

//for next phase extend this to include options, 1. login   2. exit
void LoginInterface::displayLogin() {

  cout << "\n\n\t\t~ Welcome to Ticket Selling Service ~\n\n" << "\tA Portal Just for " <<
  "Getting The Most FIRE Deals on Hit Popular Event Tickets!\n" << endl;
  cout << "\tPlease enter your username,\n\n" << "\t\t*USERNAME: ";
  getline(cin, this->username);
  accessUserFile();
  while (this->userExist != true) {
    cout << "\n\n\tUser Does Not Exist! Please try again!\n\n\t\t*USERNAME: ";
    getline(cin, this->username);
    accessUserFile();
  }
}


bool LoginInterface::isExistingUser(string usernameSubString) {
  // remove white spaces and compare to username
  usernameSubString.erase(std::remove(usernameSubString.begin(),
    usernameSubString.end(),' '),usernameSubString.end());
  return this->username == usernameSubString;
}


//retrieves the entire line which contains current user data
string LoginInterface::retrieveUserData() {
  return this->currentUserData;
}

void LoginInterface::terminateSession() {
  exit(0);
}
