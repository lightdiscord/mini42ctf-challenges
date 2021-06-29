#include <unistd.h>
#include <string.h>
#include <stdio.h>

const char *secret_password = SECRET_PASSWORD;

int	main(int argc, const char *const *argv) {
	if (argc < 2) {
		puts("You're probably not allowed here, but just in case what's the password?");
	} else if (strcmp(secret_password, argv[1]) == 0) {
		puts("Wow sorry, I didn't recognize you! You can use this password as a flag!");
	} else {
		puts("Yeah, that's what I thought...");
	}
}
