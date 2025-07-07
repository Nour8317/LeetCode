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
    void reorderList(ListNode* head) {
        if (!head || !head->next) return;
        vector<ListNode*> p;
        ListNode* h = head;
        while(h){
            p.push_back(h);
            h=h->next;
        }

        int i=0,j=p.size()-1;
        while(i<j){
            p[i]->next=p[j];
            i++;
            if(i>=j)break;
            p[j]->next=p[i];
            j--;
        }
         p[j]->next = nullptr;
    }
};