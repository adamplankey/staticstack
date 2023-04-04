#include <iostream>
#include <cstdlib>

using namespace std;

template <typename T, int capacity>
class StaticStack {
private:
    T data[capacity];
    int top;
public:
    StaticStack() {
        top = -1;
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == capacity - 1;
    }

    void push(T item) {
        if (isFull()) {
            cerr << "Stack overflow" << endl;
            exit(1);
        }
        data[++top] = item;
    }

    T pop() {
        if (isEmpty()) {
            cerr << "Stack underflow" << endl;
            exit(1);
        }
        return data[top--];
    }

    T peek() {
        if (isEmpty()) {
            cerr << "Stack is empty" << endl;
            exit(1);
        }
        return data[top];
    }

    int size() {
        return top + 1;
    }
    void display() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
            return;
        }
        cout << "Stack: ";
        for (int i = top; i >= 0; i--) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};