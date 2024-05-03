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
    Delorean(std::string make, std::string model, int year) : Vehicle(make, model), year(year) {}
    int Delorean::getYear()
    {
        return year;
    }
    void Delorean::setYear(int year)
    {
        this->year = year;
    }
    void Delorean::start()
    {
        std::cout << "Activating time circuits... Flux Capacitors online!" << std::endl;
        std::cout << "Preparing to travel back in time with the " << getMake() << " " << getModel() << " of year " << year << "..." << std::endl;
    }
    void stop()
    {
        std::cout << "Disabling time circuits... Back to the present!" << std::endl;
    }
};

class Herbie : public Vehicle
{
};

// Main function
int main()
{
    Delorean delorean("Delorean", "DMC-12", 1985);
    delorean.start();
    delorean.stop();

    return 0;
}