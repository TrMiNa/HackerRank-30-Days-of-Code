#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isPrime(int n){
    if(n==2)
        return true;
    if(n<=1 || n%2==0)
        return false;
    for(int i=3;i*i<=n;i+=2)
        if(n%i==0)
            return false;
    return true;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        if(isPrime(n))
            cout << "Prime\n";
        else
            cout << "Not prime\n";
    }
    return 0;
}
