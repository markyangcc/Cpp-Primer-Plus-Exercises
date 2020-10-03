#include <iostream>

using namespace std;

double *fill_array(double *arr, int len);
void show_array(double *arr, double *end);
void reverse(double *arr, double *end);

int main()
{
    cout << "Enter the array size here: ";
    int arr_len;
    cin >> arr_len;

    const int len = arr_len;
    double arr[len];

    double *end = fill_array(arr, len);
    cout << "Array: ";
    show_array(arr, end);

    reverse(arr, end);
    cout << "Reversed array: ";
    show_array(arr, end);

    return 0;
}

double *fill_array(double *arr, int len)
{
    cout << "Enter at most " << len << " numbers(any non-num element will stop input): ";
    int i;
    for (i = 0; i < len; i++)
    {
        if (!(cin >> *(arr + i)))
            break;
    }
    return (arr + i - 1);
}

void show_array(double *arr, double *end)
{
    double *temp = arr;

    while (temp <= end)
    {
        cout << *(temp) << ' ';
        temp += 1;
    }

    cout << endl;
}

void reverse(double *arr, double *end)
{
    double *temp_begin = arr;
    double *temp_end = end;
    double *temp;

    while (temp_begin <= temp_end)
    {
        *temp = *temp_begin;
        *temp_begin = *temp_end;
        *temp_end = *temp;
        temp_begin += 1;
        temp_end -= 1;
    }
}
