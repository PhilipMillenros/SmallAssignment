#include <iostream>

class Math
{
public: 
    bool IsEven(int value)
    {
        if (value % 2 == 0)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    Math math;
    std::cout << math.IsEven(3);
}

