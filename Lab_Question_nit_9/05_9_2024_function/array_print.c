#include <stdio.h>
void arrayInput(int[], int);
void arrayPrint(int[], int);
int main()
{
    int size1, size2, size3;
    printf("Enter array size1 : ");
    scanf("%d", &size1);
    int arr1[size1];
    arrayInput(arr1, size1);

    printf("Enter array size2 : ");
    scanf("%d", &size2);

    int arr2[size2];
    arrayInput(arr2, size2);

    printf("Enter array size3 : ");
    scanf("%d", &size3);

    int arr3[size3];
    arrayInput(arr3, size3);

    // Print arrays
    arrayPrint(arr1,size1);
    arrayPrint(arr2,size2);
    arrayPrint(arr3,size3);

    return 0;
}

void arrayInput(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Element - %d : ", i);
        scanf("%d", &arr[i]);
    }
}
void arrayPrint(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        // printf("Element - %d : "i);
        printf("%d ", arr[i]);
    }
    printf("\n");
}



