// Day 1: Data Types
/* ************************************************

    Created by TrMiNa on 12/31/20.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */
#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    int inInt;
    double inDou;
    string inStr;
    // Read and save an integer, double, and String to your variables.
    cin>>inInt;
    cin>>inDou;
    cin.ignore();
    getline(cin, inStr);
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    
    // Print the sum of both integer variables on a new line.
    cout << i + inInt << endl;
    // Print the sum of the double variables on a new line.
    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(1);
    cout << d + inDou << endl;
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout << s << inStr << endl;
    
    return 0;