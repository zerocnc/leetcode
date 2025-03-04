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
        ListNode* swapPairs(ListNode* head) {

            ListNode dummy(0, head);
            ListNode* current = head;
            ListNode* previous = &dummy;

            while ( current != nullptr && current->next != nullptr ){

                ListNode* past = current->next->next;
                ListNode* temp = current->next;

                temp->next = current;
                current->next = past;
                previous->next = temp;

                previous = current;
                current = past;


            }

    
            return dummy.next;
        }
    };