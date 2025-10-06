#include <iostream>
using namespace std;

class Queue {
    int arr[100];  // queue array
    int front, rear;

public:
    Queue() {
        front = 0;
        rear = -1;
    }

    void enqueue(int x) {
        if (rear == 99)
            cout << "Queue Overflow\n";
        else
            arr[++rear] = x;
    }

    void dequeue() {
        if (front > rear)
            cout << "Queue Underflow\n";
        else
            front++;
    }

    int peek() {
        if (front > rear) {
            cout << "Queue is Empty\n";
            return -1;
        }
        return arr[front];
    }

    bool isEmpty() {
        return (front > rear);
    }
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Front element: " << q.peek() << endl;

    q.dequeue();
    cout << "Front after dequeue: " << q.peek() << endl;

    return 0;
}
