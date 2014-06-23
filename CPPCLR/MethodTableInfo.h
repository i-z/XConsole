#pragma once
#pragma pack(push, 2)

struct ObjectTypeInfo;

struct MethodTableInfo
{
	int mFlags;
	int mSize;
	short mAdditionalFlags;
	short mMethodsCount;
	short mVirtMethodsCount;
	short mInterfacesCount;
	MethodTableInfo* mParentTable;
	ObjectTypeInfo* mModuleInfo;
	ObjectTypeInfo* mEEClass;
};

struct ObjectTypeInfo
{
	ObjectTypeInfo* mParentClass;
	short unused[7];
	MethodTableInfo* MethodsTable;
};

#pragma pack(pop)
