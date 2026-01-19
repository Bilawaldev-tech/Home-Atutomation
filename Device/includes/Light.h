#ifndef LIGHT_H
#define LIGHT_H

#include <string>
#include "Device.h"

class Light : public Device {
public:
    Light();
    void turnOn() override;
    void turnOff() override;
    std::string getStatus() const override;
    ~Light() override;

private:
    bool isOn;
};

#endif // LIGHT_H