#include <stdio.h>
#include <stdlib.h>
int b_s_l(int arr[], int size, int key, int* comparisons)
{
    int low = 0, high = size - 1;
    int index = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        (*comparisons)++;

        if (arr[mid] == key)
        {
            index = mid;
            high = mid - 1;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return index;
}

int main()
{
    int size = 0, key,comparisons = 0;
    int *elements = (int *)malloc(sizeof(int));
    FILE *in = fopen("bin.txt","w");
    for(int i = 0;i < 500;i++)
    {
      fprintf(in,"%d ",rand()); }
    fclose(in);
    in = fopen("bin.txt","r");
    while(fscanf(in,"%d",&elements[size]) == 1)
    {
      size++;
    }

    printf("Enter the key to be searched: ");
    scanf("%d", &key);

    int index = b_s_l(elements, size, key, &comparisons);

    if (index != -1)
    {
      printf("%d found at index position %d\n", key, index);
      printf("Number of comparisons: %d\n", comparisons);
    }
    else
    {
      printf("%d not found in the array.\n", key);
    }

    return 0;
}