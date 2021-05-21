#include <iostream>

using namespace std;

struct Node{
    char val;
    Node* next = nullptr;
};
struct Queue{
    Node* head = nullptr;
    Node* tail = nullptr;
};
struct Stack{
    Node* head = nullptr;
};

class Solution {
    private:
        Queue q;
        Stack s;
    public:
        void pushCharacter(char ch){
            Node* pNew = new Node;
            pNew->val = ch;
            pNew->next = s.head;
            s.head = pNew;
        }
        char popCharacter(){
            if(s.head==nullptr)
                return 0;
            Node* pTemp = s.head;
            s.head = s.head->next;
            char val = pTemp->val;
            delete pTemp;
            return val;
        }
        void enqueueCharacter(char ch){
            Node* pNew = new Node;
            pNew->val = ch;
            pNew->next = nullptr;
            if(q.head==nullptr){
                q.head = pNew;
            }
            else{
                q.tail->next = pNew;
            }
            q.tail = pNew;
        }
        char dequeueCharacter(){
            if(q.head==nullptr)
                return 0;
            char val = q.head->val;
            Node* pTemp = q.head;
            if(q.head==q.tail)
                q.head=q.tail=nullptr;
            else
                q.head=q.head->next;
            delete[]pTemp;
            return val;            
        }
    //Write your code here

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