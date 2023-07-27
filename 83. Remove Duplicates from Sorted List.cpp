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
class Solution{
public:
    ListNode *deleteDuplicates(ListNode *head){
        
        if(head == nullptr){
            return head;
        }
        
        ListNode *current = head;
        ListNode *nextNode = current->next;
        
        while(nextNode != nullptr){ // navigate through list
            if(current->val == nextNode->val){
                ListNode *delNode = nextNode;
                nextNode = nextNode->next;
                current->next = nextNode;
                delete delNode;
            }
            else{
                current = nextNode;
                nextNode = nextNode->next;
            }
        }
        return head;
    }
};