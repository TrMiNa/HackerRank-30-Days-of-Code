//Day 18: Queues and Stacks
/* ************************************************

    Created by TrMiNa on 01/17/21.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

#include <iostream>
#include <stack>
#include <queue>

using namespace std;

class Solution {
    //Write your code here
    public:
        stack<char> st;
        queue<char> qu;
        void pushCharacter(char c)
        {
            st.push(c);
        }
        void enqueueCharacter(char c)
        {
            qu.push(c);
        }
        char popCharacter()
        {
            char temp = st.top();
            st.pop();
            return temp;
        }
        char dequeueCharacter()
        {
            char temp = qu.front();
            qu.pop();
            return temp;
        }
};

int main() {
    // read the string s.
    string s;
    getline(cin, s);
    
  	// create the Solution class object p.
    Solution obj;
    
    // push/enqueue all the characters of string s to stack.
    for (int i = 0; i < s.length(); i++) {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }
    
    bool isPalindrome = true;
    
    // pop the top character from stack.
    // dequeue the first character from queue.
    // compare both the characters.
    for (int i = 0; i < s.length() / 2; i++) {
        if (obj.popCharacter() != obj.dequeueCharacter()) {
            isPalindrome = false;
            
            break;
        }
    }
    
    // finally print whether string s is palindrome or not.
    if (isPalindrome) {
        cout << "The word, " << s << ", is a palindrome.";
    } else {
        cout << "The word, " << s << ", is not a palindrome.";
    }
    
    return 0;
}