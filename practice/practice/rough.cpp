#include <iostream>
void sort(int array[], int size);
int main()
{
    int arr[] = {10, 1, 9, 2, 8, 3, 7, 4, 6, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    sort(arr, size);
 for(int element : arr){
    std::cout << element << ' ';
 }
    return 0;
}
void sort(int array[], int size)
{

    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}