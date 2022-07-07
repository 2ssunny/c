#pragma region
int rootrange() //소수점 범위내 루트-edit need
{
    int a, b;
    double c;
    printf("제곱근을 알고 싶은 양수 입력\n:");
    scanf("%d", &a);
    c = sqrt(a);
    printf("소수점 범위 입력(0~6)\n:");
    scanf("%d", &b);
    /*printf("%.0f\n", c);
    printf("%.1f\n", c);
    printf("%.2f\n", c);
    printf("%.3f\n", c);
    printf("%.4f\n", c);
    printf("%.5f\n", c);
    printf("%.6f\n", c);*/

    if (b = 0)
    {
        printf("%.0f", c);
    }
    else if (b = 1)
    {
        printf("%.1f", c);
    }
    else if (b = 2)
    {
        printf("%.2f", c);
    }
    else if (b = 3)
    {
        printf("%.3f", c);
    }
    else if (b = 4)
    {
        printf("%.4f", c);
    }
    else if (b = 5)
    {
        printf("%.5f", c);
    }
    else if (b = 6)
    {
        printf("%f", c);
    }
    else
    {
        printf("잘못 입력하셨습니다.\n");
    }
}
#pragma endregion