//Convert Binary Number in a Linked List to Integer
#include<stdio.h>
#include<math.h>

struct ListNode {
      int val;
      struct ListNode *next;
  };

int getDecimalValue(struct ListNode* head) {
    struct ListNode* nope = head;
    int n=0;
    while(nope!=NULL)
    {
        n++;
        nope=nope->next;
    }
    struct ListNode* newnope = head;
    int sum=0;
    while(newnope!=NULL)
    {
        sum = sum+((newnope->val)*pow(2,--n));
        newnope = newnope->next;
    }
    return sum;
}
