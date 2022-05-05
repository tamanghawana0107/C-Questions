//Write an example for the static member function 
#include <iostream>
using namespace std;

class notebook
{
    static int page_number;
public:
    static int value()
    {
        return page_number;
    }
};
int notebook::page_number=1;
int main()
{
    cout << "Number ="<<notebook::value()<< endl;
    return 0;
}
/*
1.First, we have to create a class notebook.
2.The class notebook contains a static variable and a static member function.
3.The static function returns the static member which is called in main.
4.The static function is called using a class name with static member functoin name and :: sign.*/
