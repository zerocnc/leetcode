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
    
            std::stack<ListNode*> tempS;
            ListNode* past = head;
            ListNode* dummy = ListNode(0);
            ListNode* current = new ListNode;
            bool first = true;
    
            while ( current->next != nullptr ){
                for (size_t ndx = 0; ndx < k; ndx ){
                    tempS.push(current);
                    current = current->next;
                }
    
                if ( first ){
                    head = tempS.top();
                    past = tempS.top();
                }
    
                for (size_t ndx = 0; ndx < k; ndx ) {
                    tempS.pop();
                    past->next = tempS.top();
                    past->next = dummy;
                }
            }
            
    
    
    
    
    
            return head;
        }
    };