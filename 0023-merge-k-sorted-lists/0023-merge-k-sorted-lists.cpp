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
    ListNode* mergeKLists(vector<ListNode*>& lists) {

        vector<int> ans;

        ListNode* temp = nullptr;
        for(auto a : lists){
            while(a != nullptr){
                ans.push_back(a->val);
                a = a->next;
            }
        }

        sort(ans.begin() , ans.end() , greater<int>());

        for(int i = 0 ; i < ans.size() ; i++){
            ListNode* res = new ListNode(ans[i] , temp);
            temp = res;
        }
        return temp;
    }
};