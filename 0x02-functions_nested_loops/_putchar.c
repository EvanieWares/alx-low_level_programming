#include "main.h"
#include <unistd.h>

int _putchar(char str)
{
	return(write(1, &str, 1));
}
