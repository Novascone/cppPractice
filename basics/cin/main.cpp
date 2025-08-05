#include <iostream>  // for std::cout and std::cin

int main()
{
    std::cout << "Enter three values: "; // ask user for 3 numbers 
    int x{}; // define variable x to hold user input
    int y{}; // define variable y to hold user input
    int z{}; // define variable z to hold user input
    std::cin >> x; // get number from keyboard and store it in variable x
    std::cin >> y; // get number from keyboard and store it in variable y
    std::cin >> z; // get number from keyboard and store it in variable z
    std::cout << "You entered " << x << ", " << y << ", and " << z << "." << '\n';

    return 0;
}
