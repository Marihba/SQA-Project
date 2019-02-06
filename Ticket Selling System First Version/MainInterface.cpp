// main interface for communication with the users
#include <iostream>
#include <bits/stdc++.h>
#include <fstream>
#include <vector>
#include "User.h"
#include "LoginInterface.h"

using namespace std;

class MainInterface {
  private:
    // class variables
    LoginInterface loginScreen;
    User currentUser;
    vector<string> dailyTransactionsLog;

  public:
    // class methods
    void displayLoginInterface();
    void displayUserProfile(); //displays user and this will also initialize a User class and store user information
    void appendToTransactionLogList(string currentTransaction);
    void endSession();
    void writeToDailyTransaction(vector<string> data);
};

void MainInterface::displayLoginInterface() {
  //Initializes Login Interface class and works with it
}

void MainInterface::displayUserProfile() {
  //displays user profile
  cout << "Welcome to TSS!!\n" << "\ta portal just for " <<
  "getting the most FIRE deals on hit popular event tickets" << endl;
}

void MainInterface::appendToTransactionLogList(string currentTransaction) {
  dailyTransactionsLog.push_back(currentTransaction);
}

void MainInterface::endSession() {
  //write to daily transaction log file
  //one transaction per line in file
  writeToDailyTransaction(dailyTransactionsLog);
  cout << "Session Terminated!" << endl;
  displayLoginInterface();

}

void MainInterface::writeToDailyTransaction(vector<string> data) {
  //this writes to the *output file*

  ofstream myfile;
  myfile.open ("Daily_Transaction_Output_File.txt");
  for(vector<string>::iterator it = data.begin(); it != data.end(); ++it) {
    myfile << *it << endl;
  }
  myfile.close();
}

int main() {

  cout << "Succesfully Executed!" << endl;

  return 0;
 }
