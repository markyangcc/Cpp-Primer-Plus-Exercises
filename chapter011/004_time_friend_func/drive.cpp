#include "time.cpp"

int main()
{
     using std::cout;
     using std::endl;

     Time aida(3, 35);
     Time tosca(2, 48);
     Time temp;

     cout << "Aida and Tosca:" << endl
          << aida << "; " << tosca << endl;

     //friend function is the member of class, so can't use member operator to use it
     //friend function is non-member function just like the func we use in chapter 7 Functions
     temp = aida + tosca;
     cout << "Aida + Tosca: " << temp << endl;

     temp = aida - tosca;
     cout << "Aida - Tosca: " << temp << endl;

     temp = 10.0 * tosca;
     cout << "10.0 * Tosca: " << temp << endl;

     return 0;
}