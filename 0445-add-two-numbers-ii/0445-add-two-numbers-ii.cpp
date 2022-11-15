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
    ListNode *reverse(ListNode *head){
        ListNode*prev = NULL;
        ListNode* curr = head;
        while(curr!=NULL){
            ListNode *temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* h1, ListNode* h2) {
        ListNode *l1 = reverse(h1);
        ListNode *l2 = reverse(h2);
        
       ListNode *newNode = new ListNode();
        ListNode* temp = newNode;
        int carry = 0;
        while(l1!=NULL || l2!=NULL || carry){
            int sum = 0;
            if(l1!=NULL){
                sum+=l1->val;
                l1 = l1->next;
            }
            if(l2!=NULL){
                sum+=l2->val;
                l2 = l2->next;
            }
            sum+=carry;
            carry = sum/10;
            ListNode *node = new ListNode(sum%10);
            temp->next = node;
            temp = temp->next;
            
        }
        return reverse(newNode->next);
        
      
        
    }
};