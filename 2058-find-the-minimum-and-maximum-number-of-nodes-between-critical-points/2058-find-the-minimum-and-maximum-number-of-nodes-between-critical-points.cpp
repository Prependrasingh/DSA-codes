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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {

        if (head == NULL || head->next == NULL || head->next->next == NULL)
            return {-1, -1};

        // curr, prev;
        ListNode* prev = head;
        ListNode* curr = head->next;
        int idx = 1;

        int FirstIdx = -1, prevIdx = -1;

        int min_dist = INT_MAX;
        int max_dist = 0;

        while (curr->next != NULL) {
            ListNode* nxt = curr->next;

            if (curr->val > prev->val && curr->val > nxt->val ||
                curr->val < prev->val && curr->val < nxt->val) {
                if (FirstIdx == -1) {
                    FirstIdx = idx;
                } else {
                    min_dist = min(min_dist, idx - prevIdx);
                }

                prevIdx = idx;
            }

            prev = curr;
            curr = nxt;
            idx++;
        }

        if (min_dist == INT_MAX)
            return {-1, -1};
        return {min_dist, prevIdx - FirstIdx};
    }
};