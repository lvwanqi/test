#include <ntddk.h>qqq


void DriverUnload(PDRIVER_OBJECT driver)
{
	DbgPrint("exit hello world\r\n");
}333333333333333


NTSTATUS 33333333333333
  DriverEntry( 
    IN PDRIVER_OBJECT  DriverObject, 
    IN PUNICODE_STRING  RegistryPath 
    )
{33333333333333333
#if DBG
       _asm int 3
#endif

	DbgPrint("hello world!\r\n");
	DriverObject->DriverUnload=DriverUnload;
	return STATUS_SUCCESS;

}
