
// class Solution {
// public:
//     ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//         ListNode*temp1=head1;
//         ListNode*temp2=head2;
//         while(temp1 && temp2)
//         {
//             if(temp1->val > temp2->val)
//             {
//                 s
//             }
//             else if(temp2->val >temp1->val)
//             {
//                 s
//             }
//             else if(temp1->val == temp2->val)
//             {
//                 temp1->next=temp2
//             }
//         }
//     }
// };


class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode*dummy=new ListNode(0);
        ListNode*curr=dummy;

        while(list1!=NULL && list2!=NULL)
        {
            if(list1->val <= list2->val)
            {
                curr->next=list1;
                list1=list1->next;
            }
            else if(list1->val >list2->val)
            {
                curr->next=list2;
                list2=list2->next;
            }
                curr=curr->next;     
        }
        
            if(list1!=NULL)
                {
                     curr->next=list1;
                }
                else
                {
                     curr->next=list2;
                }
         
            return dummy->next;
        
    }
};

