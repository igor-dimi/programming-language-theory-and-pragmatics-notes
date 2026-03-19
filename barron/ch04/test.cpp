#include <iostream>

void f(int& a)
{
    a++;
}

template <typename T> 
void swap(T& a, T& b)
{
    T temp = a;
    a = b;
    b = temp;
}


int main(int argc, char const *argv[])
{
    int a = 0;
    f(a);
   
    std::cout << a << std::endl;

    double x, y;
    x = 10.0; y = 11.0;

    std::cout << x << " " << y << std::endl;
    swap(x, y);
    std::cout << x << " " << y << std::endl;

    /* code */
    return 0;
}
