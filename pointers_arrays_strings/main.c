#include "main.h"
#include <stdio.h>

int main(void)
{
        char buffer[98] = {0x00};
	unsigned int i;
	
	_memset(buffer, 0x01, 95);
	
	printf("Buffer después de _memset(buffer, 0x01, 95):\n");
	
	for (i = 0; i < 10; i++)
	{
		printf("Buffer[%d]: 0x%02x\n", i, (unsigned char)buffer[i]);
	}
	
	return (0);
} 
