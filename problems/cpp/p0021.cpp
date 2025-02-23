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
        ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
            ListNode* answer;
            
            while ( list1 != nullptr || list2 != nullptr ){
                if ( list1 != nullptr && list2 != nullptr ){
                    if ( list1->val <= list2->val ){
                        answer = list1;
                        list1 = list1->next;
                    } else if  ( list1->val > list2->val) {
                        answer = list2;
                        list2 = list2->next;
                    }
                    else{
                        answer = list1;
                        list1 = list1->next;
                    }
                }
                else if ( list1 == nullptr ){
                    answer = list2;
                    list2 = list2->next;
                }
                else if ( list2 == nullptr ){
                    answer = list1;
                    list1 = list1->next;
                }
    
            }
    
            return answer;
    
        }
    };