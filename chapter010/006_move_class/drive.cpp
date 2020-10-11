#include "move.cpp"

int main()
{
    using std::cout;
    using std::endl;

    Move obj1;
    obj1.showMove();
    cout << endl;

    Move obj2(2, 2);
    obj2.showMove();
    cout << endl;

    Move ret_obj = obj1.add(obj2);
    ret_obj.showMove();
    cout << endl;
    
    return 0;
}