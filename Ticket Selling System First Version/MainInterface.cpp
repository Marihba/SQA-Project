/*
Focus of this class is to coordinate and control all other relevant classes and
serve as a MAIN lobby or interface for user commands for transactions. Have
methods which display user and transaction details and perform these transactions
according to user inputs

@author Abhiram Sinnarajah & Jude AntonyRajan
@version 1.09
@since  2019-02-05
*/

#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>
#include <fstream>
#include <vector>
#include "User.h"
#include "LoginInterface.h"
//#include <typeinfo>

using namespace std;

class MainInterface {

  private:
    // class variables

    //User currentUser;
    LoginInterface loginInterface;
    vector<string> dailyTransactionsLog;


  public:
    // class methods
    void displayLoginInterface();
    void displayUserProfile(); //displays user and this will also initialize a User class and store user information
    void displayScreen();
    char runSelection();
    void endSession();
    void writeToDailyTransaction();

};

/*
Method which begins the login process by interacting withhe LoginInterface
and displays user profile
  @return void
*/
void MainInterface::displayLoginInterface() {
  //Initializes Login Interface class and works with it
  loginInterface.displayLogin();
  displayUserProfile();
}

/*
Stores the user data received from LoginInterface and displays the user profile,
accordingly. Also performs transactions selected by the user until end session is
called
  @return void
*/
void MainInterface::displayUserProfile() {
  //displays user profile
  string* userData = loginInterface.retrieveUserData();
  float credits = atof(userData[2].c_str());
  // assign data to user Class
  User user = User(userData[0], userData[1], credits);

  cout << "\n\t---------------------------------------------------"
  << "-----------------------------" << endl;

  // setw() is a spacing method from <iomanip> library, helps avoid /t spam and make
  // code look readable
  cout << "\n\t Welcome, " << userData[0]
    << "\n" << setw(80) << "Account Classification: " << userData[1]
    << "\n" << setw(80) << "Credit Balance: " << setprecision(2) << fixed << credits << endl;

  char selection = runSelection();

// exit loop if user chooses to end session
  while(selection != '0') {

    switch(selection) {

      case '1':
        {
          string createUser = user.createUser();
          if (createUser != "NULL")
            dailyTransactionsLog.push_back(createUser);
          break;
        }
      case '2':
        {
          string deleteUser = user.deleteUser();
          if (deleteUser != "NULL")
            dailyTransactionsLog.push_back(deleteUser);
        }
        break;
      case '3':
        {
          string sellTickets = user.sellTickets();
          if (sellTickets != "NULL")
            dailyTransactionsLog.push_back(sellTickets);
        }
        break;
      case '4':
        {
          string buyTickets = user.buyTickets();
          if (buyTickets != "NULL")
            dailyTransactionsLog.push_back(buyTickets);
        }
        break;
      case '5':
        {
          string refund = user.refund();
          if (refund != "NULL")
            dailyTransactionsLog.push_back(refund);
          break;
        }
      case '6':
        {
          string addCreditStandardMode = user.addCreditStandardMode();
          if (addCreditStandardMode != "NULL")
            dailyTransactionsLog.push_back(addCreditStandardMode);
          break;
        }
      case '7':
        {
          string addCreditAdminMode = user.addCreditAdminMode();
          if (addCreditAdminMode != "NULL")
            dailyTransactionsLog.push_back(addCreditAdminMode);
          break;
        }
      default:
        cout << "\t Invalid Selection. Please try again!" << endl;

      }
      selection = runSelection();

    }
    //terminate session and cal endSession method
    dailyTransactionsLog.push_back(user.terminateSession());
    endSession();

}

/*
Method which returns a char representing a type of transaction
  @return character - a single character representation
*/
char MainInterface::runSelection() {

  char selection;
  // re-display options after each transactions
  displayScreen();
  cout << "\n\n\t Please enter your selection: ";
  cin >> selection;
  cout << endl;
  return selection;

}

/*
Void function which displays the screen with options for users to choose from
  @return void
*/
void MainInterface::displayScreen() {

  cout << "\n\n\t FEATURED OPTIONS:" << "\n\n\t < To access a transaction, please"
    << " enter the respective number and hit ENTER >" << endl;

  cout << "\n\n" << setw(35)   << "1 - [Create User]" << setw(35)   << "2 - [Delete User]"
       << "\n\n\n" << setw(36) << "3 - [Sell Tickets]" << setw(34)  << "4 - [Buy Tickets]"
       << "\n\n\n" << setw(30) << "5 - [Refund]" << setw(51)        << "6 - [Add Credits - STANDARD]"
       << "\n\n\n" << setw(43) << "7 - [Add Credits - ADMIN]"
       << "\n\n\n" << setw(37) << "Enter 0 to [Logout]" << endl;

}

/*
Void function which calls writeToDailyTransaction method, this method may have
to perform additional task for phase 3 but temporarily does not do much other
than calling writeToDailyTransaction() method
  @return void
*/
void MainInterface::endSession() {
  //write to daily transaction log file
  //one transaction per line in file
  writeToDailyTransaction();
  cout << "\nSession Terminated!\n\t_______________________________________"
    << "______________________________________________________________" << endl;

}

/*
Iterates and writes transaction data stored in dailyTransactionsLog vector
in a Daily Transaction File
  @return void
*/
void MainInterface::writeToDailyTransaction() {
  //this writes to the *output file*

  ofstream myfile;
  myfile.open ("Daily_Transaction_Output_File.txt");
  for (auto const& transaction : dailyTransactionsLog) {
    myfile << transaction << endl;
  }
  myfile.close();
}

// Main which executes the program and continues its purpose until the program is
// closed or exited
int main() {

  while (true) {

    MainInterface mainInterface;
    mainInterface.displayLoginInterface();

  }
  return 0;

 }
