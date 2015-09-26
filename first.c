#include <ntddk.h>

modify 1
void DriverUnload(PDRIVER_OBJECT driver)
{
	DbgPrint("exit hello world\r\n");
}333333333333333


NTSTATUS 111111111
  DriverEntry( 
    IN PDRIVER_OBJECT  DriverObject, 
    IN PUNICODE_STRING  RegistryPath 
    )
{1111111111
#if DBG
       _asm int 3
#endif

	DbgPrint("hello world!\r\n");
	DriverObject->DriverUnload=DriverUnload;
	return STATUS_SUCCESS;

}


test for cherry pick.

test for cherry pick 2