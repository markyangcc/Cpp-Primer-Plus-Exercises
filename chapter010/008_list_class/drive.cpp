#include "list.cpp"

void sqr(int &y) { y *= y; }

int main()
{
    List ls;
    bool status;

    status = ls.isEmpty();
    if (status)
        std::cout << "The List is  empty" << std::endl;

    while (!ls.isFull())
    {
        std::cout << "Enter item(for this program only int and limit to 5 at most): ";
        int x;
        std::cin >> x;
        ls.add(x);
        std::cout << std::endl
                  << "List status" << std::endl
                  << "--------------------" << std::endl;

        //Check isEmpty
        status = ls.isEmpty();
        if (status)
            std::cout << "The List is  empty" << std::endl;

        //Check isFull
        status = ls.isFull();
        if (status)
            std::cout << "The List is  full" << std::endl;

        // std::cout << "--------------------" << std::endl;
    }

    std::cout << "After add finished: ";
    ls.show();

    //call make_double()
    ls.make_double();
    std::cout << "After doubled: ";
    ls.show();

    //call sqr()
    ls.visit(sqr);
    std::cout << "After squared: ";
    ls.show();

    return 0;
}
