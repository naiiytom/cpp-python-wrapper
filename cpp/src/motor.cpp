#include "../include/automobile_bits/motor.hpp"
#include <iostream>

namespace vehicles
{
    Motor::Motor(std::string name)
    {
        _name = name;
    }

    std::string Motor::get_name() const
    {
        return _name;
    }

    void Motor::ride(std::string road) const
    {
        std::cout << "ZOOM Zoom zoom on: " << road << std::endl;
    }
} // namespace vehicles