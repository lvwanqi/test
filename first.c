#include <ntddk.h>


void DriverUnload(PDRIVER_OBJECT driver)
{
	DbgPrint("exit hello world\r\n");
}1111111111


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
