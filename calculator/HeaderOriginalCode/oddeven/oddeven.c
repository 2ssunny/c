#include <stdio.h>
#include <stdlib.h>

int oddeven() //¦Ȧ�Ǻ�
{
    int choice, a;
    printf("\n\n�˻��� ���� �Է��ϼ���\n");
    scanf("%d", &choice);
    a = choice % 2;
    if (a == 0) //¦��
    {
        printf("�Է��� ���� ¦���Դϴ�.");
    }
    else // a!=0 -> Ȧ��
    {
        printf("�Է��� ���� Ȧ���Դϴ�.");
    }
}

int main()
{
    oddeven();
    return 0;
}