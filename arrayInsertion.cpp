#include <iostream>
using namespace std;

#define MAX 100

class ArrayList {
private:
    int arr[MAX];
    int size;   // current number of elements

public:
    // Constructor
    ArrayList() {
        size = 0;
    }

    // Display array
    void display() {
        for(int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // Insert at End
    void insertEnd(int value) {
        if(size == MAX) {
            cout << "Array is full\n";
            return;
        }
        arr[size] = value;
        size++;
    }

    // Insert at Front
    void insertFront(int value) {
        if(size == MAX) {
            cout << "Array is full\n";
            return;
        }

        for(int i = size; i > 0; i--) {
            arr[i] = arr[i - 1];
        }

        arr[0] = value;
        size++;
    }

    // Insert at Middle
    void insertMiddle(int value) {
        if(size == MAX) {
            cout << "Array is full\n";
            return;
        }

        int mid = size / 2;

        for(int i = size; i > mid; i--) {
            arr[i] = arr[i - 1];
        }

        arr[mid] = value;
        size++;
    }

    // Insert at K-th Position
    void insertAtK(int value, int k) {
        if(size == MAX) {
            cout << "Array is full\n";
            return;
        }

        if(k < 0 || k > size) {
            cout << "Invalid position\n";
            return;
        }

        for(int i = size; i > k; i--) {
            arr[i] = arr[i - 1];
        }

        arr[k] = value;
        size++;
    }
};

int main() {
    ArrayList obj;

    // Initial elements
    obj.insertEnd(10);
    obj.insertEnd(20);
    obj.insertEnd(30);
    obj.insertEnd(40);

    cout << "Initial Array: ";
    obj.display();

    // Insert at Front
    obj.insertFront(5);
    cout << "After Insert at Front: ";
    obj.display();

    // Insert at Middle
    obj.insertMiddle(25);
    cout << "After Insert at Middle: ";
    obj.display();

    // Insert at K-th position
    obj.insertAtK(15, 2);
    cout << "After Insert at K-th position (index 2): ";
    obj.display();

    // Insert at End
    obj.insertEnd(50);
    cout << "After Insert at End: ";
    obj.display();

    return 0;
}