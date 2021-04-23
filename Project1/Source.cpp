#include <iostream>
#include "container.h"
#include "container.cpp"


int main()
{
    Container<int> c;
    Container<int> c1;

    c.addBeginEnd(44,14);
    c.addBeginEnd(22,33);
    c.addBeginEnd(24, 66);


    //c.add(44);
    //c.add(44);
    for (int i = 0; i < c.length(); i++)
    {
        std::cout << c[i] << std::endl;
    }
    std::cout << "\n";
    c1.Change(c);
    //c.SortInverse();
    //std::cout << c.length() << std::endl;
    //std::cout << c[0] << std::endl;
    for (int i = 0; i < c1.length(); i++)
    {
        std::cout << c1[i] << std::endl;
    }
    //std::cout << c.First() << std::endl;

    //c.deleteFirstLast();
    //std::cout << "After delete first and last element\n";

    /*for (int i = 0; i < c.length(); i++)
    {
        std::cout << c[i] << std::endl;
    }*/

    return 0;
}