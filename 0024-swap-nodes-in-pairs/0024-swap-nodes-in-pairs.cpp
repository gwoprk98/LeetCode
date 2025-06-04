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
    ListNode* swapPairs(ListNode* head) {
        ListNode dummy(0, head);
        ListNode* prev = &dummy;
        ListNode* curr = head;

        while (curr && curr -> next) {
            ListNode* nxt = curr -> next;

            //swap
            prev -> next = nxt;
            curr -> next = nxt -> next;
            nxt -> next = curr;

            //포인터 이동
            prev = curr;
            curr = curr -> next;
        }
        return dummy.next;
    }
};