#include "PcapDevice.h"

using namespace PcapDotNet;

PcapDeviceHandler^ PcapDevice::Open()
{
    return Open(65536, PcapDeviceOpenFlags::PROMISCUOUS, 1000);
}
