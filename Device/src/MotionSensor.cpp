#include "MotionSensor.h"
#include <iostream>

MotionSensor::MotionSensor() : motionDetected(false) {}

void MotionSensor::turnOn() {
    std::cout << "Motion Sensor turned ON." << std::endl;
}

void MotionSensor::turnOff() {
    std::cout << "Motion Sensor turned OFF." << std::endl;
}

void MotionSensor::notifyMotion() {
    std::cout << "Motion Sensor Notification: Motion detected!" << std::endl;
}

std::string MotionSensor::getStatus() const {
    return motionDetected ? "Motion detected!" : "No motion detected.";
}

void MotionSensor::detectMotion(bool detected) {
    motionDetected = detected;
    std::cout << (motionDetected ? "Motion detected!" : "No motion detected.") << std::endl;
}

MotionSensor::~MotionSensor() {
    std::cout << "Destroying Motion Sensor" << std::endl;
}
