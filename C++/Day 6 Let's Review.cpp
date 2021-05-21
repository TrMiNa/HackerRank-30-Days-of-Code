// Day 6: Let's Review
// Ver1: C++ string type
/* ************************************************

    Created by TrMiNa on 01/05/21.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string s, s1, s2;
    int T;
    cin >> T;
    cin.ignore();
    for(int i=1;i<=T;i++)
    {
        getline(cin, s);
        s1 = "";
        s2 = "";
        for(int j=0;j<s.length();j++)
        {
            if(j%2==0)
                s1+=s[j];
            else
                s2+=s[j];
        }
        cout << s1 << " " << s2 << endl;
    }   
    return 0;
}