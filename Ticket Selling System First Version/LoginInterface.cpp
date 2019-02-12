/*

Focus of this class is to manage the login segment of the system and have
methods that ensure existing users are succesfully able to login and have their data
transferred to the Main Interface

@author Abhiram Sinnarajah & Jude AntonyRajan
@version 1.09
@since  2019-02-05

*/

#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
#include "LoginInterface.h"


using namespace std;

//~~~~~~~~~~~~~~~~~Constructor methods for LogInterface class~~~~~~~~~~~~~~~~~~~~~~~~~~~

/*
A constructor that creates a LoginInterface object. Needed to implement other important
LogInterface functions.

DEFAULT DailyTransactionData:
  - Automatically stores the path to user accounts File
  - Appropriately sets the userExist boolean variable to false, originally
  @param none
*/

LoginInterface::LoginInterface() {
  this->userAccountsFilePath = "user_accounts_file.txt";
  this->userExist = false;
}

/*
Method which access the user's account file and begins the account lookup process
  @return void
*/
void LoginInterface::accessUserFile() {

  // open user accounts file and call user check method
  ifstream userAccountsFile(this->userAccountsFilePath, ios::in);
  string dataLine;
  // keep looking until user is found // && this->userExist == false
  while (getline(userAccountsFile, dataLine)) {
    scanForExistingUser(dataLine);
  }

}

/*
Method which scans and validates the existence of the user attempting to login
  @param userDataString - string which is a chunk/ line of user data combined of
                          username, user type and available credits
  @return void
*/
void LoginInterface::scanForExistingUser(string userDataString) {
  // get first 15 characters of the raw string
  string usernameSubString = userDataString.substr(0, 15);
  if (isExistingUser(usernameSubString)) {
    this->userExist = true;
    this->currentUserData[0] = this->username;
    //starting from position 16, get the next 2 characters (user type)
    this->currentUserData[1] = userDataString.substr(16, 2);
    //starting from position 19, get the next 9 characters (available credits)
    this->currentUserData[2] = userDataString.substr(19, 9);
  }
}

/*
Method which displays the login screen and requests user to input their username
Once user enters the username, it hands the responsibility to accessUserFile methods
for verification
  @return void
*/
void LoginInterface::displayLogin() {

  cout << "\n\n\t\t\t~ Welcome to Ticket Selling Service ~\n\n" << "\tA Portal Just for " <<
  "Getting The Most FIRE Deals on Hit Popular Event Tickets!\n" << endl;
  cout << "\tPlease enter your username,\n\n" << "\t\t*USERNAME: ";
  cin.clear(); cin.sync();  //clean input
  getline(cin, this->username);
  accessUserFile();
  while (this->userExist != true) {
    cout << "\n\n\tUser Does Not Exist! Please try again!\n\n\t\t*USERNAME: ";
    cin.clear(); cin.sync();
    getline(cin, this->username);
    accessUserFile();
  }
}

/*
Returns a boolean which is either true if an existing user is found, otherwise false
  @param usernameSubString - string which is the first 15 characters of user data line
  @return boolean a true or false value based on condition
*/
bool LoginInterface::isExistingUser(string usernameSubString) {

  // iterate and remove spaces in the end of the username
  for (auto itr = usernameSubString.rbegin();
    itr != usernameSubString.rend() && *itr == ' ';
    itr=usernameSubString.rbegin()) {
    usernameSubString.pop_back();
  }
  return this->username == usernameSubString;
}

/*
Returns the string array list of size 3 with the user data information
  @return string_array[3] - contains username at position string_array[0]
                          - contains user type at position string_array[1]
                          - contains available credits at position string_array[2]
*/
string* LoginInterface::retrieveUserData() {
  return this->currentUserData;
}

/*
Exits program upon call
NOTE: Has not been integreted into system yet, will be completed for phase 3
  @return void
*/
void LoginInterface::exitProgram() {
  exit(0);
}
