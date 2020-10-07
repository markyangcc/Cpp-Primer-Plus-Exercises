#include <cstring>
#include <iostream>
#include <new>

using namespace std;

struct chaff
{
    char dross[20];
    int slag;
};

int main()
{
    chaff buffer[sizeof(chaff) * 2];

    chaff *ptr = new (buffer) chaff[2];

    for (int i = 0; i < 2; i++)
    {
        cout << "Enter dross: ";
        char input_dross[20];
        cin >> input_dross;

        strncpy((ptr + i)->dross, input_dross, strlen(input_dross) + 1);

        cout << "Enter slag: ";
        int input_slag;
        cin >> (ptr + i)->slag;
    }

    for (int i = 0; i < 2; i++)
    {
        cout << endl
             << "The num " << i + 1 << " chaff: " << endl;
        cout << (ptr + i)->dross << endl;
        cout << (ptr + i)->slag << endl;
    }

    return 0;
}
