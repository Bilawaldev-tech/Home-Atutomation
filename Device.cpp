#include <iostream>
#include "Device.h"
using namespace std;

void Device::turnOn() {
    std::cout << "Device turned ON." << std::endl;
}

void Device::turnOff() {
    std::cout << "Device turned OFF." << std::endl;
}

Device::~Device() {
    std::cout << "Destroying Device" << std::endl;
}
