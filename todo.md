# TODO

[] Create the simple logic of how the ping function will work
[] Start coding

## Steps to follow

- ./binary <hostname>
1. Take a hostname as input
2. Do a DNS lookup
    3. Use gethostbyname() which returns a structure of type hostent which contains IP addresses in the form of binary dot notation and also address type
4. Open a raw socket using SOCK_RAW with the IPPROTO_ICMP as protocol.
    5. while loop to make the ping run always.
6. When CTRL + C is pressed. ping gives a report => implement the signal handler.
5. main ping loop:
    - 
