// search an array for an element
#include <iostream>
int searchArray(int arr[], int size, int target);
int main()
{
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int index;
    int myNum;

    std::cout << "Enter a number to search for: " << '\n';
    std::cin >> myNum;

    index = searchArray(numbers, size, myNum);

    if (index != -1)
    {
        std::cout << myNum << " is at index " << index;
    }
    else
        {
            std::cout << myNum << " is not in the array" << '\n';
        }
    return 0;
}
int searchArray(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
        if (arr[i] == target)
        {
            return i;
        }
    return -1;
}