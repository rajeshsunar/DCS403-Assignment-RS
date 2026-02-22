#include <iostream>
using namespace std;

#define SIZE 5

int queue[SIZE];
int front = -1;
int rear = -1;

void enqueue(int value) {
    if ((rear + 1) % SIZE == front) return;
    if (front == -1) front = 0;
    rear = (rear + 1) % SIZE;
    queue[rear] = value;
}

void peek() {
    if (front == -1) {
        cout << "Queue is empty!" << endl;
        return;
    }
    cout << "Front element: " << queue[front] << endl;
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    peek();
    return 0;
}