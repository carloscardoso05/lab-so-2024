#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    if (argc != 3)
    {
        puts("Insira o número de processos a serem criados e o caminho do arquivo para ser executado");
        return 1;
    }

    int n_processes = atoi(argv[1]);
    pid_t root_pid = getpid();

    int i = 1;
    while (getpid() == root_pid && i < n_processes)
    {
        fork();
        i++;
    }

    const char *path = argv[2];
    execl(path, NULL);

    return 0;
}
