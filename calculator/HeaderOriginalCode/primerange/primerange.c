#include <stdio.h>
#include <stdlib.h>

int primerange() //������ �Ҽ�
{
    int ranf, rant, a, b;
    printf("\n������ ���� �� �� �Է�\n:");
    scanf("%d", &ranf);
    printf("\n������ ���� �� �Է�\n:");
    scanf("%d", &rant);
    printf("\n%d�� %d������ �Ҽ�:\n ", ranf, rant);
    for (a = ranf; a <= rant; a++)
    {
        for (b = 2; b < a; b++) // a�� �Ҽ��� b�� a�� �Ǹ� �ݺ����� ����
        {
            if (a % b == 0) // b�� a�� ���
            {
                break; // b�� a���� ���� ���·� �ݺ��� Ż��
            }
        }
        if (b == a) //�Ҽ���
        {
            printf("%d  ", b);
        }
    }
    printf("\n");
}

int main()
{
    primerange();
    return 0;
}