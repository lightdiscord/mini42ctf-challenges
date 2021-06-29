#!/usr/bin/env sh

gcc -Wall -Wextra -Werror -o challenge main.c -DSECRET_PASSWORD="\"$(cat flag.txt)\""
