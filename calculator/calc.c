#include <stdio.h>
#include <math.h>

int main()
{
    int input;
    int calchoice, a, b, sum;
    int testchoice, c, summ;
    printf("����: 1, ¦Ȧ �˻��: 2, �Ҽ��Ǻ���: 3�� �Է��ϼ���.");
    scanf("%d", &input);

    if(input==1){ //����
        printf("������ 1, ������ 2, ������ 3, �������� 4�� �Է��ϼ���.");
        scanf("%d", &calchoice);

        if(calchoice==1){ //����
            printf("ù��° �� �Է�");
            scanf("%d",&a);
            printf("�ι�° �� �Է�");
            scanf("%d",&b);
            sum=a+b;
            printf("����� %d",sum);
        }

        if(calchoice==2){ //����
            printf("ù��° �� �Է�");
            scanf("%d",&a);
            printf("�ι�° �� �Է�");
            scanf("%d",&b);
            sum=a-b;
            printf("����� %d",sum);
        }

        if(calchoice==3){ //����
            printf("ù��° �� �Է�");
            scanf("%d",&a);
            printf("�ι�° �� �Է�");
            scanf("%d",&b);
            sum=a*b;
            printf("����� %d",sum);
        }

        if(calchoice==4){ //������
            printf("ù��° �� �Է�");
            scanf("%d",&a);
            printf("�ι�° �� �Է�");
            scanf("%d",&b);
            sum=a/b;
            printf("����� %d",sum);
        }
    }
    if(input==2){ //¦Ȧ �˻��
        printf("�˻��� ���� �Է��ϼ���");
        scanf("%d", &testchoice);
        c=testchoice%2;
        if(c==0){ //¦��
        printf("�Է��� ���� ¦���Դϴ�.");
        }
        if(c==1){ //Ȧ��
        printf("�Է��� ���� Ȧ���Դϴ�.");
        }
    }
}