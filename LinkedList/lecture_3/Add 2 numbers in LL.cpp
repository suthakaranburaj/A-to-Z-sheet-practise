class Solution {
  public:
      ListNode* reverse_LL(ListNode* &LL){
          ListNode* prev = nullptr;
          ListNode* current = LL;
          ListNode* next = nullptr;
  
          while(current != nullptr){
              next = current->next;
              current->next = prev;
              prev = current;
              current = next;
          }
          return prev;
      }
  
      ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
          // l1 = reverse_LL(l1);
          // l2 = reverse_LL(l2);
  
          ListNode* ans = nullptr;
          int carry = 0;
  
          while (l1 != nullptr || l2 != nullptr || carry != 0) {
              int val1 = (l1 != nullptr) ? l1->val : 0;
              int val2 = (l2 != nullptr) ? l2->val : 0;
              int sum = val1 + val2 + carry;
              int digit = sum % 10;
              carry = sum / 10;
  
              // Create new node and add to the front of the result list
              ListNode* newNode = new ListNode(digit);
              newNode->next = ans;
              ans = newNode;
  
              if (l1 != nullptr) l1 = l1->next;
              if (l2 != nullptr) l2 = l2->next;
          }
  
          return reverse_LL(ans);
      }
  };
  