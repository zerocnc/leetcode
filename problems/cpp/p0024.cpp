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

            long long counter = 1;
            bool swapCounter = false;
            ListNode* pastNode = new ListNode;
            ListNode* currentNode = new ListNode;
            ListNode* swap = new ListNode;
            ListNode* temp = new ListNode;

            if (head != nullptr ){
                currentNode = head;
                
                while ( currentNode != nullptr ){
                    currentNode = currentNode->next;

                    // swap
                    // a->b->c
                    // b->a->c

                    // p1->p2->p3
                    // l1 & l2

                    // p1/l1 -> p2/l2 ->p3


                
                }

            }
    
            return head;
        }
    };