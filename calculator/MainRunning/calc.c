#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#include "arithmeticop.h" //��Ģ����
#include "oddeven.h"      //¦Ȧ��
#include "prime.h"        //�Ҽ��Ǻ�
#include "primerange.h"   //������ �Ҽ�
#include "rootrange.h"    //�Ҽ��� ������ ������
#include "linecircleh.h"  //������ ���� ����

int main()
{
    int input;
    printf("����\n1:��Ģ����\n2:¦Ȧ �Ǻ���\n3:�Ҽ��Ǻ�\n4:������ �Ҽ�\n5:�Ҽ��� ���� ��Ʈ\n6:������ ���� ����\n:");
    scanf("%d", &input);

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
    return 0;
}