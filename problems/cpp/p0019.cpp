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
            ListNode* tempLocation;
    
            int count = 1;
    
            while ((location->next)!= nullptr ){
                location = location->next;
                count++;
            }
    
            location = head;
    
            if ( count < 2 ){
                head = nullptr;
            }
            else
            {
                for ( int ndx = 0; ndx < count - n; ndx++)
                {
                    location = location->next;
                }
    
                tempLocation = location->next;
                location->next = (location->next)->next;
    
                if ( tempLocation != nullptr )
                    delete tempLocation;
            }
    
            return head;
    
        }
    };