/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_set<ListNode *> setNodes;
        ListNode * curr = head;

        while(curr != nullptr){
            if(setNodes.count(curr) == 0){
                setNodes.insert(curr);
                curr = curr->next;
            }else{
                return true;
            }
        }
        return false;
    }
};