#include <stdio.h>
#include <math.h>

int main()
{
    int input; // common
    int choice, a, b, sum, primeinput, ranf, rant;
    float d;

    printf("����\n1:����\n2:¦Ȧ �Ǻ���\n3:�Ҽ��Ǻ�\n4:������ �Ҽ�\n:");
    scanf("%d", &input);

    if (input == 1) //��Ģ����
    {
        printf("\n\n������ 1, ������ 2, ������ 3, �������� 4�� �Է��ϼ���.\n");
        scanf("%d", &choice);

        if (choice == 1)
        { //����
            printf("ù��° �� �Է�");
            scanf("%d", &a);
            printf("�ι�° �� �Է�");
            scanf("%d", &b);
            sum = a + b;
            printf("����� %d", sum);
        }

        if (choice == 2)
        { //����
            printf("ù��° �� �Է�");
            scanf("%d", &a);
            printf("�ι�° �� �Է�");
            scanf("%d", &b);
            sum = a - b;
            printf("����� %d", sum);
        }

        if (choice == 3)
        { //����
            printf("ù��° �� �Է�");
            scanf("%d", &a);
            printf("�ι�° �� �Է�");
            scanf("%d", &b);
            sum = a * b;
            printf("����� %d", sum);
        }

        if (choice == 4)
        { //������
            printf("ù��° �� �Է�");
            scanf("%d", &a);
            printf("�ι�° �� �Է�");
            scanf("%d", &b);
            sum = a / b;
            printf("����� %d", sum);
        }
    }
    if (input == 2) //¦Ȧ �Ǻ���
    {
        printf("\n\n�˻��� ���� �Է��ϼ���\n");
        scanf("%d", &choice);
        a = choice % 2;
        if (a == 0)
        { //¦��
            printf("�Է��� ���� ¦���Դϴ�.");
        }
        if (a == 1)
        { //Ȧ��
            printf("�Է��� ���� Ȧ���Դϴ�.");
        }
    }
    if (input == 3) //�Ҽ� �Ǻ���
    {
        printf("\n\n�Ǻ��� ���� �Է��ϼ���\n");
        scanf("%d", &primeinput);
        d = sqrt(primeinput);
        a = (int)d;
        for (int i = 1; i <= primeinput; i++) //�Ҽ� �Ǻ�
        {
            sum = primeinput % a;
        }

        if (sum != 0)
        { //�Ҽ� �ƴ�
            printf("�Է��� ���� �Ҽ��� �ƴմϴ�.");
        }
        if (sum == 0)
        { //�Ҽ�
            printf("�Է��� ���� �Ҽ��Դϴ�.");
        }
    }
    if (input == 4) //������ �Ҽ�
    {
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
    return 0;
}