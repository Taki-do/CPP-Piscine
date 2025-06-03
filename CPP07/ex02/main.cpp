#include <iostream>
#include "Array.hpp"
#include <cstdlib>

#define MAX_VAL 750
int main(void)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;

    Array<int> first(5);
    for (int i = 0; i < 5; i++)
        first[i] = i;
    Array<int> second(first);

    std::cout << "[Check that first and second are the same]" << std::endl;
    std::cout << "first = ";
    for (int i = 0; i < 5; i++)
        std::cout << first[i] << " ";
    std::cout << std::endl;
    std::cout << "second = ";
    for (int i = 0; i < 5; i++)
        std::cout << second[i] << " ";
    std::cout << std::endl;

    for (int i = 0; i < 5; i++)
        second[i] = i * i;

    std::cout << "[Check after changed values for second]" << std::endl;
    std::cout << "first = ";
    for (int i = 0; i < 5; i++)
        std::cout << first[i] << " ";
    std::cout << std::endl;
    std::cout << "second = ";
    for (int i = 0; i < 5; i++)
        std::cout << second[i] << " ";
    std::cout << std::endl;

    return 0;
}