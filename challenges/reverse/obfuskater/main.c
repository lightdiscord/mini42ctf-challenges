#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "main.h"

#define YOU ("How are you doing?")
#define WEIRD (":heavy_thinking:")
#define AMAZING ("This sure is amazing")
#define SICK ("I don't know what I should write here so here's a long string")
#define NORM ("Norm go brrrrrrr")
#define PARENTHESES_ARE_OVERKILL ("Congratzzz!")

static const char	*g_thinking = (void*)42;

t_check	one(const char *str, size_t index, unsigned int value)
{
	if ((index | value) == 0)
		return ((t_check)two);
	if ((value ^ *((unsigned int *)str) ^ value)
		!= (((unsigned int *)g_thinking)[index] ^ value))
		exit(1);
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
		one (argv[1], 0, 0). hi YOU. fn (argv[1], 0, 1226376741). this_is \
			WEIRD. fn(argv[1] + 4, 1, 538725186). this_is SICK. fn(argv[1] + 8,
			9, 437607203). hi NORM. fn(argv[1] + 12, 4, 1561201518). this_is
		AMAZING. fn(argv[1] + 16, 2, 121000966). whut NORM. fn(argv[1] + 20,
			0, 838950438). whut WEIRD. fn(argv[1] + 24, 0, 1410751562). hi
		SICK. fn(argv[1] + 28, 4, 320951339). fnptrgobrr YOU. fn(argv[1] + 32,
			1, 1381309502). hi SICK. fn(argv[1] + 36, 3, 474041677);
		puts \
			PARENTHESES_ARE_OVERKILL;
	}
}
