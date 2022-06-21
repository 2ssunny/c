#include <stdio.h>
#include <math.h>

int arithmeticop() //사칙연산
{
    int choice, a, b, sum;

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
int oddeven() //짝홀판별
{
    int choice, a;
    printf("\n\n검사할 수를 입력하세요\n");
    scanf("%d", &choice);
    a = choice % 2;
    if (a == 0) //짝수
    {
        printf("입력한 수는 짝수입니다.");
    }
    else // a!=0 -> 홀수
    {
        printf("입력한 수는 홀수입니다.");
    }
}
int prime() //소수판별
{
    int primeinput, a, d, sum;
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
int pirmerange() //범위내 소수
{
    int ranf, rant, a, b;
    printf("\n범위를 시작 할 수 입력\n:");
    scanf("%d", &ranf);
    printf("\n범위를 끝낼 수 입력\n:");
    scanf("%d", &rant);
    printf("\n%d와 %d사이의 소수:\n ", ranf, rant);
    for (a = ranf; a <= rant; a++)
    {
        for (b = 2; b < a; b++) // a이 소수면 b가 a이 되면 반복문이 끝남
        {
            if (a % b == 0) // b는 a의 약수
            {
                break; // b가 a보다 작은 상태로 반복문 탈출
            }
        }
        if (b == a) //소수임
        {
            printf("%d  ", b);
        }
    }
    printf("\n");
}
int rootrange() //소수점 범위내 루트-edit needed
{
    int a, b;
    double c;
    printf("제곱근을 알고 싶은 양수 입력\n:");
    scanf("%d", &a);
    c = sqrt(a);
    printf("소수점 범위 입력(0~6)\n:");
    scanf("%d", &b);
    if (b = 0)
    {
        printf("%.0Lf", c);
    }

    else if (b = 1)
    {
        printf("%.1Lf", c);
    }

    else if (b = 2)
    {
        printf("%.2Lf", c);
    }

    else if (b = 3)
    {
        printf("%.3Lf", c);
    }

    else if (b = 4)
    {
        printf("%.4Lf", c);
    }

    else if (b = 5)
    {
        printf("%.5Lf", c);
    }

    else if (b = 6)
    {
        printf("%.6Lf", c);
    }
}

int main()
{
    int input; //선택 입력 받기
    printf("선택\n1:계산기\n2:짝홀 판별기\n3:소수판별\n4:범위내 소수\n5:소수점 설정 루트\n:");
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
        pirmerange();
    }
    else if (input == 5)
    {
        rootrange();
    }
    return 0;
}