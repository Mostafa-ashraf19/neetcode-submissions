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
    bool hasCycle(ListNode* head) {

        std::unordered_set<ListNode*> st;

        while(head!= nullptr) {

            if(st.find(head) != st.end()) {
                return true;
            }
            st.insert(head);

            head = head->next;
        } 
        return false;
        // ListNode* slow = head;
        // ListNode* fast = head;

        // while(slow && fast && fast->next) {
            
        //     slow = slow->next;
        //     fast = fast->next->next;
            
        //     if(slow == fast) {
        //         return true;
        //     }
        // }
        // return false;

    }
};
