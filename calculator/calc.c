#include <stdio.h><math.h>

int main()
{
    int input; //common
    int calchoice, a, b, sum; //���
    int testchoice, c, summ; //¦Ȧ
    int primeinput, e, f, divsum; //�Ҽ��Ǻ�
    float d; //�Ҽ��Ǻ�

    printf("����\n1:����\n2:¦Ȧ �Ǻ���\n3:�Ҽ��Ǻ�\n:");
    scanf("%d", &input);

    if(input==1){ //����
        printf("������ 1, ������ 2, ������ 3, �������� 4�� �Է��ϼ���.\n");
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
    if(input==2){ //¦Ȧ �Ǻ���
        printf("�˻��� ���� �Է��ϼ���\n");
        scanf("%d", &testchoice);
        c=testchoice%2;
        if(c==0){ //¦��
        printf("�Է��� ���� ¦���Դϴ�.");
        }
        if(c==1){ //Ȧ��
        printf("�Է��� ���� Ȧ���Դϴ�.");
        }
    }
    if(input==3){ //�Ҽ� �Ǻ���
        printf("�Ǻ��� ���� �Է��ϼ���\n");
        scanf("%d",&primeinput);
        d=sqrt(primeinput);
        int f=(int)d;
        for (int i=1; i<=primeinput; i++)
        {
            divsum=primeinput%f;
        }
        
        if(divsum==0){
            printf("�Է��� ���� �Ҽ��� �ƴմϴ�.");
        }
        if(divsum!=0){
            printf("�Է��� ���� �Ҽ��Դϴ�.");
        }
        
    }
    
}