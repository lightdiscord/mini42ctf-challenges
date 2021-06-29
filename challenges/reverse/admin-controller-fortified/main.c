#include <unistd.h>
#include <string.h>
#include <stdio.h>

int __attribute__ ((noinline)) cmp(unsigned value, unsigned another) {
	return value == another;
}

inline int CHECK(const char *secret, int index, const char expected[4]) {
	unsigned secret_value = ((unsigned*)secret)[index];
	unsigned expected_value = *((unsigned*)expected);

	return cmp(expected_value ^ 0x42beef42, secret_value ^ 0x42beef42);
	return 0;
}

int	check(const char *secret) {
	if (!CHECK(secret, 0, "mini"))
		return -1;
	if (!CHECK(secret, 1, "42CT"))
		return -1;
	if (!CHECK(secret, 2, "F{w0"))
		return -1;
	if (!CHECK(secret, 3, "w_Im"))
		return -1;
	if (!CHECK(secret, 4, "_sur"))
		return -1;
	if (!CHECK(secret, 5, "3_Im"))
		return -1;
	if (!CHECK(secret, 6, "_4n_"))
		return -1;
	if (!CHECK(secret, 7, "4dm1"))
		return -1;
	if (!CHECK(secret, 8, "n_n0"))
		return -1;
	if (!CHECK(secret, 9, "w_!}"))
		return -1;
	return 0;
}

int	main(int argc, const char *const *argv) {
	if (argc < 2) {
		puts("Didn't I already say you? Anyway you're probably not allowed here.");
	} else if (strlen(argv[1]) == 40 && check(argv[1]) == 0) {
		puts("Wow sorry, I didn't recognize you! You can use this password as a flag!");
	} else {
		puts("Yeah, that's what I thought...");
	}
}
