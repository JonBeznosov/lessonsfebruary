#include "head.h"

int main(int argc, char *argv[])
{
    struct sockaddr_in  svaddr, claddr;
    int fd, j;
    ssize_t num_bytes;
    socklen_t len;
    char buf[BUF_SIZE];
    char ip4[INET_ADDRSTRLEN];

    fd = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);
    if (fd == -1)
    {
        handle_error("socket");
    }

    memset(&svaddr, 0, sizeof(struct sockaddr_in));
    svaddr.sin_family = AF_INET;
    inet_pton(AF_INET, SERVER_ADDR, &(svaddr.sin_addr));
    svaddr.sin_port = htons(SERVER_PORT);

    if (bind(fd, (struct sockaddr *) &svaddr, sizeof(struct sockaddr_in)) == -1)
    { 
        handle_error("bind");
    }

    for (;;) 
    {
        len = sizeof(struct sockaddr_in);
        num_bytes = recvfrom(fd, buf, BUF_SIZE, 0, (struct sockaddr *) &claddr, &len);

        if (num_bytes == 0)
        {
            break;
        }
        
        if (num_bytes == -1)
        {
            handle_error("recvfrom");
        }

        printf("Server received %ld bytes from %s\n", (long) num_bytes, 
        inet_ntop(AF_INET, &claddr.sin_addr, ip4, INET_ADDRSTRLEN));

        for (j = 0; j < num_bytes; j++)
        {
            buf[j] = toupper((unsigned char) buf[j]);
        }

        if ((sendto(fd, buf, num_bytes, 0, (struct sockaddr *) &claddr, len)) == -1)
        {
            handle_error("sendto");
        }
    }

    if (close(fd) == -1)
    {
        handle_error("close");
    }

    return 0;
}
