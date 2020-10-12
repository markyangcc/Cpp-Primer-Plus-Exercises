#include "list.h"
#include <iostream>

void List::add(Item a)
{
    Item_arr[top] = a;
    std::cout << "Item: " << Item_arr[top] << " has benn added." << std::endl;
    top++;
}

bool List::isEmpty()
{
    if (top == 0)
        return true;
    else
        return false;
}

bool List::isFull()
{
    if (top == Len)
        return true;
    else
        return false;
}

void List::show() const
{
    for (int i = 0; i < top; i++)
        std::cout << Item_arr[i] << "  ";

    std::cout << std::endl;
}

void List::make_double()
{
    for (int i = 0; i < top; i++)
        Item_arr[i] = 2 * Item_arr[i];

    std::cout << std::endl;
}

void List::visit(void (*pf)(Item &))
{
    for (int i = 0; i < top; i++)
        (*pf)(Item_arr[i]);
}