#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int prime() //�Ҽ��Ǻ�
{
    int primeinput, a, d, sum;
    printf("\n\n�Ǻ��� ���� �Է��ϼ���\n");
    scanf("%d", &primeinput);
    d = sqrt(primeinput);
    a = (int)d;
    for (int i = 1; i <= primeinput; i++) //�Ҽ� �Ǻ�
    {
        sum = primeinput % a;
         if (sum != 0)
    { //�Ҽ� �ƴ�
        printf("�Է��� ���� �Ҽ��� �ƴմϴ�.");
    }
    if (sum == 0)
    { //�Ҽ�
        printf("�Է��� ���� �Ҽ��Դϴ�.");
    }
    }

   
}

int main()
{
    prime();
    return 0;
}