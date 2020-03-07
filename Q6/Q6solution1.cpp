/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> reversePrint(ListNode* head) {
        vector<int> a;
        stack<ListNode*> b;
        ListNode* p = head;
        while(p!=NULL){
            b.push(p);
            p = p->next;
        }
        while(b.size()){
            int value = b.top()->val;
            a.push_back(value);
            b.pop();
        }
        return a;
    }
};
