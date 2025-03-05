#include <iostream>
#include <string>
#include "stack.h"

void testIntStack() {
    std::cout << "\n=== Testing Integer Stack ===\n";
    Stack<int> s;

    // Test empty stack
    std::cout << "Stack empty? " << (s.empty() ? "Yes" : "No") << std::endl;

    try {
        s.top();  // Should throw exception
    } catch (const std::underflow_error& e) {
        std::cout << "Caught exception (top on empty): " << e.what() << std::endl;
    }

    try {
        s.pop();  // Should throw exception
    } catch (const std::underflow_error& e) {
        std::cout << "Caught exception (pop on empty): " << e.what() << std::endl;
    }

    // Push elements
    s.push(10);
    s.push(20);
    s.push(30);
    
    std::cout << "Stack size: " << s.size() << std::endl;
    std::cout << "Stack top: " << s.top() << std::endl;

    // Pop elements
    s.pop();
    std::cout << "Stack top after pop: " << s.top() << std::endl;
    
    s.pop();
    s.pop();

    // Stack should now be empty
    std::cout << "Stack empty after pops? " << (s.empty() ? "Yes" : "No") << std::endl;

    // Test single-element stack
    s.push(99);
    std::cout << "Stack top after pushing one element: " << s.top() << std::endl;
    s.pop();
    std::cout << "Stack empty after popping last element? " << (s.empty() ? "Yes" : "No") << std::endl;

    // Test exception handling again
    try {
        s.pop();
    } catch (const std::underflow_error& e) {
        std::cout << "Caught exception (pop after emptying stack): " << e.what() << std::endl;
    }
}

void testStringStack() {
    std::cout << "\n=== Testing String Stack ===\n";
    Stack<std::string> s;

    s.push("Hello");
    s.push("World");
    s.push("!");

    std::cout << "Stack size: " << s.size() << std::endl;
    std::cout << "Stack top: " << s.top() << std::endl;

    s.pop();
    std::cout << "Stack top after pop: " << s.top() << std::endl;

    s.pop();
    s.pop();

    std::cout << "Stack empty after popping all? " << (s.empty() ? "Yes" : "No") << std::endl;
}

void testDoubleStack() {
    std::cout << "\n=== Testing Double Stack ===\n";
    Stack<double> s;

    s.push(3.14);
    s.push(2.718);
    s.push(1.618);

    std::cout << "Stack size: " << s.size() << std::endl;
    std::cout << "Stack top: " << s.top() << std::endl;

    s.pop();
    std::cout << "Stack top after pop: " << s.top() << std::endl;

    s.pop();
    s.pop();

    std::cout << "Stack empty after popping all? " << (s.empty() ? "Yes" : "No") << std::endl;
}

void testLargeStack() {
    std::cout << "\n=== Testing Large Stack Performance ===\n";
    Stack<int> s;

    const int NUM_ELEMENTS = 1000;

    for (int i = 0; i < NUM_ELEMENTS; ++i) {
        s.push(i);
    }

    std::cout << "Stack size after pushing 1000 elements: " << s.size() << std::endl;
    std::cout << "Stack top: " << s.top() << std::endl;

    // Pop all elements
    for (int i = 0; i < NUM_ELEMENTS; ++i) {
        s.pop();
    }

    std::cout << "Stack empty after popping 1000 elements? " << (s.empty() ? "Yes" : "No") << std::endl;
}

int main() {
    testIntStack();
    testStringStack();
    testDoubleStack();
    testLargeStack();
    
    return 0;
}
