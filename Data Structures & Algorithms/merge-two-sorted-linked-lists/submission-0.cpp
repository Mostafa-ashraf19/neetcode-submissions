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

    // Iterative
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == nullptr) 
            return list2;
        else if(list2 == nullptr) 
            return list1;
        
        ListNode dum(0);
        ListNode* newList = &dum;


        while(list1 != nullptr && list2 != nullptr) {
            if(list1->val < list2->val) {
                newList->next = list1;
                list1 =  list1->next;
            } else {
                newList->next = list2;
                list2 =  list2->next;
            }
            newList = newList->next;
        }

        if(list1) {
            newList->next = list1;
        } else {
            newList->next = list2;
        }

        return dum.next;

    }

    // Recursive
    // ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    //     if(list1 == nullptr) 
    //         return list2;
    //     else if(list2 == nullptr) 
    //         return list1;
        
    //     if(list1->val < list2->val) {
    //         list1->next = mergeTwoLists(list1->next, list2);
    //         return list1;
    //     } else {
    //         list2->next = mergeTwoLists(list2->next, list1);
    //         return list2;
    //     }   
    // }
};
