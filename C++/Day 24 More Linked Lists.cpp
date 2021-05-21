#include <cstddef>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;	
class Node
{
    public:
        int data;
        Node *next;
        Node(int d){
            data=d;
            next=NULL;
        }
};
class Solution{
    public:
        
        Node* deleteAllValue(Node* head, int val){
            Node* pTemp;
            while(head && head->data == val){
                pTemp = head;
                head = head->next;
                delete pTemp;
            }
            if(head==nullptr)
                return nullptr;
            Node* cur = head;
            while(cur->next){
                while(cur->next&&cur->next->data==val){
                    pTemp = cur->next;
                    cur->next = pTemp->next;
                    delete pTemp;
                }
                cur = cur->next;
            }
            return head;
        }
        
        Node* removeDuplicates(Node *head)
        {
            if(head==nullptr)
                return nullptr;
            Node* cur = head;
            while(cur){
                cur->next = deleteAllValue(cur->next, cur->data);
                cur = cur->next;
            }
            return head;
        }

          Node* insert(Node *head,int data)