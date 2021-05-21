//Day 11: 2D Arrays
/* ************************************************

    Created by TrMiNa on 01/10/21.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */
#include <bits/stdc++.h>

using namespace std;

int sumHouseglass(vector<vector<int>> a, int i, int j)
{
    return a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j+1]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
}
int main()
{
    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    int maxSum=sumHouseglass(arr, 0, 0);
    int tempSum;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            tempSum = sumHouseglass(arr, i, j);
            if(tempSum>maxSum)
                maxSum=tempSum;
        }
    }
    cout << maxSum << endl;
    
    
    return 0;
}
