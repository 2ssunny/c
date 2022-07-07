#pragma region
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
#pragma endregion