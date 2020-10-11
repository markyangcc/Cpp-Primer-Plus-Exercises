#include "golf.cpp"

int main()
{
    {
        Golf default_player;
        std::cout << "Default player info about Golf Player: " << std::endl;
        default_player.showgolf();
        std::cout << std::endl;

        Golf new_player;
        new_player.setgolf();
        std::cout << "Info about new Golf" << std::endl;
        new_player.showgolf();
        std::cout << std::endl;

        std::cout << "Reset handicap of Golf new_player to 12" << std::endl;
        new_player.rset_handicap(12);
        new_player.showgolf();
        std::cout << std::endl;
    }
    return 0;
}