#include "iostream"

// Function for finding factorial using recurssion
int fact(int x)
{
    return x > 1 ? x * fact(x - 1) : x;
}

int main()
{
    int y = fact(4);
    std::cout << "fact of 4 is " << y;
    return 0;
}
