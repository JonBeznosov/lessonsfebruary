#include "head.h"
#define BACKLOG 5

int main(int argc, char *argv[])
{
    struct sockaddr_in  svaddr;
    int sfd, cfd;
    ssize_t num_read;
    char buf[BUF_SIZE];

    sfd = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (sfd == -1)
    {
        error_message("socket");
    }
    memset(&svaddr, 0, sizeof(struct sockaddr_in));
    svaddr.sin_family = AF_INET;
    inet_pton(AF_INET, SERVER_ADDR, &(svaddr.sin_addr));
    svaddr.sin_port = htons(SERVER_PORT);

    if (bind(sfd, (struct sockaddr *) &svaddr, sizeof(struct sockaddr_in)) == -1)
    {
        error_message("bind");
    }

    if (listen(sfd, BACKLOG) == -1)
    {
        error_message("listen");
    }

    for (;;) 
    {
        cfd = accept(sfd, NULL, NULL);
        if (cfd == -1)
        {
            error_message("accept");
        }
        num_read = recv(cfd, buf, BUF_SIZE, 0);

        if (num_read == 0)
        {
            break;
        }

        if (num_read == -1)
        {
            error_message("recv");
        }

        printf("Message from client: %s\n", buf);
        
        if (send(cfd, buf, BUF_SIZE, 0) == -1)
        {
            error_message("send");
        }

        if (close(cfd) == -1)
        {
            error_message("close");
        }    
    }
    
    if (close(sfd) == -1)
    {
        error_message("close");
    }
    
    return 0;
}
