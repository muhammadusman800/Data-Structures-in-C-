#include <iostream>
using namespace std;

class darray
{

private:
    int arr[3][4][2];

public:
    void input()
    {
        cout << "Enter values in 3D arrays: " << endl;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                for (int k = 0; k < 2; k++)
                {
                    cin >> arr[i][j][k];
                }
            }
        }
    }

    void find_even()
    {

        cout << "Even Numbers in 3D array are: " << endl;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                for (int k = 0; k < 2; k++)
                {
                    if (arr[i][j][k] % 2 == 0)
                    {
                        cout << arr[i][j][k] << " ";
                    }
                }
            }
        }
        cout << endl;
    }

    void min()
    {
        cout << "minimum number in 3D array is: " << endl;
        int minimum = arr[0][0][0];
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                for (int k = 0; k < 2; k++)
                {
                    if (arr[i][j][k] < minimum)
                    {
                        minimum = arr[i][j][k];
                    }
                }
            }
        }
        cout << "Minimum number is: " << minimum << endl;
    }

    void max()
    {
        cout << "maximum number in 3D array is: " << endl;
        int maximum = arr[0][0][0];
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                for (int k = 0; k < 2; k++)
                {
                    if (arr[i][j][k] > maximum)
                    {
                        maximum = arr[i][j][k];
                    }
                }
            }
        }
        cout << "Maximum number is: " << maximum << endl;
    }
};

int main()
{
    darray obj1;
    obj1.input();
    obj1.find_even();
    obj1.max();
    obj1.min();
    return 0;
}