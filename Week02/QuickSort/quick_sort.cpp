#include <iostream>

using namespace std;

/**
 * @brief partitionFunct partitions a range in array and returns pivot location
 * @param arr array to partition
 * @param low index to start the partition at (inclusive)
 * @param high index to end the partition at (inclusive)
 * @return pivot final index of pivot value
 *
 * @post
 * for all i < p, arr[i] <= arr[p]
 * for all i > p, arr[i] >= arr[p]
 * where p is index of pivot value
 */
int partitionFunct(int arr[], int low, int high) {
    //TODO - Fixme
    return 0;  //Delete this
}

/**
 * @brief quickSortInternal sorts itms between low and high with quicksort
 * @param arr array to sort
 * @param low start of range to sort (inclusive)
 * @param high end of range to sort (inclusive)
 */
void quickSortInternal (int arr[], int low, int high) {
    if (low >= high) return; // base case : 1 or less item

    //call partitionFunction to partition range low - high
    // it will return pivot location

    //recursively sort from low to pivot - 1
    //recursiely sort from pivot + 1 to high
}

void quickSort (int arr[], int arrSize) {
    quickSortInternal (arr, 0, arrSize-1);
}


