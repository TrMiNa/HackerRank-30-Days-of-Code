// Day 5: Loops
/* ************************************************

    Created by TrMiNa on 01/04/21.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */
#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    for(int i=1;i<=10;i++)
        cout << n << " x " << i << " = " << n*i << endl;
            
    return 0;
}
