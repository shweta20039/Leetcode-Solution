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
    ListNode* removeElements(ListNode* head, int val) {
        
        //if all element is same,then simply you have to move the head;
        while(head!=NULL && head->val==val) head=head->next;
        if(head==NULL) return NULL;

        ListNode*temp;//new pointer
        temp=head; // head ke equall isliye kiya beacuse of ye poore linklist me traverse krega and midlle ya random place se element remove krega;

        while(temp->next!=NULL)
        {
            if(temp->next->val ==val) 
            {
                temp->next=temp->next->next;
            }
            else
            {
                temp=temp->next;
            }
        }
        return head;
    }
};