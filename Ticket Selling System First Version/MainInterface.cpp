/* Header description of this file**

Focus of this class is to coordinate and control all other relevant classes and
serve as a MAIN lobby or interface for user commands for transactions. Have
methods which display user and transaction details and perform transactions
according to user input.

@author Abhiram Sinnarajah & Jude AntonyRajan
@version 1.08
@since  2019-02-05

~~~~ Main program intention, I/O Files and intention of program to be ran ~~~~

Main function creates a new main interface object, and transfers the process to
login interface. Login interface would take in an input user accounts file, and
request user to enter a username. It would then iterate through the user accounts
file and retrieves the respective user data from the accounts file. Then, it splits
 the string into username, user type and credit balance; sets it in an array and
 delivers it to the main interface. Main interface would take this information;
 store it into a new user class then displays the user details for user to view.
 It would then display the transaction options for the user to choose from. Once
 user picks an option, it executes the said transaction. Consequently, constructs
 a new daily transaction data class object, and gets the string representation of
 the transaction data to be stored in the daily transaction log which is part of
 main interface. This transaction process will repeat until user wishes to end
 session, in which case it would terminate session and writes the daily transaction
 log to a daily transaction output file.                                      */

#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>
#include <fstream>
#include <vector>
#include "User.h"
#include "LoginInterface.h"

using namespace std;

class MainInterface {

  private:
    //User currentUser;
    LoginInterface loginInterface;
    vector<string> dailyTransactionsLog;


  public:
    // class methods
    void displayLoginInterface();
    void displayUserProfile();
    void displayScreen();
    string runSelection();
    void endSession();
    void writeToDailyTransaction();

};

//~~~~~~~~~~~~~~~Non-constructor methods for MainInterface class~~~~~~~~~~~~~~~~

/*
Method which begins the login process by interacting withhe LoginInterface
and displays user profile.                                                    */
void MainInterface::displayLoginInterface() {
  //Initializes Login Interface class and works with it
  loginInterface.displayLogin();
  displayUserProfile();
}

/*
Stores the user data received from LoginInterface and displays the user profile,
accordingly. Also performs transactions selected by the user until end session
is called                                                                     */
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

  string selection = runSelection();

// exit loop if user chooses to end session
  while(selection != "logout") {

    if (selection == "create") {
      string createUser = user.createUser();
      if (createUser != "NULL")
        dailyTransactionsLog.push_back(createUser);
    }
    else if (selection == "delete") {
      string deleteUser = user.deleteUser();
      if (deleteUser != "NULL")
        dailyTransactionsLog.push_back(deleteUser);
    }
    else if (selection == "sell") {
      string sellTickets = user.sellTickets();
      if (sellTickets != "NULL")
        dailyTransactionsLog.push_back(sellTickets);
    }
    else if (selection == "buy") {
      string buyTickets = user.buyTickets();
      if (buyTickets != "NULL")
        dailyTransactionsLog.push_back(buyTickets);
    }
    else if (selection == "refund") {
      string refund = user.refund();
      if (refund != "NULL")
        dailyTransactionsLog.push_back(refund);
    }
    else if (selection == "addcredit") {
      if (userData[1] != "AA") {
        string addCreditStandardMode = user.addCreditStandardMode();
        if (addCreditStandardMode != "NULL")
          dailyTransactionsLog.push_back(addCreditStandardMode);
      } else {
        string addCreditAdminMode = user.addCreditAdminMode();
        if (addCreditAdminMode != "NULL")
          dailyTransactionsLog.push_back(addCreditAdminMode);
      }
    }

    else {
      cout << "\t Invalid Transaction. Please enter a transaction exactly as"
        << "what has been shown above in options!" << endl;
    }

    selection = runSelection();

    }
    //terminate session and call endSession method
    dailyTransactionsLog.push_back(user.terminateSession());
    endSession();

}

/*
Method which returns a character representing a type of transaction
@return char   A single character representation                              */
string MainInterface::runSelection() {

  string selection;
  // re-display options after each transactions
  displayScreen();
  cout << "\n\n\t Please enter transaction ('Logout' if you want to end session): ";
  cin.clear(); cin.sync();
  getline(cin, selection);

  cout << endl;
  return selection;

}

/*
Void function which displays the screen with options for users to choose from */
void MainInterface::displayScreen() {

  cout << "\n\n\t FEATURED OPTIONS:" << "\n\n\t < To access a transaction, please"
    << " enter the respective transaction and hit ENTER >" << endl;

  cout << "\n\n\t Transaction List:\n"
    << "\n\t     create"
    << "\n\t     delete"
    << "\n\t     sell"
    << "\n\t     buy"
    << "\n\t     addcredit"
    << "\n\t     refund"
    << "\n\t     logout" << endl;

}

/*
Void function which calls writeToDailyTransaction method, this method may have
to perform additional task for phase 3 but temporarily does not do much other
than calling writeToDailyTransaction() method                                 */
void MainInterface::endSession() {
  //write to daily transaction log file
  //one transaction per line in file
  writeToDailyTransaction();
  cout << "\nSession Terminated!\n\t_______________________________________"
    << "______________________________________________________________" << endl;

}

/*
Iterates and writes transaction data stored in dailyTransactionsLog vector
in a Daily Transaction File                                                   */
void MainInterface::writeToDailyTransaction() {
  //this writes to the *output file*

  ofstream myfile;
  myfile.open ("Daily_Transaction_Output_File.txt");
  for (auto const& transaction : dailyTransactionsLog) {
    myfile << transaction << endl;
    //REMOVE THIS COMMENT!
    cout << transaction << endl;
  }
  myfile.close();
}

/*
Main which executes the program and continues its purpose until the program is
closed or exited.                                                             */
int main() {

  while (true) {
    MainInterface mainInterface;
    mainInterface.displayLoginInterface();
  }
  return 0;
 }
