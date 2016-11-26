#pragma once

void rebootpc()

{
	union REGS inregs, outregs;
	int86(reboot, &inregs, &outregs); // Call BIOS
}
