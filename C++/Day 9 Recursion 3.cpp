//Day 9: Recursion 3
/* ************************************************

    Created by TrMiNa on 01/08/21.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */
#include <bits/stdc++.h>

using namespace std;

// Complete the factorial function below.
int factorial(int n) {
    if(n==1||n==0) return 1;
    return n * factorial(n-1);

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = factorial(n);

    fout << result << "\n";

    fout.close();

    return 0;
}
