#pragma region
int primerange() //������ �Ҽ�
{
    int ranf, rant, a, b, sum;
    float c;
    printf("\n������ ���� �� �� �Է�\n:");
    scanf("%d", &ranf);
    printf("\n������ ���� �� �Է�\n:");
    scanf("%d", &rant);
    printf("\n%d�� %d������ �Ҽ�:\n ", ranf, rant);
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
int prime() //�Ҽ��Ǻ�
{
    int primeinput, sum, b;
    float a;
    printf("\n\n�Ǻ��� ���� �Է��ϼ���\n");
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
        printf("%d��(��) �Ҽ��Դϴ�\n", primeinput);
    }
    else
    {
        printf("%d��(��) �Ҽ��� �ƴմϴ�\n", primeinput);
    }
}
#pragma endregion*/