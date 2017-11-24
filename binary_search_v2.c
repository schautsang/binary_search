
#include "stdio.h"

int binary_search(int *pArray, int low, int high, int key)
{
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (key < *(pArray + mid))
        {
            high = mid - 1;   
        }
        else if (key > *(pArray + mid))
        {
            low = mid + 1;
        }
        else
        {
            return mid;
        }
    }

    return -1;
}

int main(int argc, char *argv[])
{
    int Array[] = {-2015, -1988, -1985, -10, -6, -1, 0, 8, 10, 24, 1985, 1988, 2015};

    int location = binary_search(Array, 0, sizeof(Array) / sizeof(int) - 1, 2018);

    if (location >= 0)
    {
        printf("Find!!!Array[%d] = %d...\r\n", location, Array[location]);
    }
    else
    {
        printf("Don't find key!!!\r\n");        
    }

    return 0;
}

