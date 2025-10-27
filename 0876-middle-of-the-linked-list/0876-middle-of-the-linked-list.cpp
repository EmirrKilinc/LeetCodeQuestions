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
        ListNode* sayac= head;
        int count = 0;
        while(sayac->next != nullptr){
            count ++;
            sayac = sayac->next;
        }
        
        int mid = count /2;

        cout<<mid;
        ListNode* middle = head;
        while(count != mid){
            middle = middle->next;
            mid ++;
        }

        return middle;
        
    }
};