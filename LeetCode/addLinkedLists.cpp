#include <iostream>
using namespace std;

// Definition for singly-linked list
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *dummy = new ListNode(0); // Dummy node to simplify code
        ListNode *temp = dummy;            // Pointer to construct the result list
        int carry = 0;                     // Initialize carry

        // Traverse both lists
        while (l1 != NULL || l2 != NULL || carry)
        {
            int sum = carry; // Start with carry from the previous operation
            if (l1)
            {
                sum += l1->val; // Add value from l1
                l1 = l1->next;  // Move to the next node in l1
            }
            if (l2)
            {
                sum += l2->val; // Add value from l2
                l2 = l2->next;  // Move to the next node in l2
            }

            carry = sum / 10;                    // Extract carry
            temp->next = new ListNode(sum % 10); // Create a new node with the unit digit
            temp = temp->next;                   // Move temp to the new node
        }

        return dummy->next; // Return the result list (excluding dummy)
    }
};

// Helper function to print a linked list
void printList(ListNode *head)
{
    while (head)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

// Helper function to create a linked list from an array
ListNode *createList(int arr[], int size)
{
    ListNode *head = new ListNode(arr[0]);
    ListNode *current = head;
    for (int i = 1; i < size; i++)
    {
        current->next = new ListNode(arr[i]);
        current = current->next;
    }
    return head;
}

int main()
{
    // Example 1: l1 = [2,4,3], l2 = [5,6,4]
    int arr1[] = {2, 4, 3, 6, 9};
    int arr2[] = {5, 6, 4};

    ListNode *l1 = createList(arr1, 5);
    ListNode *l2 = createList(arr2, 3);

    Solution sol;
    ListNode *result = sol.addTwoNumbers(l1, l2);

    printList(result); // Output: 7 0 8
    return 0;
}
