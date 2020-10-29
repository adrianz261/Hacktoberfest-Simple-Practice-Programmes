#include <iostream>
#include <array>
#include "librarySort.h"

int main()
{
    std::array<double, 5> a = {1.0, 5.0, 3.0, 1.0, 4.0};
    auto as = librarySort(a);

    for (double t : a)
    {
        std::cout << t << ' ';
    }
    std::cout << '\n';
    for (double t : as)
    {
        std::cout << t << ' ';
    }

    return 0;
}