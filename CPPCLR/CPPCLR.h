#pragma once

#include <Windows.h>

namespace CPPCLR
{
    public ref class VirtualMemory sealed
    {
		 PVOID _obj;
		 PVOID _stringTable;

		 void GetManagedHeap(PVOID, PVOID&, PVOID&);
    public:
			VirtualMemory(Platform::IntPtr obj, Platform::IntPtr stringTable);
			void Analyze();
    };
}