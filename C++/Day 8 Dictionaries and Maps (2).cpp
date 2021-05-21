//Day 8: Dictionaries and Maps
/* ************************************************

    Created by TrMiNa on 01/27/21.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    map<string, int> phoneBook;
    int tempNum;
    string tempName;
    
    int n;
    cin>>n;
    while(n)
    {
        n--;
        cin >> tempName >> tempNum;
        phoneBook.insert(pair<string, int>(tempName, tempNum));
    }
    
    map<string, int>::iterator itr;
    
    bool isFound;
    string searchName;
    while(cin>>searchName)
    {
        itr = phoneBook.find(searchName);
        if(itr!=phoneBook.end())
            cout << itr->first << "=" << itr->second << endl;
        else {
            cout << "Not found" << endl;
        }
    }
    
    return 0;
}
