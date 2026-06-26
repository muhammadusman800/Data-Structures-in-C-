#include <iostream>
using namespace std;

// Binary Search Function
/*  
The Binary Search algorithm searches through an array and returns the index of the value it searches for.

Check the value in the center of the array.
If the target value is lower, search the left half of the array. If the target value is higher, search the right half.
Continue step 1 and 2 for the new reduced part of the array until the target value is found or until the search area is empty.
If the value is found, return the target value index. If the target value is not found, return -1.
*/
int binarySearch(int arr[], int size, int key) {
    int low = 0, high = size - 1;

    while(low <= high) {
        int mid = (low + high) / 2;
        cout<< "the mid value is"<< mid << endl;
        

        if(arr[mid] == key) {
            return mid;   // element found
        }
        else if(key < arr[mid]) {
            high = mid - 1;  // search left half
        }
        else {
            low = mid + 1;   // search right half
        }
    }

    return -1;  // element not found
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60};  // must be sorted
    int size = sizeof(arr) / sizeof(arr[0]);

    int key;
    cout << "Enter element to search: ";
    cin >> key;

    int result = binarySearch(arr, size, key);

    if(result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}