#include "Calculator.h"

float Calculator::Calculate(float a, float b, char o)
{
    switch (o)
    {
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '*':
        return a * b;
    case '/':
        return a / b;
    default:
        return 0.0;
    }
}