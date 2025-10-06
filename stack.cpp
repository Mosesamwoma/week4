#include <iostream>
using namespace std;

class Stack {
    int arr[100];  // stack array
    int top;       // index of top element

public:
    Stack() { top = -1; }  // constructor

    void push(int x) {
        if (top == 99)
            cout << "Stack Overflow\n";
        else
            arr[++top] = x;
    }

    void pop() {
        if (top == -1)
            cout << "Stack Underflow\n";
        else
            top--;
    }

    int peek() {
        if (top == -1) {
            cout << "Stack is Empty\n";
            return -1;
        }
        return arr[top];
    }

    bool isEmpty() {
        return (top == -1);
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.peek() << endl;

    s.pop();
    cout << "Top after pop: " << s.peek() << endl;

    return 0;
}
