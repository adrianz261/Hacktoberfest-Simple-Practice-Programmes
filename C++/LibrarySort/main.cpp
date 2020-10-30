#include <iostream>
#include <array>
#include "librarySort.h"

int main()
{
    std::array<int, 5> a = {1, 3, 2, 5, 3};
    auto as = librarySort(a);

    for (int t : a)
    {
        std::cout << t << ' ';
    }
    std::cout << '\n';
    for (int t : as)
    {
        std::cout << t << ' ';
    }

    return 0;
}