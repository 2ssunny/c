#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*����, ���� ���� ������ ���� ��ǥ ã��
����(����, �� ��), ����(�߽�, ������ ����)*/

double m, lx, ly, liney;        //����
double cx, cy, cr; //��
int back, Do;                   // summary and interacting
double xa, ya, xb, yb, D;       // summary

int stline_gi() //����� �� ��
{
    printf("������ ���� �Է�:\n");
    scanf("%Lf", &m);
    printf("������ ������ �� ���� x��ǥ:\n");
    scanf("%Lf", &lx);
    printf("������ ������ �� ���� y��ǥ:\n");
    scanf("%Lf", &ly);
    liney = ly - (m * lx);

    if (liney >= 0)
    {
        printf("������ ������:\n y=%Lfx+%Lf\n", m, liney);
    }
    else
    {
        printf("������ ������:\n y=%Lfx%Lf\n", m, liney);
    }
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
    printf("���� ������:\n(x-%Lf)��+(y-%Lf)��=%Lf\n\n", cx, cy, cr*cr);
}

int calcD() //�Ǻ��� ���
{
    double A, B, C, rootD;
    double lineycy;
    lineycy = liney - cy;
    A = m * m + 1;
    B = m * lineycy - cx; // x�� 1/2 => 2B�� ����ؼ� x��
    C = cx * cx + lineycy * lineycy - cr*cr;
    D = 4 * B * B - 4 * A * C;
    rootD = sqrt(D);

    xa=(-2*B+rootD)/(2*A);
    xb=(-2*B-rootD)/(2*A);
    ya=m*xa+liney;
    yb=m*xb+liney;
    /*xa = (-4 * B + rootD) / (2 * A);
    xb = (-4 * B - rootD) / (2 * A);
    ya = m * xa + liney;
    yb = m * xb + liney;
    */

    printf("\n\n\nD=%Lf\n\n\n", D); // D�� Ȯ��

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
int summary() //��� ���
{
    if (Do == 0) //���� 0��
    {
        printf("y=%Lfx+%Lf�� (x-%Lf)��+(y-%Lf)��=%Lf ���̿��� ������ %d�� �Դϴ�.\n", m, liney, cx, cy, cr*cr, Do);
    }
    if (Do == 1) //���� 1��
    {
        printf("y=%Lfx+%Lf�� (x-%Lf)��+(y-%Lf)��=%Lf ���̿��� ������ %d�� �Դϴ�.\n", m, liney, cx, cy, cr*cr, Do);
        printf("������ ��ǥ:(%Lf,%Lf)", xa, yb);
    }
    if (Do == 2) //���� 2��
    {
        printf("y=%Lfx+%Lf�� (x-%Lf)��+(y-%Lf)��=%Lf ���̿��� ������ %d�� �Դϴ�.\n", m, liney, cx, cy, cr*cr, Do);
        printf("������ ��ǥ:(%Lf,%Lf), (%Lf,%Lf)\n", xa, ya, xb, yb);
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