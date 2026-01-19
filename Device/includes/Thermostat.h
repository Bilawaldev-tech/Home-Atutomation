#ifndef THERMOSTAT_H
#define THERMOSTAT_H

#include <string>
#include "Device.h"

class Thermostat : public Device {
public:
    Thermostat();
    void turnOn() override;
    void turnOff() override;
    std::string getStatus() const override;
    void setTemperature(float temp);
    ~Thermostat() override;

private:
    float temperature;
};

#endif // THERMOSTAT_H