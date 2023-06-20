#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
// Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };
 
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == nullptr){
            return false;
        }
        vector<ListNode *> nodes;
        while(head->next != nullptr){
            auto it = std::find(nodes.begin(), nodes.end(), head);
            //element not found
            if(it == nodes.end()){
                nodes.push_back(head);
            //element found
            }else{
                return true;
            }
            head = head->next;
        }
        return false;
    }
};