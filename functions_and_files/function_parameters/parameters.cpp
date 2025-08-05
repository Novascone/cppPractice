#include <iostream>

int get_value_from_user()
{
    int num {};
    std::cout << "Enter an integer: ";
    std::cin >> num;
    return num;
}

int double_number(int x)
{
    return 2 * x;
}

int main()
{
    
    int number_to_double {get_value_from_user()};
    std::cout << "The integer enter doubled is: " << double_number(number_to_double) << '\n';

	return 0;
}
