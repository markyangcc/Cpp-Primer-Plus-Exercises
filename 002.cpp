#include <iostream>

using namespace std;

double *golf_input(double *arr, int *count);

double golf_calc(const double *arr, int count);

void golf_display(const double *arr, int count, double average);

int main()
{
    double arr[10];
    int count = 0;

    golf_input(arr, &count);

    double average = golf_calc(arr, count);

    golf_display(arr, count, average);

    return 0;
}

double *golf_input(double *arr, int *count)
{
    cout << "Enter at most 10 grades of golf, you can stop input anytime: ";

    double grade;
    char ch;
    ch = cin.get();

    if (ch=='\n')
        
    while (ch=='\n')
    {
        /* code */
    }
    

    //TODO: try to let input stop when enter hit
    while ()
    {
        *(arr + (*count)) = grade;
        (*count)++;

        if ((*count) < 10)
            grade = cin.get();
        else
            break;
    }

    return arr;
}

double golf_calc(const double *arr, int count)
{
    double sum = 0;
    for (int i = 0; i < count; i++)
    {
        sum += *(arr + i);
    }

    return sum / count;
}

void golf_display(const double *arr, int count, double average)
{
    cout << "The grades are: ";
    for (int i = 0; i < count; i++)
    {
        cout << *(arr + i) << " ";
    }
    cout << '\n';
    cout << "The average grade is " << average << '\n';
}
