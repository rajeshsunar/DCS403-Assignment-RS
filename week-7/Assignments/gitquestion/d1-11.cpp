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

void display() {
    if (front == -1) {
        cout << "Queue is empty!" << endl;
        return;
    }
    cout << "Queue elements from front to rear: ";
    int i = front;
    if (front <= rear) {
        while (i <= rear) {
            cout << queue[i] << " ";
            i++;
        }
    } else {
        while (i < SIZE) {
            cout << queue[i] << " ";
            i++;
        }
        i = 0;
        while (i <= rear) {
            cout << queue[i] << " ";
            i++;
        }
    }
    cout << endl;
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    display();
    return 0;
}