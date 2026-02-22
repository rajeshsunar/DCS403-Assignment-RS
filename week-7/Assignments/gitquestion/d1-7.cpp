#include <iostream>
using namespace std;

#define SIZE 5

int queue[SIZE];
int front = -1;
int rear = -1;

int main() {
    cout << "Circular Queue created with size: " << SIZE << endl;
    cout << "Front: " << front << ", Rear: " << rear << endl;
    return 0;
}