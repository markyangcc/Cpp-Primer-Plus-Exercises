#include "dma.cpp"
#include <iostream>

const int ARRLEN = 3;
const int LEN = 40;

int main(void)
{
    using std::cin;
    using std::cout;
    using std::endl;

    abcDMA *arr[ARRLEN];

    char label[LEN];
    char style[LEN];
    char color[LEN];
    int rating;
    int choice;

    for (int i = 0; i < ARRLEN; i++)
    {
        cout << "For element " << i + 1 << ", enter the label: ";
        cin.getline(label, LEN);
        cout << "Enter the rating: ";
        cin >> rating;

        cout << "Enter 1 if this is to be a baseDMA object" << endl;
        cout << "Enter 2 if this is to be a lackDMA object" << endl;
        cout << "Enter 3 if this is to be a hasDMA object" << endl;
        cin >> choice;
        cin.get(); // discard newline character
        switch (choice)
        {
        case 1:
            arr[i] = new baseDMA(label, rating);
            break;
        case 2:
            cout << "Enter color: ";
            cin.getline(color, LEN);
            arr[i] = new lackDMA(color, label, rating);
            break;

        case 3:
            cout << "Enter the style: ";
            cin.getline(style, LEN);
            arr[i] = new hasDMA(style, label, rating);
            break;
        default:
            cout << "Error input, default to baseDMA";
            arr[i] = new baseDMA(label, rating);
            break;
        }
    }

    cout << "Here's what you entered:" << endl;
    for (int i = 0; i < ARRLEN; i++)
    {
        cout << "Element " << i + 1 << ":" << endl;
        arr[i]->View();
    }

    for (int i = 0; i < ARRLEN; i++)
        delete arr[i];

    return 0;
}
