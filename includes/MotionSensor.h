#ifndef MOTIONSENSOR_H
#define MOTIONSENSOR_H

#include <string>
#include "Device.h"

class MotionSensor : public Device {
public:
    MotionSensor();
    void turnOn() override;
    void turnOff() override;
    void notifyMotion();
    std::string getStatus() const override;
    void detectMotion(bool detected);
    ~MotionSensor() override;

private:
    bool motionDetected;
};

#endif // MOTIONSENSOR_H