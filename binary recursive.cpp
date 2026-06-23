#include <iostream>
using namespace std;

// Recursive Binary Search Function
int binarySearch(int arr[], int low, int high, int key) {
    if(low > high)
        return -1;

    int mid = (low + high) / 2;
    cout<<"the mis is "<<mid << endl;

    if(arr[mid] == key)
        return mid;
    else if(key < arr[mid])
        return binarySearch(arr, low, mid - 1, key);
    else
        return binarySearch(arr, mid + 1, high, key);
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60};  // Sorted array
    int size = sizeof(arr) / sizeof(arr[0]);

    int key;
    cout << "Enter element to search: ";
    cin >> key;

    int result = binarySearch(arr, 0, size - 1, key);

    if(result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}