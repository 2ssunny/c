#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#include "arithmeticop.h" //��Ģ����
#include "oddeven.h"      //¦Ȧ��
#include "prime.h"        //�Ҽ��Ǻ�
#include "primerange.h"   //������ �Ҽ�
#include "rootrange.h"    //�Ҽ��� ������ ������
#include "linecircleh.h"  //������ ���� ����
int running()
{
    int input;
    printf("---------------------------\n");
    printf("����\n1:��Ģ����\n2:¦Ȧ �Ǻ���\n3:�Ҽ��Ǻ�\n4:������ �Ҽ�\n5:�Ҽ��� ���� ��Ʈ\n6:������ ���� ����\n:");
    scanf("%d", &input);
    printf("---------------------------\n");

    if (input == 1)
    {
        arithmeticop();
    }
    else if (input == 2)
    {
        oddeven();
    }
    else if (input == 3)
    {
        prime();
    }
    else if (input == 4)
    {
        primerange();
    }
    else if (input == 5)
    {
        rootrange();
    }
    else if (input == 6)
    {
        process();
    }
}
int main()
{
    int input = 1;
    while (input == 1)
    {
        printf("\n-----------------\n����:1\n����:2\n:");
        scanf("%d", &input);

        if (input == 1)
        {
            running();
        }
        if (input == 2)
        {
            printf("\n�����մϴ�.\n\n");
            break;
        }
    }
    system("pause");
    return 0;
}