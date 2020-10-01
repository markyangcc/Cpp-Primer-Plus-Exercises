#include <iostream>
#include <string>

using namespace std;

struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

int AssignBox(struct box *Box);
void Display_a(struct box Box, int length);
void Display_b(struct box *Box, int length);

int main()
{
    struct box Box;

    int BoxMakerLen = AssignBox(&Box);

    Display_a(Box, BoxMakerLen);
    Display_b(&Box, BoxMakerLen);

    return 0;
}

int AssignBox(struct box *Box)
{
    string s("Mark Swift");

    for (int i = 0; i < sizeof(Box->maker); i++)
        Box->maker[i] = s[i];

    Box->height = 1.1;
    Box->width = 2.2;
    Box->length = 3.3;
    Box->volume = Box->height * Box->length * Box->width;

    return s.length();
}

//display by pass struct Box itself, using . operater

void Display_a(struct box Box, int length)
{
    cout << "Diaplay Box by pass struct values:" << endl
         << endl;

    cout << "Box Maker: ";
    for (int i = 0; i < length; i++)
        cout << Box.maker[i];
    cout << endl;

    cout << "Box Height: " << Box.height << endl
         << "Box Width: " << Box.width << endl
         << "Box Length: " << Box.length << endl
         << "Box Volume: " << Box.volume << endl;
}

//display by pass struct Box's address, using -> operater

void Display_b(struct box *Box, int length)
{
    cout << endl;
    cout << "Diaplay Box by pass struct address:" << endl
         << endl;
    cout << "Box Maker: ";
    for (int i = 0; i < length; i++)
        cout << Box->maker[i];
    cout << endl;

    cout << "Box Height: " << Box->height << endl
         << "Box Width: " << Box->width << endl
         << "Box Length: " << Box->length << endl
         << "Box Volume: " << Box->volume << endl;
}