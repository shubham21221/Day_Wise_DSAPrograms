#include <bits/stdc++.h>
using namespace std;

#define MAX_SIZE 100 // Maximum size of the queue

class Queue {
private:
    int arr[MAX_SIZE]; // Array to store queue elements
    int front;         // Index of the front element
    int rear;          // Index of the rear element

public:
    // Constructor to initialize the queue
    Queue() {
        front = -1; // Initialize front and rear as -1 (empty queue)
        rear = -1;
    }

    // Check if the queue is empty
    bool isEmpty() {
        return (front == -1 && rear == -1);
    }

    // Check if the queue is full
    bool isFull() {
        return (rear == MAX_SIZE - 1);
    }

    // Enqueue operation: Add an element to the back of the queue
    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue Overflow! Cannot enqueue " << value << ". Queue is full." << endl;
            return;
        }
        if (isEmpty()) {
            front = rear = 0; // Initialize front and rear for the first element
        } else {
            rear++;
        }
        arr[rear] = value; // Add the element at the rear
        cout << "Enqueued: " << value << endl;
    }

    // Dequeue operation: Remove an element from the front of the queue
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow! Cannot dequeue. Queue is empty." << endl;
            return;
        }
        cout << "Dequeued: " << arr[front] << endl;
        if (front == rear) {
            front = rear = -1; // Reset queue if it has only one element
        } else {
            front++; // Move front to the next element
        }
    }

    // Peek operation: Retrieve the front element without removing it
    int peek() {
        if (isEmpty()) {
            cout << "Queue is empty! No front element." << endl;
            return -1;
        }
        return arr[front];
    }

    // Get the size of the queue
    int size() {
        if (isEmpty()) {
            return 0;
        }
        return (rear - front + 1);
    }

    // Display the queue elements
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return;
        }
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q;

    q.enqueue(10); // Enqueue 10
    q.enqueue(20); // Enqueue 20
    q.enqueue(30); // Enqueue 30

    q.display(); // Display queue: 10 20 30

    cout << "Front element: " << q.peek() << endl; // Front element: 10

    q.dequeue(); // Dequeue 10
    q.display(); // Display queue: 20 30

    cout << "Front element after dequeue: " << q.peek() << endl; // Front element: 20

    q.enqueue(40); // Enqueue 40
    q.display(); // Display queue: 20 30 40

    cout << "Queue size: " << q.size() << endl; // Queue size: 3

    return 0;
}