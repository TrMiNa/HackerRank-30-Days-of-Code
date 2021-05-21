//Day 14: Scope
/* ************************************************

    Created by TrMiNa on 01/13/21.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;
    Difference(vector<int>a)
    {
        for(int i=0;i<a.size();i++)
            elements.push_back(a[i]);
    }
	// Add your code here
    void computeDifference()
    {
        int len = elements.size();
        int maxAbsDiff = abs(elements[0]-elements[1]);
        for(int i=0;i<len-1;i++)
        {
            for(int j=i+1;j<len;j++)
            {
                int temp = abs(elements[i] - elements[j]);
                if(temp>maxAbsDiff)
                    maxAbsDiff = temp;
            }
        }
        maximumDifference = maxAbsDiff;
    }
}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}