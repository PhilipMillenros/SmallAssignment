#include <iostream>

//Absolute difference 
float AbsoluteValue(float value)
{
	if (value < 0)
	{
		return -value;
	}
	return value;
}
float AbsoluteDifference(float a, float b)
{
	return AbsoluteValue(a) + AbsoluteValue(b);
}

//Celsius to Fahrenheit
float CelsiusToFahrenheit(float celsius)
{
	return celsius * 9 / 5 + 32;
}

//Even or odd
bool ValueIsEven(int value)
{
	if (value % 2 != 0)
	{
		return false;
	}
	else
	{
		return true;
	}
}
//Last digit of a number
void GetLastDigit(int value)
{
	//std::string valueString = std::to_string(value);
	//valueString.

}