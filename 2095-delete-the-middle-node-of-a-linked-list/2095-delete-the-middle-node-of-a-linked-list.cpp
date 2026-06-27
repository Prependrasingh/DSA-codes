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
    ListNode* deleteMiddle(ListNode* head) {

        if(head == NULL || head->next == NULL){
            return NULL;
        }

        int cnt = 1;
        ListNode* temp = head;
        ListNode* prev = nullptr;

        while (temp->next != NULL) {
            cnt++;
            temp = temp->next;
        }

        temp = head;

        int middle = 0;

        while(middle != cnt/2){
            prev = temp;
            temp = temp->next;
            middle++;
        }

        if(prev == NULL){
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }

        prev->next = temp->next;
        delete(temp);
        return head;



    }
};