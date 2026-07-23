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
    ListNode* middleNode(ListNode* head) {

        if (head == NULL) {
            return NULL;
        }

        int count = 0;
        int c = 0;
        ListNode* temp = head;
        ListNode* tem = head;

        while (temp != NULL) {

            count++;
            temp = temp->next;
        }
        if (count % 2 == 0) {
            while (c != ((count+1)/2)) {
                c++;
                tem = tem->next;
            }

        } else {
            while (c != (count / 2)) {
                c++;
                tem = tem->next;
            }
        }
        return tem;
    }
};