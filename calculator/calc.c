#include <stdio.h>
#include <math.h>

int main()
{
    int input; // common
    int choice, a, b, sum, printinput, ranf, rant, e, f;
    float d;

    printf("선택\n1:계산기\n2:짝홀 판별기\n3:소수판별\n4:범위내 소수\n:");
    scanf("%d", &input);

    if (input == 1) //사칙연산
    {
        printf("\n\n덧셈은 1, 뺄셈은 2, 곱셈은 3, 나눗셈은 4를 입력하세요.\n");
        scanf("%d", &choice);

        if (choice == 1)
        { //덧셈
            printf("첫번째 수 입력");
            scanf("%d", &a);
            printf("두번째 수 입력");
            scanf("%d", &b);
            sum = a + b;
            printf("결과는 %d", sum);
        }

        if (choice == 2)
        { //뺄셈
            printf("첫번째 수 입력");
            scanf("%d", &a);
            printf("두번째 수 입력");
            scanf("%d", &b);
            sum = a - b;
            printf("결과는 %d", sum);
        }

        if (choice == 3)
        { //곱셈
            printf("첫번째 수 입력");
            scanf("%d", &a);
            printf("두번째 수 입력");
            scanf("%d", &b);
            sum = a * b;
            printf("결과는 %d", sum);
        }

        if (choice == 4)
        { //나눗셈
            printf("첫번째 수 입력");
            scanf("%d", &a);
            printf("두번째 수 입력");
            scanf("%d", &b);
            sum = a / b;
            printf("결과는 %d", sum);
        }
    }
    if (input == 2) //짝홀 판별기
    {
        printf("\n\n검사할 수를 입력하세요\n");
        scanf("%d", &choice);
        a = choice % 2;
        if (a == 0)
        { //짝수
            printf("입력한 수는 짝수입니다.");
        }
        if (a == 1)
        { //홀수
            printf("입력한 수는 홀수입니다.");
        }
    }
    if (input == 3) //소수 판별기
    {
        printf("\n\n판별할 수를 입력하세요\n");
        scanf("%d", &primeinput);
        d = sqrt(primeinput);
        a = (int)d;
        for (int i = 1; i <= primeinput; i++) //소수 판별
        {
            sum = primeinput % a;
        }

        if (sum != 0)
        { //소수 아님
            printf("입력한 수는 소수가 아닙니다.");
        }
        if (sum == 0)
        { //소수
            printf("입력한 수는 소수입니다.");
        }
    }
    if (input == 4) //범위내 소수
    {
        printf("\n범위를 시작 할 수 입력\n:");
        scanf("%d", &ranf);
        printf("\n범위를 끝낼 수 입력\n:");
        scanf("%d", &rant);
        printf("\n");
        for (e = ranf; e <= rant; e++)
        {
            for (f = 2; f < e; f++) // n이 소수면 i가 n이 되면 반복문이 끝남
            {
                if (e % f == 0) // i는 n의 약수
                {
                    break; // i가 n보다 작은 상태로 반복문 탈출
                }
            }
            if (f == e) //소수임
            {
                printf("%d  ", f);
            }
        }
        printf("\n");
    }
}