#include <iostream>

int main(void) {

    int v1 = 50, sum = 0;
    while(v1 <= 100) {
        sum+=v1;
        ++v1;
    }
    std::cout << "The sum from 50 to 100 is " << sum << std::endl;

    int v2,v3;
    std::cout << "Please enter two integers : " << std::endl;
    std::cin >> v2 >> v3;

    if (v2 < v3)
    {
        while (v2 < v3 - 1)
        {
            std::cout << ++v2 << " ";
        }
    } else
    {
        while (v2 > v3 + 1)
        {
            std::cout << --v2 << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}