#include <iostream>
#include "container.h"

template <typename T>
Container<T>::Container()
{
    ptr = new T[array_size];
}
template <typename T>
void Container<T>::addBeginEnd(T obj1, T obj2) {
    array_size+=2;    
    T *new_ptr = new T[array_size];
    for (int i = 0; i < array_size-2; i++) {
        new_ptr[i+1] = ptr[i];
    }
    new_ptr[0] = obj1;
    new_ptr[array_size-1] = obj2;

    delete ptr;
    ptr = new_ptr;
    //delete new_ptr;
}

template <typename T>
void Container<T>::deleteFirstLast()
{
    array_size -= 2;
    T* new_ptr = new T[array_size];
    for (int i = 0; i < array_size; i++) {
        new_ptr[i] = ptr[i+1];
        //std::cout << ptr[i+1] << "\n";
    }    
    delete ptr;
    ptr = new_ptr;
    //delete new_ptr;

}

template <typename T>
T& Container<T>::operator[](int index)
{
    return ptr[index];
}

template <typename T>
int Container<T>::length() {
    return array_size;
}

template <typename T>
void Container<T>::clear() {
    array_size = 0;
    delete ptr;
    ptr = new T[array_size];
}

template <typename T>
T&  Container<T>::First() {
    return ptr[0];
}

template <typename T>
T& Container<T>::Last() {
    return ptr[array_size-1];
}

template <typename T>
bool Container<T>::IsEmpty() {
    return array_size != 0;
}

template <typename T>
void Container<T>::SortInverse() {
    T t;
    for (int i = 0; i < array_size; i++)
    {
        for (int j = 0; j < array_size-1; j++)
        {
            if (ptr[j] > ptr[j+1])
            {
                t = ptr[j];
                ptr[j] = ptr[j+1];
                ptr[j+1] = t;
            }
        }
    }
   
}

template <typename T>
void Container<T>::Change( Container &other)
{
    array_size = other.length();
    ptr = new T[array_size];
    for (int i = 0; i < array_size; i++)
    {
        ptr[i] = other[i];
    }
}


template <typename T>
Container<T>::~Container()
{
    delete ptr;
}