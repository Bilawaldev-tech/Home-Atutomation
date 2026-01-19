#include "Thermostat.h"
#include <iostream>

Thermostat::Thermostat() : temperature(20.0f) {}

void Thermostat::turnOn() {
    std::cout << "Thermostat is turned ON." << std::endl;
}

void Thermostat::turnOff() {
    std::cout << "Thermostat is turned OFF." << std::endl;
}

std::string Thermostat::getStatus() const {
    return std::string("Thermostat temperature is set to ") + std::to_string(temperature) + "°C.";
}

void Thermostat::setTemperature(float temp) {
    temperature = temp;
    std::cout << "Thermostat temperature set to " << temperature << "°C." << std::endl;
}

Thermostat::~Thermostat() {
    std::cout << "Destroying Thermostat" << std::endl;
}
