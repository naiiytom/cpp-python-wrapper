#include <string>

#ifndef MOTOR_H
#define MOTOR_H

namespace vehicles
{
    class Motor
    {
    private:
        /// Name
        std::string _name;

    public:
        Motor(std::string name);

        std::string get_name() const;

        void ride(std::string road) const;
    };

} // namespace vehicles

#endif