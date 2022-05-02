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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
     int sum,c=0;
        ListNode* ans,*ans1=NULL;
        int flag=1;
        while(l1||l2){
            if(l1&&l2){
                sum= l1->val+ l2->val + c;
                l1=l1->next;
                l2=l2->next;
            }
            else if(l1){
                sum=l1->val+c;
                l1=l1->next;
            }
            else{
                sum=l2->val+c;
                l2=l2->next;
            }
            c= sum/10;
            sum=sum%10;
            if(flag){
                ans1= new ListNode(sum);
                ans=ans1;
                flag=0;
            }
            else{
                ans1->next=new ListNode(sum); 
                ans1=ans1->next;
            }
        }
    if(c)
         ans1->next=new ListNode(c);           
        return ans;
    }
};