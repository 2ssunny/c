#include <stdio.h>
#include <stdlib.h>

int arithmeticop() //��Ģ����
{
    int choice, a, b, sum;

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
int main()
{
    arithmeticop();
    return 0;
}