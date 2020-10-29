#include <array>

template<typename T, size_t SIZE>
using t = std::array<T, SIZE>;

template<typename T, size_t SIZE>
t<T, SIZE> librarySort(const t<T, SIZE> &arr)
{
    t<T, SIZE> arr_sorted;

    for (int i = SIZE - 2; i >= 0; --i)
    {
        const T tmp = arr.at(i);
        int j = i + 1;

        for (; j < SIZE; ++j)
        {
            if (tmp <= arr.at(j))
            {
                arr_sorted.at(j - 1) = tmp;
                break;
            }
            arr_sorted.at(j - 1) = arr.at(j);
        }
        
    }

    return arr_sorted;
}