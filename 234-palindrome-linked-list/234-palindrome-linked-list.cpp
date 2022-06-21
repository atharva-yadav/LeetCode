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
    vector<int> traverse(ListNode* head) {
        vector<int> v;
        while(head != NULL) {
            v.push_back(head->val);
            head = head->next;
        }
        return v;
    }
    
    ListNode* reverse(ListNode* head) {
        
        if(head == NULL || head->next == NULL) {
            return nullptr;
        }
        
        ListNode* curr = head;
        ListNode* prev = nullptr;
        ListNode* next = head->next;
        
        while(curr) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    
    bool isPalindrome(ListNode* head) {
        
        if(head == NULL || head->next == NULL) {
            return true;
        }
        vector<int> v1;
        vector<int> v2;
        
        v1 = traverse(head);
        
        ListNode* rhead = reverse(head);
        
        v2 = traverse(rhead);
        
        return v1==v2;        
    }
};