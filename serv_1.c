#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/socket.h>

void error_handling(char *message);

int main(int argc, char *argv[]) {
  int serv_sock;
  int clnt_sock;

  struct sockaddr_in serv_addr;
  struct clnt_sock;
  socklen_t clnt_addr_size;

  char message[] = "hello world!";

  if (argc != 2)
  {
    /* code */
    printf("Usage : %s <port> \n", argv[0]);
    exit(1);
  }

  serv_sock = socket(PF_INET, SOCK_STREAM, 0);
  if (serv_sock == -1)
    error_handling("socket() error");

  memset(&serv_addr, 0, sizeof(serv_addr));
  serv_addr.sin_family = AF_INET;

  return 0;
} 

void error_handling(char * message) {
  fputs(message, stderr);
  fputc('\n', stderr);
  exit(1);
}