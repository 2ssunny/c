#pragma region
int primerange() //범위내 소수
{
    int ranf, rant, a, b, sum;
    float c;
    printf("\n범위를 시작 할 수 입력\n:");
    scanf("%d", &ranf);
    printf("\n범위를 끝낼 수 입력\n:");
    scanf("%d", &rant);
    printf("\n%d와 %d사이의 소수:\n ", ranf, rant);
    for (a = ranf; a <= rant; a++)
    {
        c = sqrt(a);
        for (b = 2; b <= c; b++)
        {
            if (a % b == 0)
            {
                sum = 1;
                break;
            }
        }
        if (sum == 0)
        {
            printf("%d\n", a);
        }
        sum = 0;
    }
}
#pragma endregion

/*#pragma region
int prime() //소수판별
{
    int primeinput, sum, b;
    float a;
    printf("\n\n판별할 수를 입력하세요\n");
    scanf("%d", &primeinput);
    a = sqrt(primeinput);
    for (b = 2; b <= a; b++)
    {
        if (primeinput % b == 0)
        {
            sum = 1;
            break;
        }
    }

    if (sum == 0)
    {
        printf("%d은(는) 소수입니다\n", primeinput);
    }
    else
    {
        printf("%d은(는) 소수가 아닙니다\n", primeinput);
    }
}
#pragma endregion*/