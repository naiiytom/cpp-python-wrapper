#include <automobile>
#include <iostream>

int main()
{

    vehicles::Motor c("Yamaha");
    std::cout << "Made a car call: " << c.get_name() << std::endl;

    c.ride("Mittraphab");

    return 0;
}