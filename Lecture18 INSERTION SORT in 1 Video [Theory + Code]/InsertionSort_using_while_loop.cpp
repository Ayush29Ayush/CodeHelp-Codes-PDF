#include <vector>
using namespace std;

void insertionSort(int n, vector<int> &arr)
{
    int i = 1;
    while (i < n)
    {
        int j = i - 1;
        int temp = arr[i];
        while (j >= 0)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
            j--;
        }
        i++;
        arr[j + 1] = temp;
    }
}

//! Time Complexity = O(N^2)
//! Space Complexity = O(1)