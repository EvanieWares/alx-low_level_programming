/**
 * main - A program that prints "_putchar"
 *
 * Return: 0
 */

int main(void)
{
	const char *str = "_putchar";
	int length = strlen(str);
	int i;

	for (i = 0; i < length; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
	return (0);
}
