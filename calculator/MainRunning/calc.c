#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#include "arithmeticop.h" //사칙연산
#include "oddeven.h"      //짝홀수
#include "prime.h"        //소수판별
#include "primerange.h"   //범위내 소수
#include "rootrange.h"    //소수점 범위내 제곱근
#include "linecircleh.h"  //직선과 원의 교점
int running()
{
    int input;
    printf("---------------------------\n");
    printf("선택\n1:사칙연산\n2:짝홀 판별기\n3:소수판별\n4:범위내 소수\n5:소수점 설정 루트\n6:직선과 원의 교점\n:");
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
        printf("\n-----------------\n시작:1\n종료:2\n:");
        scanf("%d", &input);

        if (input == 1)
        {
            running();
        }
        if (input == 2)
        {
            printf("\n종료합니다.\n\n");
            break;
        }
    }
    system("pause");
    return 0;
}