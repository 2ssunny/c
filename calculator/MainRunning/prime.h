#pragma region
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
#pragma endregion