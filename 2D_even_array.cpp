#include <iostream>
using namespace std;

class arrays
{

private:
    int arr[4][3];

public:
    void input()
    {
        cout << "Enter values in  2D array: " << endl;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin >> arr[i][j];
            }
        }
    }

    int find_even()
    {
        cout << "Even values are: " << endl;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                if (arr[i][j] % 2 == 0)
                {
                    cout << arr[i][j] << endl;
                }
            }
        }
    }

};

    int main()
    {
        arrays o1;
        o1.input();
        o1.find_even();
        return 0;
    }