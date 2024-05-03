/**
 * Name: vehicle.cpp
 * Author: Bill Edwards
 * Created: 05/03/2024
 */

#include <iostream>
#include <string>

// Class Definition
class Vehicle
{
private:
    std::string make;
    std::string model;

public:
    Vehicle(std::string make, std::string model);
    std::string Vehicle::getMake()
    {
        return make;
    }

    void Vehicle::setMake(std::string make)
    {
        this->make = make;
    }

    std::string Vehicle::getModel()
    {
        return model;
    }

    void Vehicle::setModel(std::string model)
    {
        this->model = model;
    }
    void Vehicle::start()
    {
        std::cout << "Starting the " << make << " " << model << std::endl;
    }
    void stop()
    {
        std::cout << "Stopping the " << make << " " << model << std::endl;
    }
};

class Delorean : public Vehicle
{
private:
    int year;

public:
    Delorean(std::string make, std::string model, int year);
    int getYear();
    void setYear(int year);
    void start();
    void stop();
};

// Main function
int main()
{

    return 0;
}