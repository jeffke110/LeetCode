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

  ListNode* reverseList(ListNode* head) {
    ListNode* prev = nullptr;
    ListNode* curr = head;
    
    while (curr) {
        ListNode* nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }
    
    return prev;
}

void reorderList(ListNode* head) {
    if (!head || !head->next)
        return;

    // Find the middle of the list
    ListNode* slow = head;
    ListNode* fast = head;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    // Reverse the second half of the list
    ListNode* secondHalf = reverseList(slow->next);
    slow->next = nullptr;

    // Merge the two halves
    ListNode* curr = head;
    ListNode* nextNode = nullptr;

    while (secondHalf) {
        nextNode = curr->next;
        curr->next = secondHalf;
        secondHalf = secondHalf->next;
        curr->next->next = nextNode;
        curr = nextNode;
    }
}
};