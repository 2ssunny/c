#include <stdio.h>
#include <stdlib.h>

//����, ���� ���� ������ ���� ��ǥ ã��
//����(����, �� ��), ����(�߽�, ������ ����)

double m, lx, ly, liney;        //����
double cx, cy, cr, xx, yy, crr; //��
int back, Do;                   // summary and interacting

int stline_gi() //����� �� ��
{
    int xl, yl;
    printf("������ ���� �Է�:\n");
    scanf("%Lf", &m);
    printf("������ ������ �� ���� x��ǥ:\n");
    scanf("%Lf", &lx);
    printf("������ ������ �� ���� y��ǥ:\n");
    scanf("%Lf", &ly);
    liney = ly - (m * lx);
    xl = (yl - liney) / m;
    yl = m * xl + liney;

    printf("������ ������:\n y=%Lfx+%Lf\n", m, liney);
}

int circle() //���� ������
{
    int x, y;
    printf("���� �߽��� x��ǥ �Է�:\n");
    scanf("%Lf", &cx);
    printf("���� �߽��� y��ǥ �Է�:\n");
    scanf("%Lf", &cy);
    printf("���� ������ ���� �Է�:\n");
    scanf("%Lf", &cr);

    xx = (x - cx) * (x - cx);
    yy = (y - cy) * (y - cy);
    crr = cr * cr;
    printf("���� ������:\n(x-%Lf)��+(y-%Lf)��=%Lf\n", cx, cy, crr);
}

int calcD()
{
    double D; //�Ǻ��� D
    D = (2 * m * liney) * (2 * m * liney) - 4 * (m * m + 1) * ((liney * liney) - (cr * cr));
    // D = b * b - (4 * a * c) =>�Ǻ��� D ���
    printf("%Lf\n\n\n", D);
    if (D == 0) // D=0 -> ������ 1��
    {
        Do = 1;
        back = 30;
    }
    if (D > 0) // D>0 -> ������ 2��
    {
        Do = 2;
        back = 30;
    }
    if (D < 0) // D<0 ->������ 0��
    {
        Do = 0;
        back = 30;
    }
}
int summary()
{
    if (Do == 0) //���� 0��
    {
        printf("y=%Lfx+%Lf�� (x-%Lf)��+(y-%Lf)��=%Lf ���̿��� ������ %d�� �Դϴ�.\n", m, liney, cx, cy, crr, Do);
    }
    if (Do == 1) //���� 1��
    {
        printf("y=%Lfx+%Lf�� (x-%Lf)��+(y-%Lf)��=%Lf ���̿��� ������ %d�� �Դϴ�.\n", m, liney, cx, cy, crr, Do);
    }
    if (Do == 2) //���� 2��
    {
        printf("y=%Lfx+%Lf�� (x-%Lf)��+(y-%Lf)��=%Lf ���̿��� ������ %d�� �Դϴ�.\n", m, liney, cx, cy, crr, Do);
    }
}
int main()
{

    stline_gi();
    circle();
    calcD();
    summary();
    system("pause");
    return 0;
}