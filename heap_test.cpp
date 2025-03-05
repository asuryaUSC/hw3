#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include "heap.h"

// Max Heap Comparator
struct MaxComparator {
    bool operator()(const int& a, const int& b) {
        return a > b;  // Higher values have priority
    }
};

// Custom Comparator (Sorts by string length)
struct LengthComparator {
    bool operator()(const std::string& a, const std::string& b) {
        return a.length() < b.length();
    }
};

// **Test Case 1: Basic Min Heap Operations**
void testMinHeap() {
    std::cout << "\n=== Test Min Heap (Default Comparator) ===\n";
    Heap<int> h;  // Default is min-heap

    std::cout << "Pushing 5, 3, 8, 1, 6...\n";
    h.push(5);
    h.push(3);
    h.push(8);
    h.push(1);
    h.push(6);

    std::cout << "Heap top (expected min): " << h.top() << std::endl;
    h.pop();
    std::cout << "Heap top after pop (expected min): " << h.top() << std::endl;

    std::cout << "Popping all elements...\n";
    while (!h.empty()) {
        std::cout << "Popped: " << h.top() << std::endl;
        h.pop();
    }
}

// **Test Case 2: Max Heap Operations**
void testMaxHeap() {
    std::cout << "\n=== Test Max Heap (Custom Comparator) ===\n";
    Heap<int, MaxComparator> h;  // Max heap

    std::cout << "Pushing 5, 3, 8, 1, 6...\n";
    h.push(5);
    h.push(3);
    h.push(8);
    h.push(1);
    h.push(6);

    std::cout << "Heap top (expected max): " << h.top() << std::endl;
    h.pop();
    std::cout << "Heap top after pop (expected max): " << h.top() << std::endl;

    std::cout << "Popping all elements...\n";
    while (!h.empty()) {
        std::cout << "Popped: " << h.top() << std::endl;
        h.pop();
    }
}

// **Test Case 3: String Heap (Lexicographical Order)**
void testStringHeap() {
    std::cout << "\n=== Test String Heap (Lexicographical) ===\n";
    Heap<std::string> h;

    h.push("banana");
    h.push("apple");
    h.push("cherry");

    std::cout << "Heap top (expected smallest lexicographically): " << h.top() << std::endl;
}

// **Test Case 4: String Heap (Length Comparator)**
void testStringLengthHeap() {
    std::cout << "\n=== Test String Heap (String Length) ===\n";
    Heap<std::string, LengthComparator> h;

    h.push("a");
    h.push("banana");
    h.push("apple");
    h.push("cherry");

    std::cout << "Heap top (expected shortest string): " << h.top() << std::endl;
}

// **Test Case 5: Edge Cases**
void testEdgeCases() {
    std::cout << "\n=== Test Edge Cases ===\n";
    Heap<int> h;

    // **Test accessing top on empty heap**
    try {
        h.top();
    } catch (const std::underflow_error& e) {
        std::cout << "Caught exception (top on empty): " << e.what() << std::endl;
    }

    // **Test popping from empty heap**
    try {
        h.pop();
    } catch (const std::underflow_error& e) {
        std::cout << "Caught exception (pop on empty): " << e.what() << std::endl;
    }

    // **Test single element push/pop**
    std::cout << "Pushing one element (42)...\n";
    h.push(42);
    std::cout << "Heap top: " << h.top() << std::endl;
    h.pop();
    std::cout << "Heap empty after popping last element? " << (h.empty() ? "Yes" : "No") << std::endl;
}

// **Test Case 6: Large Heap Performance Test**
void testLargeHeap() {
    std::cout << "\n=== Test Large Heap Performance ===\n";
    Heap<int> h;

    const int NUM_ELEMENTS = 1000;
    std::cout << "Pushing 1000 elements...\n";
    for (int i = 0; i < NUM_ELEMENTS; ++i) {
        h.push(i);
    }

    std::cout << "Heap top (expected min: 0): " << h.top() << std::endl;

    // Pop half the elements
    for (int i = 0; i < NUM_ELEMENTS / 2; ++i) {
        h.pop();
    }
    std::cout << "Heap size after popping 500 elements: " << h.size() << std::endl;
}

// **Test Case 7: 3-ary Heap (Custom M-ary Heap)**
void testTernaryHeap() {
    std::cout << "\n=== Test Ternary Heap (m=3) ===\n";
    Heap<int> h(3);  // 3-ary heap

    h.push(10);
    h.push(15);
    h.push(30);
    h.push(20);
    h.push(25);

    std::cout << "Heap top (expected min: 10): " << h.top() << std::endl;
    h.pop();
    std::cout << "Heap top after pop (expected min: 15): " << h.top() << std::endl;
}

// **Main Test Driver**
int main() {
    testMinHeap();
    testMaxHeap();
    testStringHeap();
    testStringLengthHeap();
    testEdgeCases();
    testLargeHeap();
    testTernaryHeap();
    return 0;
}
