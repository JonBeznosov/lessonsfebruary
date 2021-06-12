#ifndef HEAD
#define HEAD

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#define error_message(msg) \
    do { perror(msg); exit(EXIT_FAILURE); } while (0)

#define SERVER_PORT 6488
#define SERVER_ADDR "127.0.0.1"
#define BUF_SIZE 256

#endif
