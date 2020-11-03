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
    ListNode* insertionSortList(ListNode* head) {
        ListNode *start = new ListNode();
        start->next = head;
        ListNode *prev = start, *current = head;
        
        while(current){
            if(current->next and (current->next->val < current->val)){
                //find correct position
                while(prev->next and (prev->next->val < current->next->val)) prev = prev->next;
                ListNode *temp = prev->next;
                prev->next = current->next;
                current->next = current->next->next;
                prev->next->next = temp;
                prev = start;
            } else {
                current = current->next;
            }
        }
        return start->next;
    }
};