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
<<<<<<< HEAD
<<<<<<< HEAD
=======
=======
>>>>>>> acde657e5bc1a7c54a5ff1bc81f480c0b3c67a49


test for cherry pick.

<<<<<<< HEAD
test for cherry pick 2
>>>>>>> acde657... cherry pick 2
=======
test for cherry pick 2
>>>>>>> acde657e5bc1a7c54a5ff1bc81f480c0b3c67a49
