public static int findPivot(int[] array) {
    int pivot = -1;

    if(array!=null && array.length > 0) {

        pivot = 0;
        for (int i = 0; i < array.length - 1; i++)
        {
            if (array[i] > array[i+1])
            {
                pivot = i+1;
                break;
            }
        }
    }

    return pivot;
}

//! Time Complexity = O(N)
//! Space Complexity = O(1)