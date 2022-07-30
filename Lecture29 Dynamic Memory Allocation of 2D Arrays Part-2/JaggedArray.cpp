//! In computer science, a jagged array, also known as a ragged array, is an array of arrays of which the member arrays can be of different sizes,producing rows of jagged edges when visualized as output.

#include <iostream>
using namespace std;

int main()
{

    int[][] jaggedArray = new int[3][];

    jaggedArray[0] = new int[5];
    jaggedArray[1] = new int[4];
    jaggedArray[2] = new int[2];

    jaggedArray[0] = new int[]{1, 3, 5, 7, 9};
    jaggedArray[1] = new int[]{0, 2, 4, 6};
    jaggedArray[2] = new int[]{11, 22};

    return 0;
}
