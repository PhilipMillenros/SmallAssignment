#include <iostream>

void SwapByReference(int& a, int& b)
{
     a = a - b; 
     b = b + a; 
     a = b - a;
}
void SwapPointingValue(int* a, int* b)
{
   *a = *a - *b;
   *b = *b + *a;
   *a = *b - *a;
}
void STLSolution()
{
    int a = 6;
    int b = 5;
    std::cout << "STL Input: " << a << " " << b << std::endl;
    std::swap(a, b);
    std::cout << "STL Output: " << a << " " << b << std::endl;
}
void ReferenceSolution()
{
    int a = -6;
    int b = -5;
    std::cout << "Reference Input: " << a << " " << b << std::endl;
    SwapByReference(a, b);
    std::cout << "Reference Output: " << a << " " << b << std::endl;
}
void PointerSolution()
{
    int a = -4;
    int b = 6;
    int* aPtr = &a;
    int* bPtr = &b;
    std::cout << "Reference Input: " << a << " " << b << std::endl;
    SwapPointingValue(aPtr, bPtr);
    std::cout << "Reference Output: " << a << " " << b << std::endl;
}

int main()
{
    STLSolution();
    ReferenceSolution();
    PointerSolution();
}
