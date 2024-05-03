/**
 * Name: vehicle.cpp
 * Author: Bill Edwards
 * Created: 05/03/2024
 */

#include <iostream>
#include <string>

class Vehicle
{
private:
    std::string make;
    std::string model;

public:
    Vehicle(std::string make, std::string model);
    std::string getMake();
    void setMake(std::string make);
    std::string getModel();
    void setModel(std::string model);
    void start();
    void stop();
};

Vehicle::Vehicle(std::string make, std::string model) : make(make), model(model) {}

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

void Vehicle::stop()
{
    std::cout << "Stopping the " << make << " " << model << std::endl;
}

// Derived class Delorean from Vehicle
class Delorean : public Vehicle
{
private:
    int year;

public:
    Delorean(std::string make, std::string model, int year) : Vehicle(make, model), year(year) {}
    int getYear();
    void setYear(int year);
    void start();
    void stop();
};

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

void Delorean::stop()
{
    std::cout << "Disabling time circuits... Back to the present!" << std::endl;
}

// Derived class Herbie from Vehicle
class Herbie : public Vehicle
{
public:
    Herbie() : Vehicle("Volkswagen", "Beetle") {}

    void start() override
    {
        std::cout << "Herbie, the Love Bug, starts to drive..." << std::endl;
    }

    void stop() override
    {
        std::cout << "Herbie, the Love Bug, comes to a stop." << std::endl;
    }
};

// Main function
int main()
{
    Delorean delorean("Delorean", "DMC-12", 1985);
    delorean.start();
    delorean.stop();

    Herbie herbie;
    herbie.start();
    herbie.stop();

    return 0;
}
