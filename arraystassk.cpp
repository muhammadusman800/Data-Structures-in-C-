#include <iostream>
using namespace std;

int main()
{
    int rows, cols;

    // input rows and columns
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    int arr[100][100]; // maz size

    // input elements
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "Enter element at [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    // print elements
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int min = arr[0][0];
    int max = arr[0][0];

    int MinCol = 0, MinRow = 0;
    int MaxCol = 0, MaxRow = 0;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] < min)
            {
                min = arr[i][j];
                MinRow = i;
                MinCol = j;
            }
            else if (arr[i][j] > max)
            {
                max = arr[i][j];
                MaxRow = i;
                MaxCol = j;
            }
        }
    }

    cout << "Minimum number is: " << min;
    cout << " At Row " << MinRow << " and column " << MinCol << endl;
    cout << "Maximum number is: " << max;
    cout << " At Row " << MaxRow << " and column " << MaxCol << endl;
    return 0;
}
