class Solution {
public:
    int pairSum(ListNode* head) {

        if (head == NULL || head->next == NULL)
            return 0;

        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = NULL;

        while (fast && fast->next) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        prev->next = NULL;

        // Reverse second half
        ListNode* prev1 = NULL;
        ListNode* curr = slow;

        while (curr != NULL) {
            ListNode* nextNode = curr->next;

            curr->next = prev1;
            prev1 = curr;
            curr = nextNode;
        }

        ListNode* temp1 = head;
        ListNode* temp2 = prev1;   // FIX

        int maxSum = INT_MIN;

        while (temp1 && temp2) {
            maxSum = max(maxSum, temp1->val + temp2->val);

            temp1 = temp1->next;
            temp2 = temp2->next;
        }

        return maxSum;
    }
};