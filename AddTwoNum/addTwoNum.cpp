ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
         // Create a dummy node to help build the result list.
        ListNode* dummy = new ListNode(0);
        ListNode* current = dummy;
        int carry = 0;
        
        // Iterate over both lists
        while (l1 != nullptr || l2 != nullptr) {
            int x = (l1 != nullptr) ? l1->val : 0;  // If l1 is exhausted, use 0
            int y = (l2 != nullptr) ? l2->val : 0;  // If l2 is exhausted, use 0
            int sum = x + y + carry;  // Add the values of the current nodes and the carry
            carry = sum / 10;  // Update the carry (1 if sum >= 10, else 0)
            current->next = new ListNode(sum % 10);  // Create a new node with the digit part
            current = current->next;  // Move to the next node
            
            // Move to the next nodes in l1 and l2
            if (l1 != nullptr) l1 = l1->next;
            if (l2 != nullptr) l2 = l2->next;
        }
        
        // If there's any carry left after the final addition, create a new node
        if (carry > 0) {
            current->next = new ListNode(carry);
        }
        
        // Return the next node of dummy (which is the head of the result list)
        return dummy->next;
    
    }