#include <iostream>
using namespace std;

int main()
{
    int rows, cols;

    // Input rows and columns
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    int arr[100][100]; // max size

    // Input elements
    cout << "\nEnter elements:\n";
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cout << "Enter element at [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    // Print array
    cout << "\nEntered Data:\n";
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    // Assume first element is min and max
    int min = arr[0][0];
    int max = arr[0][0];
    int minRow = 0, minCol = 0;
    int maxRow = 0, maxCol = 0;

    // Find min and max
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            if(arr[i][j] < min)
            {
                min = arr[i][j];
                minRow = i;
                minCol = j;
            }

            if(arr[i][j] > max)
            {
                max = arr[i][j];
                maxRow = i;
                maxCol = j;
            }
        }
    }

    // Output results
    cout << "\nLowest number: " << min;
    cout << " at row " << minRow << " and column " << minCol << endl;

    cout << "Maximum number: " << max;
    cout << " at row " << maxRow << " and column " << maxCol << endl;

    return 0;
}