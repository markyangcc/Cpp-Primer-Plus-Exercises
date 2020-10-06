#include <cstring>
#include <iostream>

using namespace std;

template <typename T>
T maxn(T *arr, int num);

template <>
const char *maxn(const char **arr, int num);

int main()
{
    int arr1[6] = {1, 2, 3, 4, 5, 6};
    double arr2[4] = {1.1, 2.2, 3.3, 4.4};
    const char *str_arr[4] = {"abc", "abcd", "abcde", "abcdef"};

    cout << "Max element in arr1: " << maxn(arr1, 6) << endl;
    cout << "Max element in arr1: " << maxn(arr2, 4) << endl;
    cout << "Max element in str_arr: " << maxn(str_arr, 4) << endl;

    return 0;
}

template <typename T>
T maxn(T *arr, int num)
{
    T max_num = arr[0];

    for (int i = 0; i < num; i++)
        max_num = max(max_num, arr[i]);

    return max_num;
}

template <>
const char *maxn(const char **arr, int num)
{
    const char *longest = arr[0];
    for (int i = 0; i < num; i++)
    {
        if (strlen(arr[i]) > strlen(longest))
            longest = arr[i];
    }

    return longest;
}