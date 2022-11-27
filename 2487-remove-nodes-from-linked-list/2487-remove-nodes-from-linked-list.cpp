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
    ListNode * reverse(ListNode *head){
        ListNode *curr = head;
        ListNode *prev = NULL;
        ListNode* nxt = head->next;
        while(curr!=NULL){
            curr->next = prev ;
            prev = curr;
            curr = nxt;
            if(nxt!=NULL) nxt = nxt->next;
            
        }
        return prev;
    }
    ListNode* removeNodes(ListNode* head) {
        stack<int> st;
        while(head!=NULL){
            st.push(head->val);
            head = head->next;
        }
        ListNode *newHead = new ListNode(st.top());
        st.pop();
        ListNode *temp = newHead;
        
        while(!st.empty()){
            if(st.top()>=newHead->val){
                ListNode* node = new ListNode(st.top());
                newHead->next = node;
                newHead = newHead->next;
                st.pop();
            }
            else
                st.pop();
        }
        return reverse(temp);
        
    }
};