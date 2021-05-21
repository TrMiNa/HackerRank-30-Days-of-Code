// Day 3: Intro to Conditional Statements
/* ************************************************

    Created by TrMiNa on 01/02/21.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */
#include <bits/stdc++.h>

using namespace std;



int main()
{
    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    if(N%2==1)
        cout << "Weird" << endl;
    else
    {
        if(N>=2&&N<=5)
            cout << "Not Weird" << endl;
        else if(N>=6&&N<=20)
            cout << "Weird" << endl;
        else if(N>20)
            cout << "Not Weird" << endl;
    }
    
    return 0;
}

