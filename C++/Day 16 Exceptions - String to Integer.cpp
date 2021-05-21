//Day 16: Exceptions - String to Integer
/* ************************************************

    Created by TrMiNa on 01/15/21.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    string S;
    cin >> S;
    try {
        int num;
        num = stoi(S);
        cout << num << endl;
    } catch (...) {
        cout << "Bad String" << endl;
    }
    return 0;
}
