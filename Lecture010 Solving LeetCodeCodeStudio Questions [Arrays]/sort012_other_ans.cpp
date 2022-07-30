// EASY APPROACH C++

void sort012(int *arr, int n)
{
    //   Write your code here
    //    int n = arr.size();

    int count0 = 0;
    int count1 = 0;
    int count2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            count0++;
        }

        else if (arr[i] == 1)
        {
            count1++;
        }

        else if (arr[i] == 2)
        {
            count2++;
        }
    }

    int i = 0;

    // Pehle ke elements ko 0 bana dega until while loop false(0) nahi ho jata
    while (count0--)
    {
        arr[i] = 0;
        i++;
    }

    // 0 ke baad ke elements ko 1 bana dega until while loop is false
    while (count1--)
    {
        arr[i] = 1;
        i++;
    }

    // 1 ke baad ke elements ko 2 bana dega until while loop is false
    while (count2--)
    {
        arr[i] = 2;
        i++;
    }
}
