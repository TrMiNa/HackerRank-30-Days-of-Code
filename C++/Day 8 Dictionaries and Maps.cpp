//Day 8: Dictionaries and Maps
/* ************************************************

    Created by TrMiNa on 01/07/21.
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
    int n;
    string name, phone;
    cin >> n;//std input for number of entries in to MAP
    map <string, string> contacts;
    for (int i = 0; i < n; i++) 
    {
        cin >> name;
        cin >> phone;
        contacts.insert(pair<string, string>(name, phone));
    }
    
    string x;
    while(cin >> x) {
        if (contacts.find(x) != contacts.end()) {
            cout << x << "=" << contacts.find(x)->second << endl;
        } else {
            cout << "Not found" << endl;
        }
    }
    
    return 0;
}