/**
 * print_name - Display name
 * @name: name of a person.
 * @f: function pointer
 *
 * Return: nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == '\0')
		return;
	f(name);
}