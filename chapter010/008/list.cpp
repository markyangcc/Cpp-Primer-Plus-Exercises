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
    {
      
        return true;
    }
    else
    {
       // std::cout << "The List is not empty" << std::endl;
        return false;
    }
}

bool List::isFull()
{
    if (top == Len)
    {
        // std::cout << "The List is full" << std::endl;
        return true;
    }
    else
    {
        // std::cout << "The List is not full" << std::endl;
        return false;
    }
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