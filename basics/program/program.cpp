#include <iostream>

int main()
{
    int x{};
    
    std::cout << "Enter an integer: ";
    std::cin >> x;
    std::cout << "Two times the integer you entered is: " << 2 * x << '\n'; 
    std::cout << "Three times the integer you entered is: " << 3 * x << '\n'; 

}
