#include <stdio.h>
#include <sys/socket.h>
#include <netdb.h>

int main(int ac, char **av)
{
    if (ac < 2)
        return fprintf(stdout, "Please provide an argument!");

    (void)av;

    int sockfd = socket(AF_INET, SOCK_RAW, IPPROTO_ICMP);

    return 0;
}
