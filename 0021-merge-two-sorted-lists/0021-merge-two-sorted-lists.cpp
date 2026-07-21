class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        ListNode dummy;
        ListNode* list3 = &dummy;

        if (list1 == NULL)
            return list2;
        else if (list2 == NULL)
            return list1;

        while (list1 != NULL && list2 != NULL) { 

            if (list1->val > list2->val) {
                list3->next = list2;
                list2 = list2->next;
            } else {
                list3->next = list1;
                list1 = list1->next;
            }

            list3 = list3->next;
        }

        if (list1 != NULL)
            list3->next = list1;
        else
            list3->next = list2;

        return dummy.next;
    }
};