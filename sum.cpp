#include "iostream"

//Fucntion for adding entries in the array
int sum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];

    return sum;
}

int main()
{
    int nums[5] = {1, 2, 3, 4, 5};
    std::cout << sum(nums, 5);
}