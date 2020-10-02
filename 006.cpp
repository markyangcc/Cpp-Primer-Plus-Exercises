#include <iostream>

using namespace std;

int Fill_array(double *arr, int len);
void Show_array(double *arr, int len);
void Reverse_array(double *arr, int num);

int main()
{
    cout << "Enter the array size here: ";
    int arr_len;
    cin >> arr_len;

    const int len = arr_len;
    double arr[len];

    int num = Fill_array(arr, len);
    cout << "Array: ";
    Show_array(arr, num);

    Reverse_array(arr, num);
    cout << "Reversed array: ";
    Show_array(arr, num);

    return 0;
}

int Fill_array(double *arr, int len)
{
    cout << "Enter at most " << len << " numbers(any non-num element will stop input): ";
    int i;
    for (i = 0; i < len; i++)
    {
        if (!(cin >> *(arr + i)))
            break;
    }
    return i;
}

void Show_array(double *arr, int num)
{
    for (int i = 0; i < num; i++)
        cout << arr[i] << ' ';
    cout << endl;
}

void Reverse_array(double *arr, int num)
{
    int temp;
    for (int i = 0; i < num / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[num - 1 - i];
        arr[num - 1 - i] = temp;
    }
}
