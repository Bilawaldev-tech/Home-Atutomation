#include "../includes/Light.h"
#include <iostream>

Light::Light() : isOn(false) {}

void Light::turnOn() {
    isOn = true;
    std::cout << "Light is turned ON." << std::endl;
}

void Light::turnOff() {
    isOn = false;
    std::cout << "Light is turned OFF." << std::endl;
}

std::string Light::getStatus() const {
    return isOn ? "Light is ON." : "Light is OFF.";
}

Light::~Light() {
    std::cout << "Destroying Light" << std::endl;
}
