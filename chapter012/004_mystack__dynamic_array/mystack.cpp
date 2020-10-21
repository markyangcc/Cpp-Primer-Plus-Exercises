#include "mystack.h"
#include <cstring>

//default constructor
Stack::Stack(int n)
{
    pitems = new Item[n];
    size = n;
    top = 0;
    
    // std::cout<<"Hello, you have reach here";
}

//copy constructor
Stack::Stack(const Stack &st)
{
    pitems = new Item[st.size];

    for (int i = 0; i < st.size; i++)
        pitems[i] = st.pitems[i];
    size = st.size;
    top = st.top;
}

Stack::~Stack()
{
    delete[] pitems;
}

bool Stack::isempty() const
{
    return top == 0;
}

bool Stack::isfull() const
{
    return top == MAX;
}

bool Stack::push(const Item &item)
{
    if (size < MAX)
    {
        pitems[top] = item;
        top++;
        size++;
        return true;
    }
    else
        return false;
}

bool Stack::pop(Item &item)
{
    if (size > 0)
    {
        top--;
        item = pitems[top];
        size--;
        return true;
    }
    else
        return false;
}

// assignment operator
Stack &Stack::operator=(const Stack &st)
{
    if (&st == this)
        return *this;

    delete[] pitems;
    pitems = new Item[st.size];
    for (int i = 0; i < st.size; i++)
        pitems[i] = st.pitems[i];

    size = st.size;
    top = st.top;

    return *this;
}

std::ostream &operator<<(std::ostream &os, const Stack &st)
{
    using std::endl;

    for (int i = 0; i < st.top; i++)
    {
        os << "item " << i + 1 << ": " << (st.pitems)[i] << endl;
    }

    return os;
}