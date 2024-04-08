#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "./include/server.h"

int main(int argc, char* argv[])
{
    if (argc < 3)
    {
        printf("./a.out port path\n");
        return -1;
    }
    unsigned short port = atoi(argv[1]);
    // �л��������Ĺ���·��
    chdir(argv[2]);
    // ��ʼ�����ڼ������׽���
    int lfd = initListenFd(port);
    // ��������������
    epollRun(lfd);

    return 0;
}