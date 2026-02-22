#include <iostream>
using namespace std;

#define SIZE 5

int queue[SIZE];
int front = -1;
int rear = -1;

void enqueue(int value) {
    if ((rear + 1) % SIZE == front) {
        cout << "Queue is full! Cannot insert " << value << endl;
        return;
    }
    if (front == -1) {
        front = 0;
    }
    rear = (rear + 1) % SIZE;
    queue[rear] = value;
    cout << value << " inserted successfully" << endl;
}

void display() {
    if (front == -1) {
        cout << "Queue is empty!" << endl;
        return;
    }
    cout << "Queue: ";
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
    display();
    return 0;
}