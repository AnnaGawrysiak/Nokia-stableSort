#include <iostream>
#include "StableSort.h"

#include <vector>

int main()
{
    std::vector <int>  vec = { 2, 4, 4, 1 };

    utils::stableSort(vec);

    for(const auto item : vec)
        std::cout << item << std::endl;

    return 0;
}
