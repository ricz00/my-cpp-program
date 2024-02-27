#include <iostream>
#include <deque>

template<typename T>
class InsertOnlyStack {
private:
    std::deque<T> data;

public:
    // Insert a new element onto the stack
    void push(const T& value) {
        data.push_back(value);
    }

    // Return the top element of the stack without removing it
    const T& top() const {
        return data.back();
    }

    // Check if the stack is empty
    bool empty() const {
        return data.empty();
    }

    // Remove the top element from the stack
    void pop() {
        data.pop_back();
    }

    // Get the size of the stack
    std::size_t size() const {
        return data.size();
    }
};

int main() {
    // Create an insert-only stack of integers
    InsertOnlyStack<int> mystack;

    // Insert some elements onto the stack
    mystack.push(1);
    mystack.push(2);
    mystack.push(3);
    mystack.push(4);
    mystack.push(5);

    // Print the top element of the stack
    std::cout << "The top element is: " << mystack.top() << std::endl;

    // Print the size of the stack
    std::cout << "The size of the stack is: " << mystack.size() << std::endl;

    // Remove the top element from the stack
    mystack.pop();

    // Print the top element of the stack again
    std::cout << "The top element is: " << mystack.top() << std::endl;

    // Print the size of the stack again
    std::cout << "The size of the stack is: " << mystack.size() << std::endl;

    return 0;
}
