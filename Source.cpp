



#include <iostream>
#include <string.h>





void output(int max, int padding)
{
	for (int idx = padding; idx > 0; --idx)
	{
		std::cout << " ";
	}
	for (int idx = max; idx > 0; --idx)
	{
		std::cout << "*";
	}
	std::cout << std::endl;
	
}

void determine(int input, int max)
{
	int padding = (max - input) / 2;
	output(input, padding);
	--padding;
	for (int idx = padding; idx >= 0; --idx)
	{
		input = input + 2;
		output(input, idx);
	}

	for (int idx = 0; idx <= padding; idx++)
	{
		input = input - 2;
		output(input, idx + 1);
	}
}


int main()
{
	int input;

	std::cout << "How many sides would you like?; ";
	std::cin >> input;
	
	int max = input;
	for (int idx = input; idx > 1; --idx)
	{
		max = max + 2;
	}

	determine(input, max);
	std::cin >> input;

}