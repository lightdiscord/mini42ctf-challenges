#ifndef MAIN_H
# define MAIN_H

# include <sys/types.h>

typedef union u_check {
	union	u_check (*fn)(const char *str, size_t index, unsigned int value);
	union	u_check (*hi)(const char *str);
	union	u_check (*this_is)(const char *str);
}	t_check;

t_check	one(const char *str, size_t index, unsigned int value);
t_check	two(const char *str);

#endif
