#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
    int a = 3, b = 6;
    solution.SwapByRef(a,b);
    std::cout << "By references: " << a <<' '<< b << std::endl;
    int m = 5, n = 9;
    solution.SwapByPtr(&m,&n);
    std::cout << "By pointers: " << m <<' '<< n << std::endl;
    return EXIT_SUCCESS;
}