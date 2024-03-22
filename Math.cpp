#include <iostream>
#include "Math.h"
#include <cstdarg>
#include <cstring>

int Math::Add(int a, int b)
{
    return a + b;
}
int Math::Add(int a, int b, int c)
{
    return a + b + c;
}
int Math::Add(double a, double b)
{
    return a + b;
}
int Math::Add(double a, double b, double c)
{
    return a + b + c;
}
int Math::Mul(int a, int b)
{
    return a * b;
}
int Math::Mul(int a, int b, int c)
{
    return a * b * c;
}
int Math::Mul(double a, double b)
{
    return a * b;
}
int Math::Mul(double a, double b, double c)
{
    return a * b * c;
}
int Math::Add(int count, ...) // sums up a list of integers
{
    va_list args;
    va_start(args, count);
    int i = 1;
    int sum = 0;
    while (i <= count)
    {
        sum += va_arg(args, int);
    }

    va_end(args);
    return sum;
}
char* Math::Add(const char* a, const char* b)
{
    int nr1 = 0, nr2 = 0, p = 1;
    for (int i = strlen(a) - 1; i >= 0; i--)
    {
        nr1 = nr1 + ((int)a[i] - 48) * p;
        p = p * 10;
    }
    p = 1;
    for (int i = strlen(b) - 1; i >= 0; i--)
    {
        nr2 = nr2 + ((int)b[i] - 48) * p;
        p = p * 10;
    }
    nr1 = nr1 + nr2;
    int cif = 0, cnr = nr1;
    while (nr1)
    {
        cif++;
        nr1 = nr1 / 10;
    }
    char* result = new char[cif];

    for (int i = cif - 1; i >= 0; i--)
    {
        result[i] = '0' + cnr % 10;
        cnr = cnr / 10;
    }

    result[cif] = '\0';
    return result;
}