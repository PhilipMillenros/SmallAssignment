
#include <iostream>

class Math
{
public:
    float CelsiusToFahrenheit(float celsius)
    {
        return celsius * 9 / 5 + 32;
    }
};

int main()
{
    Math math;
    std::cout << math.CelsiusToFahrenheit(36);
}
