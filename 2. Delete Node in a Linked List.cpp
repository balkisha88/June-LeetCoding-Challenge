/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        
//         ListNode *temp=node;
//         ListNode *temp1;
        
       
//         while(temp->next!=NULL)
//         {
//             int value=temp->next->val;
//             temp->val=value;
//             temp1=temp;
//             temp=temp->next;
//         }
//         temp1->next=NULL;
        
        node->val=node->next->val;
        node->next=node->next->next;
        
    }
};
