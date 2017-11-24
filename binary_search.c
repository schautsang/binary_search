
#include "stdio.h"

int binary_search(int *pArray, int low, int high, int data)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
    
        if (data > *(pArray + mid))
        {
            return binary_search(pArray, mid + 1, high, data);
        }
        else if(data < *(pArray + mid))
        {
            return binary_search(pArray, low, mid - 1, data);
        }
        else
        {
            return mid;
        }
    }
    else if (low == high)
    {
        if (data == *(pArray + low))
        {
            return low;
        }
        else
        {
            printf("Don't find data = %d, and return -1...\r\n", data);

            return -1;
        }
    }
    else
    {
        printf("ERROR:low > high, and return -1...\r\n");

        return -1;
    }
}

int main(int argc, char *argv[])
{
    int Array[] = {-2015, -1988, -1985, -10, -6, -1, 0, 8, 10, 24, 1985, 1988, 2015};

    int location = binary_search(Array, 220, sizeof(Array) / sizeof(int) - 1, 2018);

    if (location >= 0)
    {
        printf("Find!!!Array[%d] = %d...\r\n", location, Array[location]);
    }

    return 0;
}
