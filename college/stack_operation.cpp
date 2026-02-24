#include <iostream>
using namespace std;

class Stack {
private:
    int *arr;
    int size;
    int top;

public:
    Stack(int s) {
        size = s;
        arr = new int[size];
        top = -1;
    }

    // PUSH (Insertion)
    void push(int element) {
        if (top < size - 1) {
            arr[++top] = element;
            cout << element << " pushed to stack\n";
        } else {
            cout << "Stack Overflow!\n";
        }
    }

    // POP (Deletion)
    int pop() {
        if (top == -1) {
            cout << "Stack is empty!\n";
            return -1;
        }
        int element = arr[top--];
        cout << element << " popped from stack\n";
        return element;
    }

    // SEARCH (position from top, 1-based)
    int search(int element) {
        for (int i = top; i >= 0; i--) {
            if (arr[i] == element) {
                return top - i + 1;
            }
        }
        return -1;
    }

    // PEEK (top element)
    int peek() {
        if (top == -1) {
            cout << "Stack is empty!\n";
            return -1;
        }
        return arr[top];
    }

    // CHECK EMPTY
    bool isEmpty() {
        return top == -1;
    }

    // DISPLAY (top to bottom)
    void display() {
        if (top == -1) {
            cout << "Stack is empty\n";
            return;
        }
        cout << "Stack (top to bottom): ";
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack stack(10);

    // Insertion
    cout << "--- Insertion ---\n";
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);
    stack.display();
    cout << "Top element: " << stack.peek() << endl;

    // Searching
    cout << "\n--- Searching ---\n";
    int searchElement = 20;
    int position = stack.search(searchElement);
    if (position != -1)
        cout << searchElement << " found at position " << position << " from top\n";
    else
        cout << searchElement << " not found\n";

    searchElement = 50;
    position = stack.search(searchElement);
    if (position != -1)
        cout << searchElement << " found at position " << position << " from top\n";
    else
        cout << searchElement << " not found\n";

    // Deletion
    cout << "\n--- Deletion ---\n";
    stack.pop();
    stack.pop();
    stack.display();
    cout << "Top element: " << stack.peek() << endl;
}