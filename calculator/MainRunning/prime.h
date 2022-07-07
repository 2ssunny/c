#pragma region
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
#pragma endregion