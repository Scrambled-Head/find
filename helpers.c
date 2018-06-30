/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */
 
#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    // TODO: implement a searching algorithm
    int high = n - 1;
    int low = 0;
    int mid = high / 2;
    
    while(n >= 0)
    {
            if (values[mid] == value)
            {
                return true;
            }
            
            else if (value > values[mid])
            {
                low = mid + 1;
                mid = (low + high)/2;
            }
            
            else if (value < values[mid])
            {
                high = mid - 1;
                mid = (low + high)/2;

            }
            n = high - low;
    }
    return false;
}

/**
 * Sorts array of n values.
 */
 
void sort(int values[], int n)
{
    int swapcount = -1;
    
    while(swapcount != 0)
    {
        swapcount = 0;
        int i;
        // TODO: implement a sorting algorithm
            for (i = 0; i < n - 1; i++)
            {
                if (values[i] > values[i + 1])
                {
                    int storei = values[i];
                    values[i] = values[i + 1];
                    values[i + 1] = storei;
                    swapcount += 1;
                }
            }
        
    }
    return;
}
