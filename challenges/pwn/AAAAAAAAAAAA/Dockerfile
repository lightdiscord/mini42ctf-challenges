FROM alpinelinux/build-base AS builder

USER root

WORKDIR /root
COPY main.c .
RUN cc -Wall -Wextra -O3 -D_FORTIFY_SOURCE=0 -o challenge main.c

FROM alpine/socat

EXPOSE 20100

CMD echo 1 > /proc/sys/kernel/randomize_va_space

RUN adduser -D user

USER user

COPY --from=builder /root/challenge /home/user/
COPY flag.txt /home/user/

ENTRYPOINT []
CMD cd /home/user && socat TCP-LISTEN:20100,reuseaddr,fork EXEC:/home/user/challenge,stderr
