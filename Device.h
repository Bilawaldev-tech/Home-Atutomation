#ifndef DEVICE_H
#define DEVICE_H

#include <string>

class Device {
private:
    int id;
    std::string name;

public:
    virtual void turnOn();
    virtual void turnOff();
    virtual std::string getStatus() const = 0;
    virtual ~Device();
};

#endif // DEVICE_H