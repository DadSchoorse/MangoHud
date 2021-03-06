#include <nvml.h>

extern nvmlReturn_t result;
extern unsigned int nvidiaTemp, processSamplesCount, *vgpuInstanceSamplesCount, nvidiaCoreClock, nvidiaMemClock;
extern nvmlDevice_t nvidiaDevice;
extern struct nvmlUtilization_st nvidiaUtilization;
extern struct nvmlMemory_st nvidiaMemory;
extern bool nvmlSuccess;

bool checkNVML(const char* pciBusId);
bool getNVMLInfo(void);
