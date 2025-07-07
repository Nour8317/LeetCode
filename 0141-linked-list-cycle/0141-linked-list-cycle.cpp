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
    bool hasCycle(ListNode *head) {
        vector<ListNode*> pointers;
        if(!head){
            return 0;
        }
        pointers.push_back(head);
        ListNode* h = head;
        while(h){
            for(int i=0; i<pointers.size(); i++){
                if(h->next == pointers[i]){
                    return 1;
                }
            }
            pointers.push_back(h->next);
            h = h->next;
        }
        return 0;
        
    }
};