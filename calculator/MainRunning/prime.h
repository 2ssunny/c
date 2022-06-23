#pragma region
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
#pragma endregion