/*
Focus of this class is to define all the Daily Transaction Data (DTD) methods
that ensures every transaction type produces a string representation and is sent
to the User Class.

@author Abhiram Sinnarajah & Jude AntonyRajan
@version 1.05
@since  2019-02-06                                                            */

#include <iostream>
#include <string>
#include "DailyTransactionData.h"
#include <iomanip> // setprecision
#include <sstream> // stringstream

using namespace std;

//~~~~~~~~~~~~~~~~~~~~~~Constructor methods for DTD class~~~~~~~~~~~~~~~~~~~~~~~

//DailyTransactionData::DailyTransactionData() {}

/*
A constructor that takes a unique set of params for a certain action to occur.
This is for transaction types 00, 01, 02, 06.
@param categoryID       a constant term to identify the constructor type
@param tcode            string specifying the code for transaction
@param uname            string specifying username of the current user
@param utype            string specifying user type/granted status
@param creds            float specifying the amount of available credits      */
DailyTransactionData::DailyTransactionData(CategoryOne, string tcode,
  string uname, string utype, float creds) {
    this->transactionCode = tcode;
    this->username = uname;
    this->userType = utype;
    this->availableCredits = creds;
}

/*
A constructor that takes a unique set of params for a certain action to occur.
In this case for transaction type 05 ONLY*
@param categoryID   a constant term to identify the constructor type
@param tcode        string specifying the code for transaction
@param bname        string specifying username of the buyer
@param sname        string specifying username of the seller
@param refcreds     float specifying the amount of credits to be refunded     */
DailyTransactionData::DailyTransactionData(CategoryTwo, string tcode,
  string bname, string sname, float refcreds) {
    this->transactionCode = tcode;
    this->username = bname;
    this->sellerUsername = sname;
    this->refundCredits = refcreds;
}

/*
A constructor that takes a unique set of params for a certain action to occur.
This is for transaction types 03 & 04.
@param categoryID   a constant term to identify the constructor type
@param tcode        string specifying the code for transaction
@param ename        string specifying name of the event
@param sname        string specifying username of the seller
@param tnum         int specifying the number of tickets for sale
@param tprice       float specifying the price per ticket                     */
DailyTransactionData::DailyTransactionData(string tcode, string ename,
  string sname, int tnum, float tprice) {
    this->transactionCode = tcode;
    this->eventName = ename;
    this->sellerUsername = sname;
    this->numTicketsForSale = tnum;
    this->ticketPrice = tprice;
}

//~~~~~~~~~~~~~~~~~Non-constructor methods for User class~~~~~~~~~~~~~~~~~~~~~~~

/*
Returns a string representation of the transaction to be stored in the Daily
transaction file [output]
@return string  The string format of the transaction                          */
string DailyTransactionData::stringRepresentation() {
  string formatedStr;

  if (this->transactionCode == "01" || this->transactionCode == "02" ||
    this->transactionCode == "06" ||  this->transactionCode == "00") {
    formatedStr = toStrCodeTypeOne();
  }
  else if (this->transactionCode == "05") {
    formatedStr = toStrCodeTypeTwo();
  }
  else if (this->transactionCode == "03" || this->transactionCode == "04") {
      formatedStr = toStrCodeTypeThree();
  }

  return formatedStr;
}

/*
Returns a string representation for the following transactions 00, 01, 02, 06.
@return string  The string format of the transaction.                         */
string DailyTransactionData::toStrCodeTypeOne() {

  string format;
  string availableCredsStr = floatToPrecision(this->availableCredits, 2);

  format = this->transactionCode + ' '
    + this->username;
  // max 15 characters for username
  format.append(15 - this->username.size() + 1, ' ');  // fills spaces
  format += this->userType + ' ';
  // max 9 characters for available credits
  format.append(9 - availableCredsStr.size(), '0');  // fills zeros
  format += availableCredsStr;
  //cout << format.size() << endl;
  return format;
}

/*
Returns a string representation for the transaction 05 (Refund).
@return string  The string format of the transaction.                         */
string DailyTransactionData::toStrCodeTypeTwo() {

  string format;
  string refundCredsStr = floatToPrecision(this->refundCredits, 2);

  format = this->transactionCode + ' '
    + this->username;
  format.append(15 - this->username.size() + 1, ' ');
  format += this->sellerUsername;
  format.append(15 - this->sellerUsername.size() + 1, ' ');
  format.append(9 - refundCredsStr.size(), '0');
  format += refundCredsStr;
  //cout << format.size() << endl;
  return format;

}

/*
Returns a string representation for the transactions 03 &  04 (Buy & Sell).
@return string  The string format of the transaction.                         */
string DailyTransactionData::toStrCodeTypeThree() {

  string format;
  string priceStr = floatToPrecision(this->ticketPrice, 2);
  string numTicketsStr = to_string(this->numTicketsForSale);

  format = this->transactionCode + ' '
    + this->eventName;
  // max 25 characters for event name
  format.append(25 - this->eventName.size() + 1, ' ');
  format += this->sellerUsername;
  format.append(15 - this->sellerUsername.size() + 1, ' ');
  // max 3 characters for number of tickets
  format.append(3 - numTicketsStr.size(), '0');
  format += numTicketsStr + ' ';
  // max 6 characters for price
  format.append(6 - priceStr.size(), '0');
  format += priceStr;
  //cout << format.size() << endl;
  return format;
}

/*
Takes in a float value and returns a string representation of a floating value
followed by two trailing decimals.
@param floatValue   A float value that is to be stripped
@param precision    An int value for the precision of the above float
@return string      A string representation of the above floating value.      */
string DailyTransactionData::floatToPrecision(float floatValue, int precision) {
  stringstream stream;
  stream << fixed << setprecision(precision) << floatValue;
  return stream.str();
}
