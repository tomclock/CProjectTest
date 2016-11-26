#include <dos.h>
#include "RebootPC.h"
#define reboot 0x19
void main()
{
	rebootpc();
}
