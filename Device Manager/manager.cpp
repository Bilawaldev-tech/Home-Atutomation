#include <iostream>
#include <unordered_map>
#include <memory>
#include "../Device/includes/Device.h"
#include "../Device/includes/Light.h"
#include "../Device/includes/DoorLock.h"
#include "../Device/includes/Thermostat.h"
#include "../Device Manager/manager.h"

class DeviceManager
{
private:
    std::unordered_map<int, std::unique_ptr<Device>> devices;

public:
    void addDevice(std::unique_ptr<Device> device, int id)
    {
        devices[id] = std::move(device);
    }
    void removeDevice(int id)
    {
        devices.erase(id);
    }
    Device *getDevice(int id)
    {
        auto it = devices.find(id);
        if (it != devices.end())
        {
            return it->second.get();
        }
        return nullptr;
    }
    void listDevices() const
    {
        for (const auto &pair : devices)
        {
            std::cout << "Device ID: " << pair.first << ", Status: " << pair.second->getStatus() << std::endl;
        }
    }
    ~DeviceManager()
    {
        devices.clear();
    }
};
