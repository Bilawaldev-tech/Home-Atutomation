#include "../includes/DoorLock.h"
#include <iostream>

DoorLock::DoorLock() : isLocked(true) {}

void DoorLock::turnOn() {
    isLocked = true;
    std::cout << "Door Lock is LOCKED." << std::endl;
}

void DoorLock::turnOff() {
    isLocked = false;
    std::cout << "Door Lock is UNLOCKED." << std::endl;
}

void DoorLock::lockDoor() {
    isLocked = true;
    std::cout << "Door is LOCKED." << std::endl;
}

void DoorLock::unlockDoor() {
    isLocked = false;
    std::cout << "Door is UNLOCKED." << std::endl;
}

std::string DoorLock::getStatus() const {
    return std::string("Door Lock is ") + (isLocked ? "LOCKED." : "UNLOCKED.");
}

DoorLock::~DoorLock() {
    std::cout << "Destroying Door Lock" << std::endl;
}
