void quickSort(int arr[], int low, int high)
{
    if (low < high) {
        int pivot = partition(arr, low, high); //calculate pivot's write position.

        quickSort(arr, low, pivot - 1); //pivot's smallest element sort
        quickSort(arr, pivot + 1, high); //pivot's biggest element sort
    }
}
// Partition the array using the last element as the pivot
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];  // Choosing the pivot to last element.
    int i = (low - 1);     //blank space create where we store smallest value.

    for (int j = low; j < high ; j++) {
        if (arr[j] < pivot) {   // If current element is smaller than the pivot
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    i++;
    swap(&arr[i], &arr[high]);
    return i;
}
