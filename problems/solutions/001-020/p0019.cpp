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
        ListNode* removeNthFromEnd(ListNode* head, int n) {
            ListNode* location = head;
            ListNode* tempLocation = head;
        
            for ( int i = 0; i < n; i++ )
            {
                location = location->next;
            }
    
            if ( !location )
                return head->next;
    
            while ( location->next ){
                location = location->next;
                tempLocation = tempLocation->next;
            }
    
            tempLocation->next = (tempLocation->next)->next;
       
            return head;
    
        }
    };