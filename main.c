#include<stdlib.h>
#include"welcome.h"
#include"pass.h"

int main()
{
    int a;
    char b,c;
    wlcme();
    while (1)
    {
        system("cls");
        print1();
        a = selectt();
        while (a == 0)
        {
            a = selectt();
        }
        system("cls");
        printf("��Ӯ��!\n");
        Sleep(1000);
        printf("��q�˳�������������:");
 //       b = getchar();
        c = getch();
        if (c == 'q') break;
    }
    return 0;
}