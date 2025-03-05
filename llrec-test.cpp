#include <iostream>
#include <fstream>
#include <functional>
#include "llrec.h"
using namespace std;

/**
 * Reads integers (separated by whitespace) from a file
 * into a linked list.
 *
 * @param[in] filename
 *  The name of the file containing the data to read
 * @return
 *  Pointer to the linked list (or NULL if empty or the
 *  file is invalid)
 */
Node* readList(const char* filename);

/**
 * Prints the integers in a linked list pointed to
 * by head.
 */
void print(Node* head);

/**
 * Deallocates the linked list nodes
 */
void dealloc(Node* head);


Node* readList(const char* filename)
{
    Node* h = NULL;
    ifstream ifile(filename);
    int v;
    if( ! (ifile >> v) ) return h;
    h = new Node(v, NULL);
    Node *t = h;
    while ( ifile >> v ) {
        t->next = new Node(v, NULL);
        t = t->next;
    }
    return h;
}

void print(Node* head)
{
    while(head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

void dealloc(Node* head)
{
    Node* temp;
    while(head) {
        temp = head->next;
        delete head;
        head = temp;
    }
}

// -----------------------------------------------
//   Add any helper functions or
//   function object struct declarations
// -----------------------------------------------

// functor for odd functions
struct IsOdd {
    bool operator()(int x) { return x % 2 != 0; }
};

void runTest(Node* head, int pivot) {
    cout << "Original list: ";
    print(head);

    // Splitting the list
    Node* smaller = nullptr;
    Node* larger = nullptr;
    cout << "Splitting list with pivot = " << pivot << "..." << endl;
    llpivot(head, smaller, larger, pivot);

    cout << "Smaller or equal to " << pivot << ": ";
    print(smaller);

    cout << "Larger than " << pivot << ": ";
    print(larger);

    // Filtering the "smaller" list
    cout << "Filtering out odd numbers from 'smaller' list..." << endl;
    Node* filteredList = llfilter(smaller, IsOdd());

    cout << "List after filtering (only even numbers remain): ";
    print(filteredList);

    // Deallocate memory
    dealloc(filteredList);
    dealloc(larger);
    cout << "-------------------------------------------\n";
}



int main(int argc, char* argv[])
{
    if(argc < 2) {
        cout << "Please provide an input file" << endl;
        return 1;
    }

    // -----------------------------------------------
    // Feel free to update any code below this point
    // -----------------------------------------------
    cout << "=== Running tests with different scenarios ===\n";

    // Test 1: General test case
    Node* head1 = readList(argv[1]);
    runTest(head1, 10);

    // Test 2: All numbers less than pivot
    Node* head2 = new Node(1, new Node(2, new Node(3, new Node(4, nullptr))));
    runTest(head2, 10);

    // Test 3: All numbers greater than pivot
    Node* head3 = new Node(15, new Node(20, new Node(30, nullptr)));
    runTest(head3, 10);

    // Test 4: All numbers equal to pivot
    Node* head4 = new Node(10, new Node(10, new Node(10, new Node(10, nullptr))));
    runTest(head4, 10);

    // Test 5: List with duplicates
    Node* head5 = new Node(5, new Node(10, new Node(5, new Node(20, new Node(10, nullptr)))));
    runTest(head5, 10);

    // Test 6: Empty list
    Node* head6 = nullptr;
    runTest(head6, 10);

    return 0;

}
