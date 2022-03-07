#include <iostream>
class Math
{
public:
	float Abs(float value)
	{
		return value < 0 ? -value : value;
	}
	float AbsoluteDifference(float a, float b)
	{
		return Abs(a) + Abs(b);
	}
};
int main()
{	
	Math math;
	
	std::cout << math.AbsoluteDifference(-4, 4) << std::endl;
}



