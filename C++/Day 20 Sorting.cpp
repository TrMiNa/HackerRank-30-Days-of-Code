// Day 20: Sorting
/* ************************************************

    Created by TrMiNa on 01/19/21.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
    	cin >> a[a_i];
    }
    // Write Your Code Here
    int countSwap = 0;
    bool isSwapped = true;
    while(isSwapped)
    {
        isSwapped = false;
        for(int i=0;i<n-1;i++)
        {
            if(a[i]>a[i+1])
            {
                int temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
                isSwapped = true;
                countSwap++;
            }
        }
    }
    if(countSwap==1)
        cout << "Array is sorted in 1 swap." << endl;
    else
        cout << "Array is sorted in " << countSwap << " swaps." << endl;
    cout << "First Element: " << a[0] << endl;
    cout << "Last Element: " << a[n-1] << endl;
    return 0;
}