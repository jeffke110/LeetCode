#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
// Definition for singly-linked list.
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        std::unordered_set<ListNode *> nodeSet;

        // Traverse the first linked list and store each node in the set
        ListNode *currA = headA;
        while (currA != nullptr)
        {
            nodeSet.insert(currA);
            currA = currA->next;
        }

        // Traverse the second linked list and check if any node is already present in the set
        ListNode *currB = headB;
        while (currB != nullptr)
        {
            if (nodeSet.count(currB) > 0)
            {
                return currB; // Found intersection point
            }
            currB = currB->next;
        }

        return nullptr; // No intersection found
    }
};