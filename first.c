#include <ntddk.h>fffff


void DriverUnload(PDRIVER_OBJECT driver)
{
	DbgPrint("exit hello world\r\n");
}


NTSTATUS 
  DriverEntry( 
    IN PDRIVER_OBJECT  DriverObject, 
    IN PUNICODE_STRING  RegistryPath 
    )
{
#if DBG
       _asm int 3
#endif

	DbgPrint("hello world!\r\n");
	DriverObject->DriverUnload=DriverUnload;
	return STATUS_SUCCESS;

}
