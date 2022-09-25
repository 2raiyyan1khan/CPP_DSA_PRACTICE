#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size)
{
    bool sorted = false;

    for (int i = 1; i < size; i++)

    {
        for (int j = 0; j < size - i; j++)
        {

            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                sorted = true;
            }
        }
        // if no swap --> That means array is already sorted
        if (sorted == false)
            break;
    }
}

int main()
{
    int arr[6] = {5, 1, 6, 34, 0, 3};
    int size = 6;
    bubbleSort(arr, size);
    // Print Array
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}