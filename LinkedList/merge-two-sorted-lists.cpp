/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    if(l1 == nullptr){
        return l2;
    }
    if(l2 == nullptr){
        return l1;
    }
    
    ListNode * head_l1 = l1;
    ListNode * head_l2 = l2;

    ListNode * current_l1 = l1;
    ListNode * current_l2 = l2;

    ListNode * outputNode; 
    ListNode * headNode;

    if(l1->val > l2->val){
        //start with l2;
        headNode = current_l2;
        outputNode = current_l2;
        current_l2 = current_l2->next;
    }else{
        //start with l1;
        headNode = current_l1;
        outputNode = current_l1;
        current_l1 = current_l1->next;
    }

    while(current_l1 != nullptr && current_l2 != nullptr){
        if(current_l1->val > current_l2->val ){
            outputNode->next = current_l2;
            current_l2 = current_l2->next;
        }else{
           outputNode->next = current_l1;
           current_l1 = current_l1->next;
        }
        outputNode = outputNode->next;
    }

    if(current_l1 == nullptr){
        outputNode->next = current_l2;
    }else{
        outputNode->next = current_l1;
    }

    return headNode;
}

};