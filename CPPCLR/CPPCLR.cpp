// CPPCLR.cpp
#include "pch.h"
#include "CPPCLR.h"

using namespace CPPCLR;
using namespace Platform;

VirtualMemory::VirtualMemory(Platform::IntPtr obj, Platform::IntPtr stringTable)
{
	_obj = (PVOID)obj;
	_stringTable = (PVOID)stringTable;
}

void VirtualMemory::Analyze()
{

}

void VirtualMemory::GetManagedHeap(PVOID offset, PVOID& heapsOffset, PVOID& lastHeapByte)
{
	MEMORY_BASIC_INFORMATION memoryBasicInformation = {0};

	VirtualQuery(offset, &memoryBasicInformation, sizeof(memoryBasicInformation));

	heapsOffset = memoryBasicInformation.AllocationBase;
	lastHeapByte = (BYTE*)offset + memoryBasicInformation.RegionSize;
}
