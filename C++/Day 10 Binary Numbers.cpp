//Day 10: Binary Numbers
/* ************************************************

    Created by TrMiNa on 01/09/21.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */
#include <bits/stdc++.h>

using namespace std;
Day 10: Binary Numbers
int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    int temp, max = 0, count = 0;
    while(n>=1)
    {
        temp = n % 2;
        n/=2;
        if(temp==1)
            count++;
        else
        {
            if(count>max)
                max = count;
            count = 0;
        }
    }
    if(count>max)
        max = count;
    cout << max <<endl;
    
    return 0;
}
