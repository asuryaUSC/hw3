#include "llrec.h"

//*********************************************
// Provide your implementation of llpivot below
//*********************************************

void llpivot (Node*& head, Node*& smaller, Node*& larger, int pivot){
    // base case
    if (head == nullptr) {
        smaller = nullptr;
        larger = nullptr;
        return;
    }

    // store next
    Node* next = head->next;

    head->next = nullptr;

    // assign to smaller or larger
    if (head->val <= pivot) {
        smaller = head;
        llpivot(next, smaller->next, larger, pivot);  // recursive call
    } else {
        larger = head;
        llpivot(next, smaller, larger->next, pivot);  // recursive call
    }

    // clear original list pointer
    head = nullptr;
}
