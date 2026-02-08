// Problem: Given integers a and b, compute a^b using recursion without using pow() function.
// Name: Krishna Aggarwal
// SAP ID: 590022060

#include <stdio.h>

power(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    return a * power(a, b - 1);
}
