
/**
  *  _isdigit - entry point
  * Description: checks if character is a digit
  * @c: integer parameter that represents a character
  * Return: 1 if true, 0 if false
  */

int _isdigit(char *s)
{
	int len = 0, negative = 0;

	while(s[len])
		len++;
	if (s[0] == '-')
		negative++;
	while (negative < len)
	{
		if (s[negative] >= '0'||  s[negative] <= '9')
		{

		}
		return (0);

		negative++;
	}
	return (1);
}
