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

        vector<int> ans , LinkedArr;

        ListNode* temp = head;

        while(temp != NULL){
            LinkedArr.push_back(temp->val);
            temp = temp->next;
        }

        int n = LinkedArr.size();

        for(int i = 1 ; i < n - 1 ; i++){
            if(LinkedArr[i] > LinkedArr[i-1] && LinkedArr[i+1] < LinkedArr[i] ||
             LinkedArr[i] < LinkedArr[i-1] && LinkedArr[i+1] > LinkedArr[i]){
                ans.push_back(i);
             }
        }

        int m = ans.size();

        if(m < 2)return {-1 , -1};

        int mx = ans[m-1] - ans[0];

        int mn = INT_MAX;

        for(int i = 0 ; i < m - 1 ; i++){
            mn = min(mn , abs(ans[i] - ans[i+1]));
        }

        return {mn , mx};
    }
};