
#include <iostream>

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *reverse(ListNode *head)
    {
        ListNode *prev = nullptr;
        while (head != nullptr)
        {
            ListNode *temp = head->next;
            head->next = prev;
            prev = head;
            head = temp;
        }
        return prev;
    }

    void printNodes(ListNode *head)
    {
        ListNode *current = head;
        while (current != nullptr)
        {
            std::cout << current->val << std::endl;
            current = current->next;
        }
    }
    bool isPalindrome(ListNode *head)
    {
        // Handle edge cases
        if (!head || !head->next)
            return true;

        // Get the middle of the list using slow and fast pointers
        ListNode *slow = head;
        ListNode *fast = head;
        while (fast->next && fast->next->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        // Reverse the second half of the list
        ListNode *secondHalfReversed = reverse(slow->next);

        // Compare the first and reversed second halves
        ListNode *p1 = head;
        ListNode *p2 = secondHalfReversed;
        while (p2)
        {
            if (p1->val != p2->val)
                return false;
            p1 = p1->next;
            p2 = p2->next;
        }

        // Restore the original list
        slow->next = reverse(secondHalfReversed);

        return true;
    }
};

int main()
{
    // Create a linked list: 1 -> 2 -> 3 -> 4 -> nullptr
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);

    Solution solution = Solution();
    solution.isPalindrome(head);

    // Clean up the allocated memory
    ListNode *current = head;
    while (current != nullptr)
    {
        ListNode *temp = current;
        current = current->next;
        delete temp;
    }

    return 0;
}