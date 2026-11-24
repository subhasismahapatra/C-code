#include <stdio.h>
#define MAX 50
void display(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void selectionSort(int arr[], int n) {
    int i, j, small, temp;
    for (i = 0; i < n - 1; i++)
    {
        small = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[small])
                small = j;
        }
        temp = arr[i];
        arr[i] = arr[small];
        arr[small] = temp;
    }
}
void insertionSort(int arr[], int n) {
    int i, j, value;
    for (i = 1; i < n; i++)
    {
        value = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > value)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = value;
    }
}
void quickSort(int arr[], int first, int last) {
    int i, j, pivot, temp;
    if (first < last)
    {
        pivot = arr[first];
        i = first;
        j = last;
        while (i < j)
        {
            while (arr[i] <= pivot && i < last)
            {
                i++;
            }
            while (arr[j] > pivot)
            {
                j--;
            }
            if (i < j)
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        arr[first] = arr[j];
        arr[j] = pivot;
        quickSort(arr, first, j - 1);
        quickSort(arr, j + 1, last);
    }
}
void merge(int arr[], int first, int middle, int last) {
    int temp[MAX];
    int i = first, j = middle + 1, k = first;
    while (i <= middle && j <= last)
    {
        if (arr[i] < arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
        }
    }
    while (i <= middle)
    {
        temp[k++] = arr[i++];
    }
    while (j <= last)
    {
        temp[k++] = arr[j++];
    }
    for (i = first; i <= last; i++)
    {
        arr[i] = temp[i];
    }
}
void mergeSort(int arr[], int first, int last) {
    int middle;
    if (first < last)
    {
        middle = (first + last) / 2;
        mergeSort(arr, first, middle);
        mergeSort(arr, middle + 1, last);
        merge(arr, first, middle, last);
    }
}
int main(void) {
    int arr[MAX];
    int n, i, choice;
    printf("Enter the number of elements (maximum %d): ", MAX);
    scanf("%d", &n);
    if (n <= 0 || n > MAX)
    {
        printf("Invalid number of elements.\n");
        return 1;
    }
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    do
    {
        printf("\n- Sorting Menu -\n");
        printf("1. Bubble Sort\n");
        printf("2. Selection Sort\n");
        printf("3. Insertion Sort\n");
        printf("4. Quick Sort\n");
        printf("5. Merge Sort\n");
        printf("6. Display Array\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                bubbleSort(arr, n);
                printf("Sorted Array: ");
                display(arr, n);
                break;
            case 2:
                selectionSort(arr, n);
                printf("Sorted Array: ");
                display(arr, n);
                break;
            case 3:
                insertionSort(arr, n);
                printf("Sorted Array: ");
                display(arr, n);
                break;
            case 4:
                quickSort(arr, 0, n - 1);
                printf("Sorted Array: ");
                display(arr, n);
                break;
            case 5:
                mergeSort(arr, 0, n - 1);
                printf("Sorted Array: ");
                display(arr, n);
                break;
            case 6:
                printf("Current Array: ");
                display(arr, n);
                break;
            case 7:
                printf("Program ended.\n");
                break;
            default:
                printf("Wrong choice. Please try again.\n");
        }
    } while (choice != 7);
    return 0;
}