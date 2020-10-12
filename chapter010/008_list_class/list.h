#ifndef List_H_
#define List_H_

typedef int Item;

class List
{
private:
    static const Item Len = 5;
    Item Item_arr[Len] = {0};
    int top; //indicate current position

public:
    List();
    void add(Item a);
    bool isEmpty();
    bool isFull();
    void show() const;
    void make_double();
    void visit(void (*pf)(Item &));
    ~List();
};

List::List()
{
    top = 0;
}

List::~List()
{
}


#endif