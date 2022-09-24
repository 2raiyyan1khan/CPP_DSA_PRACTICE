#include <iostream>
using namespace std;

int main()
{
    int size = 5;
    int arr[5] = {34, 12, 54, 27, 8};

    for (int i = 0; i < size - 1; i++)
    {
        // assume i is minimum
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        // Swaping value using builin swap function
        swap(arr[minIndex], arr[i]);
    }
    // Print Array
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
        ;
    }

    return 0;
}
