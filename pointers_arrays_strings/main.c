#include "main.h"
#include <stdio.h>

int main(void)
{
        char buffer[98] = {0x00};
	char buffer2[98] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
	unsigned int i;
	
	_memcpy(buffer + 50, buffer2, 10);
	
	printf("Buffer después de _memcpy (Mostrando índices 50 al 59):\n");
	
	for (i = 50; i < 60; i++)
	{
		printf("Buffer[%d]: 0x%02x\n", i, (unsigned char)buffer[i]);
	}
	
	return (0);
} 
