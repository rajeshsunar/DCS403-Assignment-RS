// Write functions to check if the queue is full or empty.

#include <iostream>
using namespace std;

#define SIZE 5

int queue[SIZE];
int front = -1;
int rear = -1;

bool isEmpty() {
    return (front == -1);
}

bool isFull() {
    return (rear == SIZE - 1);
}

void enqueue(int value) {
    if (isFull()) return;
    if (front == -1) front = 0;
    rear++;
    queue[rear] = value;
}

int main() {
    if (isEmpty()) {
        cout << "Queue is empty" << endl;
    }
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    if (isFull()) {
        cout << "Queue is full" << endl;
    }
    if (!isEmpty()) {
        cout << "Queue is not empty" << endl;
    }
    return 0;
}