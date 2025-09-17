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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head == nullptr){
            return head;
        }
        
        ListNode* dummy = new ListNode(-1);
        dummy->next = head;
        ListNode* tail = dummy;
        ListNode* curr = head;
        
        while(curr != nullptr ){

            ListNode* temp = curr;
            int count = 0;
            while(temp != nullptr && count < k){
                temp = temp->next;
                count++;
            }
            if(count < k) break;

            ListNode* groupHead = curr;
            ListNode* prev = nullptr;
            ListNode* next = nullptr;
            count = 0;
            
            while(curr != nullptr && count < k){
                next = curr->next;
                curr->next = prev;
                prev = curr;
                curr = next;
                count++;
            }
            tail->next = prev;
            groupHead->next = curr;
            tail = groupHead;
        }
        
        return dummy->next;        
    }
};