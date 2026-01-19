#ifndef DOORLOCK_H
#define DOORLOCK_H

#include <string>
#include "Device.h"

class DoorLock : public Device {
public:
    DoorLock();
    void turnOn() override;
    void turnOff() override;
    void lockDoor();
    void unlockDoor();
    std::string getStatus() const override;
    ~DoorLock() override;

private:
    bool isLocked;
};

#endif // DOORLOCK_H