template <class T>
class Container
{
public:
    Container();
    ~Container();
    void addBeginEnd(T obj1, T obj2);
    void deleteFirstLast();
    int length();
    T& operator[](int index);
    void clear();
    T&  First();
    T& Last();
    bool IsEmpty();
    void SortInverse();
    void Change(Container &other);


private:
    int array_size = 0;
    T* ptr;
};
#pragma once
