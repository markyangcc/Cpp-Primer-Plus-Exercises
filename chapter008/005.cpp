#include <iostream>

using namespace std;

template <typename T>
T maxn(const T *arr);

int main()
{
    int arr1[5] = {1, 2, 3, 4, 5};
    double arr2[5] = {1.1, 2.2, 3.3, 4.4, 5.5};

    cout << "Max element in arr1: " << maxn(arr1) << endl;
    cout << "Max element in arr2: " << maxn(arr2) << endl;

    return 0;
}

template <typename T>
T maxn(const T *arr)
{
    T max_num = arr[0];

    for (int i = 0; i < 5; i++)
        max_num = max(max_num, arr[i]);

    return max_num;
}
