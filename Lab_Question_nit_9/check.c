#include <stdio.h>
int Largest_Element(int [],int);
int Largest_print(int [],int);

int main()
{
    int  size;
    printf("Enter the size of array : ");
    scanf("%d", &size);
    // printf("Enter %d element ", size);
    int arr[size];
    Largest_Element(arr,size);

    printf("Enter %d element ", size);
    // printf("%d", Largest_Element(larg));
    // Largest_Element(larg);
    Largest_print(arr,larg);
    return 0;
}

int Largest_Element(int arr[],int size)
{
    int arr[size];
    int larg = arr[0];

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The largest element is : ");
    for (int i = 1; i < size; i++)
    {
        if (larg < arr[i])
        {
            larg = arr[i];
        }
        return larg;
    }
}