/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: the string
 *
 * Return: a pointer to the string
 */

char *string_toupper(char *s)
{
  int j = 0;

  while (s[j])
    {
      if (s[j] >= 'a' && s[j] <= 'z')
	s[j] = s[j] - 32;
      j++;
    }
  return (s);
}
