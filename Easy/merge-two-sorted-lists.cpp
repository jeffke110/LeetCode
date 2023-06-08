#include <iostream>

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    if (l1 == nullptr)
        return l2;
    if (l2 == nullptr)
        return l1;

    ListNode* mergedList = nullptr;
    ListNode* current = nullptr;

    // Determine the head of the merged list
    if (l1->val < l2->val) {
        mergedList = l1;
        current = l1;
        l1 = l1->next;
    } else {
        mergedList = l2;
        current = l2;
        l2 = l2->next;
    }

    // Merge the two lists
    while (l1 != nullptr && l2 != nullptr) {
        if (l1->val < l2->val) {
            current->next = l1;
            l1 = l1->next;
        } else {
            current->next = l2;
            l2 = l2->next;
        }
        current = current->next;
    }

    // Append any remaining nodes from l1 or l2
    if (l1 != nullptr)
        current->next = l1;
    else if (l2 != nullptr)
        current->next = l2;

    return mergedList;
}

// Utility function to print a linked list
void printList(ListNode* head) {
    ListNode* current = head;
    while (current != nullptr) {
        std::cout << current->val << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

int main() {
    // Example usage
    ListNode* l1 = new ListNode(1);
    l1->next = new ListNode(2);
    l1->next->next = new ListNode(4);

    ListNode* l2 = new ListNode(1);
    l2->next = new ListNode(3);
    l2->next->next = new ListNode(4);

    ListNode* merged = mergeTwoLists(l1, l2);

    printList(merged);  // Output: 1 1 2 3 4 4

    // Clean up memory
    while (merged != nullptr) {
        ListNode* temp = merged;
        merged = merged->next;
        delete temp;
    }

    return 0;
}
