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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* firstNode;
        ListNode* lastNode;
        ListNode* go = list1;
        int counter = 0;
        while (counter <b+2){
            if (counter == a-1) firstNode = go;

            else if (counter == b+1) lastNode = go->next;
            else{
               
                go = go->next;

            }
          
             counter ++;
        }

        firstNode->next = list2;
        
        while(list2->next != nullptr){
            list2 = list2->next;
        }
        cout<<(firstNode->val) << (lastNode->val);
        list2->next = lastNode;
        return list1;
    }
};