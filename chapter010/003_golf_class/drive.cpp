#include "golf.cpp"

int main()
{
    {
        Golf p1;
        std::cout << "Default player info about Golf Player: " << std::endl;
        p1.showgolf();
        std::cout << std::endl;

        Golf p2;
        p2.setgolf();
        std::cout << "Info about new Golf" << std::endl;
        p2.showgolf();
        std::cout << std::endl;

        std::cout << "Reset handicap of Golf p2 to 12" << std::endl;
        p2.rset_handicap(12);
        p2.showgolf();
        std::cout << std::endl;
    }
    return 0;
}