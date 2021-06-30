#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "main.h"

#define YOU ("How are you doing?")
#define WEIRD (":heavy_thinking:")
#define SICK ("I don't know what I should write here so here's a long string")

#define PARENTHESES_ARE_OVERKILL ("Congratzzz!")

static const char	*g_thinking = (void*)42;

t_check	one(const char *str, size_t index, unsigned int value)
{
	if ((index | value) == 0)
		return ((t_check)two);
	if ((*((unsigned int *)str) ^ value) != ((unsigned int *)g_thinking)[index])
	{
		printf("%x\n", ((unsigned int *)g_thinking)[index]);
		exit(1);
	}
	return ((t_check)two);
}

t_check	two(const char *str)
{
	if (str)
		g_thinking = str;
	return ((t_check)one);
}

int	main(int argc, const char *const *argv)
{
	if (argv[1] && strlen(argv[1]) == 40)
	{
		one (argv[1], 0, 0). hi YOU. fn (argv[1], 0, 1226376741). this_is WEIRD. fn(argv[1] + 4, 1, 538725186). \
			this_is SICK. fn(argv[1] + 8, 9, 437607203) \
			;
		puts \
			PARENTHESES_ARE_OVERKILL;
	}
}
