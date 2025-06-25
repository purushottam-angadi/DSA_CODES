#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* rotateRight(ListNode* head, int k) {
    if (!head || !head->next || k == 0) return head;

    // Compute the length of the list
    ListNode* temp = head;
    int len = 1;
    while (temp->next) {
        temp = temp->next;
        len++;
    }

    // Make it circular
    temp->next = head;

    // Find the new tail (len - k % len - 1) and new head
    k = k % len;
    ListNode* newTail = head;
    for (int i = 0; i < len - k - 1; i++) {
        newTail = newTail->next;
    }

    // Update head and break the circular link
    ListNode* newHead = newTail->next;
    newTail->next = nullptr;

    return newHead;
}

// Helper function to print linked list
void printList(ListNode* head) {
    while (head) {
        cout << head->val << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}

int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    cout << "Original List:\n";
    printList(head);

    head = rotateRight(head, 2);  // Rotate twice

    cout << "Rotated List:\n";
    printList(head);

    return 0;
}