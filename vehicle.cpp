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
    std::string getMake();
    void setMake(std::string make);
    std::string getModel();
    void setModel(std::string model);
    void start();
    void stop();
};

class Delorean : public Vehicle
{
};

// Main function
int main()
{

    return 0;
}