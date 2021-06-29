#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

struct s_data {
	char buffer[0x80];
	unsigned int code;
};

void win(void) {
	char buffer[0x80];
	int fd = open("flag.txt", O_RDONLY);
	int res = read(fd, buffer, 0x80);

	if (res == -1)
		puts("Wow, that's not normal!");
	else
		printf("Here's your flag: %.*s\n", res, buffer);
}

int main(void) {
	struct s_data data = {
		.code = 0xdeadbeef,
		.buffer = { 0 }
	};

	puts("ECHOATOR2000: New update! We're now able to print you back your bytes up to 128 of them!");

	read(STDIN_FILENO, data.buffer, 0x100);

	if (data.code == 0x42c0ffee) {
		win();
	} else if (data.code != 0xdeadbeef) {
		printf("*Someone told me to say you're a %x*\n", data.code);
	} else {
		printf("%.*s", 0x80, data.buffer);
		puts("Goodbye!");
	}
}
