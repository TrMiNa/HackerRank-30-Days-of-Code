//Day 7: Arrays
/* ************************************************

    Created by TrMiNa on 01/06/21.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[100000];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    for(int j=n-1;j>=0;j--)
        cout << arr[j] << " ";
    return 0;
}
