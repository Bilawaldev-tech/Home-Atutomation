#include <iostream>
#include <unordered_map>
#include <memory>
#include "../Device/includes/Device.h"
#include "../Device/includes/Light.h"
#include "../Device/includes/DoorLock.h"
#include "../Device/includes/Thermostat.h"

class DeviceManager
{
private:
    std::unordered_map<int, std::unique_ptr<Device>> devices;

public:
    void addDevice(std::unique_ptr<Device> device, int id);
    void removeDevice(int id);
    Device *getDevice(int id);
    void listDevices() const;
    ~DeviceManager();
};