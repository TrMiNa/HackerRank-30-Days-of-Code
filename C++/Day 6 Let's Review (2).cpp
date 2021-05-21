// Day 6: Let's Review
// Ver2: string with c type (array of string)
/* ************************************************

    Created by TrMiNa on 01/05/21.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char s[100000], s1[100000], s2[100000];
    int len1, len2;
    int T;
    cin >> T;
    cin.ignore();
    for(int i=1;i<=T;i++)
    {
        cin.get(s, 100000, '\n');
        cin.ignore();
        len1=0;
        len2=0;
        for(int j=0;j<strlen(s);j++)
        {
            if(j%2==0)
                s1[len1++] = s[j];
            else
                s2[len2++] = s[j];
        }
        s1[len1] = '\0';
        s2[len2] = '\0';
        cout << s1 << " " << s2 << endl;
    }   
    return 0;
}
